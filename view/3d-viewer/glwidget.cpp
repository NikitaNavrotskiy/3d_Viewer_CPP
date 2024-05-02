#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent) {}

void GLWidget::initializeGL() {
  initializeOpenGLFunctions();
  glEnable(GL_DEPTH_TEST);
}

void GLWidget::resizeGL(int w, int h) {
  glViewport(0, 0, w, h);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
}

void GLWidget::paintGL() {
  glClearColor(set->bg_red, set->bg_green, set->bg_blue, 1);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  projectionMat.setToIdentity();
  if (set->projection_type == my::KPARALLEL) {
    projectionMat.ortho(-1, 1, -1, 1, 0.1, 100);
  } else {
    projectionMat.perspective(45, 1, 0.1, 10);
  }

  QMatrix4x4 model;
  model.lookAt(QVector3D(0, 1, 4), QVector3D(0, 0, 0), QVector3D(0, 1, 0));

  glMatrixMode(GL_PROJECTION);
  glLoadMatrixf(projectionMat.constData());

  glMatrixMode(GL_MODELVIEW);
  glLoadMatrixf(model.constData());

  if (data) {
    draw();
  }
}

void GLWidget::draw() {
  glColor3f(set->vertex_red, set->vertex_green, set->vertex_blue);
  glPointSize(set->vertex_size);

  glTranslatef(0, 0, 0.5);
  glRotatef(xRot, 1, 0, 0);
  glRotatef(yRot, 0, 1, 0);

  draw_vertexes();
  draw_edges();
}

void GLWidget::draw_vertexes() {
  auto vertexes = data->get_vertexes();

  if (set->vertex_type == my::KCIRCLE) glEnable(GL_POINT_SMOOTH);
  if (set->vertex_type != my::KNONE) {
    glBegin(GL_POINTS);
    auto count = data->get_vertex_amount();
    for (size_t i = 0; i < count; i++) {
      glVertex3f((*vertexes)[i * 3], (*vertexes)[i * 3 + 1],
                 (*vertexes)[i * 3 + 2]);
    }
    glEnd();
  }
  if (set->vertex_type == my::KCIRCLE) glDisable(GL_POINT_SMOOTH);
}

void GLWidget::draw_edges() {
  auto vertexes = data->get_vertexes();
  auto indexes = data->get_indexes();
  auto count = data->get_indexes_amount();

  if (set->edge_type == my::KDOTTED) {
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(1, 2);
  }

  glLineWidth(set->edge_thickness);
  glColor3f(set->edge_red, set->edge_green, set->edge_blue);

  glBegin(GL_LINES);
  for (size_t i = 0; i < count; i++) {
    int i1 = (*indexes)[i * 3] - 1;
    int i2 = (*indexes)[i * 3 + 1] - 1;
    int i3 = (*indexes)[i * 3 + 2] - 1;

    glVertex3f((*vertexes)[i1 * 3], (*vertexes)[i1 * 3 + 1],
               (*vertexes)[i1 * 3 + 2]);
    glVertex3f((*vertexes)[i2 * 3], (*vertexes)[i2 * 3 + 1],
               (*vertexes)[i2 * 3 + 2]);
    glVertex3f((*vertexes)[i2 * 3], (*vertexes)[i2 * 3 + 1],
               (*vertexes)[i2 * 3 + 2]);
    glVertex3f((*vertexes)[i3 * 3], (*vertexes)[i3 * 3 + 1],
               (*vertexes)[i3 * 3 + 2]);
    glVertex3f((*vertexes)[i1 * 3], (*vertexes)[i1 * 3 + 1],
               (*vertexes)[i1 * 3 + 2]);
    glVertex3f((*vertexes)[i3 * 3], (*vertexes)[i3 * 3 + 1],
               (*vertexes)[i3 * 3 + 2]);
  }
  glEnd();
  if (set->edge_type == my::KDOTTED) glDisable(GL_LINE_STIPPLE);
}

void GLWidget::mousePressEvent(QMouseEvent *mouse) { mPos = mouse->pos(); }

void GLWidget::mouseMoveEvent(QMouseEvent *mouse) {
  xRot = 1 / M_PI * (mouse->pos().y() - mPos.y());
  yRot = 1 / M_PI * (mouse->pos().x() - mPos.x());
  update();
}

void GLWidget::setBgColor(float red, float green, float blue) {
  set->bg_red = red;
  set->bg_green = green;
  set->bg_blue = blue;

  repaint();
}

void GLWidget::setFileName(const std::string &filename) {
  this->filename = filename;
}

void GLWidget::setNewData(std::shared_ptr<my::objData> data) {
  this->data = data;
}

std::shared_ptr<my::Settings> GLWidget::getSettings() { return set; }

void GLWidget::setSettings(std::shared_ptr<my::Settings> set) {
  this->set = set;
}

std::shared_ptr<my::objData> GLWidget::getData() { return data; }
