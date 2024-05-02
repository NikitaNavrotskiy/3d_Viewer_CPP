#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QMatrix4x4>
#include <QMouseEvent>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QVector3D>
#include <cmath>

#include "../../model/obj_data.h"
#include "../../model/settings.h"

class GLWidget : public QOpenGLWidget, protected QOpenGLFunctions {
 public:
  GLWidget(QWidget* parent = nullptr);

  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;

  void setBgColor(float red, float green, float blue);
  void setFileName(const std::string& filename);
  void setNewData(std::shared_ptr<my::objData> data);
  void setSettings(std::shared_ptr<my::Settings> set);
  std::shared_ptr<my::Settings> getSettings();
  std::shared_ptr<my::objData> getData();

 private:
  void draw();
  void draw_vertexes();
  void draw_edges();

  void mousePressEvent(QMouseEvent* mouse) override;
  void mouseMoveEvent(QMouseEvent* mouse) override;

 private:
  std::string filename;
  std::shared_ptr<my::Settings> set;
  std::shared_ptr<my::objData> data;
  QVector<float> vertexes;

  QMatrix4x4 projectionMat;
  float xRot, yRot, zRot;
  QPoint mPos;
};

#endif  // GLWIDGET_H
