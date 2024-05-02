#include "viewerwindow.h"

#include "ui_viewerwindow.h"

ViewerWindow::ViewerWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::ViewerWindow) {
  ui->setupUi(this);
  controller.ReadConfig();
  ui->view->setSettings(controller.getConfigSettings());
  syncSettings();
}

ViewerWindow::~ViewerWindow() { delete ui; }

ViewerWindow* ViewerWindow::GetInstance() {
  if (instance == nullptr) instance = new ViewerWindow();
  return instance;
}

void ViewerWindow::DestroyInstance() {
  if (instance) delete instance;
}

void ViewerWindow::on_button_bg_color_clicked() {
  QColor new_color = QColorDialog::getColor();

  ui->view->getSettings()->bg_red = new_color.redF();
  ui->view->getSettings()->bg_green = new_color.greenF();
  ui->view->getSettings()->bg_blue = new_color.blueF();

  controller.UpdateConfig();
  ui->view->setBgColor(new_color.redF(), new_color.greenF(), new_color.blueF());
}

void ViewerWindow::on_button_load_clicked() {
  QString filename =
      QFileDialog::getOpenFileName(this, "Open a .obj file", "./");

  std::shared_ptr<my::objData> obj_ptr;
  try {
    obj_ptr = controller.GetObject(filename.toStdString());
    ui->view->setFileName(filename.toStdString());
    ui->label_file->setText(filename);
    ui->view->setNewData(obj_ptr);
    ui->view->update();
    ui->label_vertexes_amount->setText(
        QString::number(obj_ptr->get_vertex_amount()));
    ui->label_edges_amount->setText(
        QString::number(obj_ptr->get_indexes_amount()));
    set_default_transforms();
  } catch (std::runtime_error&) {
    if (filename != "")
      ui->label_file->setText("Error: " + filename);
    else
      ui->label_file->setText("Error");
    ui->view->update();
  }
}

void ViewerWindow::on_button_edge_color_clicked() {
  QColor new_color = QColorDialog::getColor();

  ui->view->getSettings()->edge_red = new_color.redF();
  ui->view->getSettings()->edge_green = new_color.greenF();
  ui->view->getSettings()->edge_blue = new_color.blueF();

  UpdateView();
}

void ViewerWindow::on_button_vertex_color_clicked() {
  QColor new_color = QColorDialog::getColor();

  ui->view->getSettings()->vertex_red = new_color.redF();
  ui->view->getSettings()->vertex_green = new_color.greenF();
  ui->view->getSettings()->vertex_blue = new_color.blueF();

  UpdateView();
}

void ViewerWindow::on_proj_type_parallel_clicked() {
  ui->view->getSettings()->projection_type = my::KPARALLEL;

  UpdateView();
}

void ViewerWindow::on_proj_type_central_clicked() {
  ui->view->getSettings()->projection_type = my::KCENTRAL;

  UpdateView();
}

void ViewerWindow::on_type_square_clicked() {
  ui->view->getSettings()->vertex_type = my::KSQUARE;

  UpdateView();
}

void ViewerWindow::on_type_circle_clicked() {
  ui->view->getSettings()->vertex_type = my::KCIRCLE;

  UpdateView();
}

void ViewerWindow::on_type_none_clicked() {
  ui->view->getSettings()->vertex_type = my::KNONE;

  UpdateView();
}

void ViewerWindow::on_type_dotted_clicked() {
  ui->view->getSettings()->edge_type = my::KDOTTED;

  UpdateView();
}

void ViewerWindow::on_type_solid_clicked() {
  ui->view->getSettings()->edge_type = my::KSOLID;

  UpdateView();
}

void ViewerWindow::on_slider_thickness_sliderMoved(int position) {
  ui->view->getSettings()->edge_thickness = static_cast<uint32_t>(position);

  UpdateView();
}

void ViewerWindow::on_slider_size_sliderMoved(int position) {
  ui->view->getSettings()->vertex_size = static_cast<uint32_t>(position);

  UpdateView();
}

void ViewerWindow::syncSettings() {
  auto set = controller.getConfigSettings();

  ui->slider_size->setValue(set->vertex_size);
  ui->slider_thickness->setValue(set->edge_thickness);

  if (set->vertex_type == my::KNONE)
    ui->type_none->setChecked(true);
  else if (set->vertex_type == my::KCIRCLE)
    ui->type_circle->setChecked(true);
  else
    ui->type_square->setChecked(true);

  if (set->edge_type == my::KSOLID)
    ui->type_solid->setChecked(true);
  else
    ui->type_dotted->setChecked(true);

  if (set->projection_type == my::KCENTRAL)
    ui->proj_type_central->setChecked(true);
  else
    ui->proj_type_parallel->setChecked(true);
}

QString ViewerWindow::getFilenameFromTime(const QString& extension) {
  QDateTime cur = QDateTime::currentDateTime();
  return QDir::currentPath() + "/" + cur.toString("yyyy_MM_dd_hh_mm_ss.") +
         extension;
}

void ViewerWindow::noticeLabelSetText(const QString& str) {
  ui->label_note->setText(str);

  QTimer::singleShot(2000, nullptr, [&]() { ui->label_note->clear(); });
}

void ViewerWindow::on_button_save_clicked() {
  ui->view->grab().save(getFilenameFromTime("jpeg"), "jpeg");
  noticeLabelSetText("Image saved in format .jpeg!");
}

void ViewerWindow::on_button_save_bmp_clicked() {
  ui->view->grab().save(getFilenameFromTime("bmp"), "bmp");
  noticeLabelSetText("Imaged saved in format .bmp!");
}

void ViewerWindow::UpdateView() {
  ui->view->update();
  controller.UpdateConfig();
}

void ViewerWindow::on_button_gif_clicked() { ; }

void ViewerWindow::on_slider_rotate_x_valueChanged(int value) {
  auto data = ui->view->getData();

  if (data) {
    my::RotateX t = my::RotateX();
    controller.Transform(&t, data, cur_rotate_x - value * 3.6);
    cur_rotate_x = value * 3.6;
    ui->view->update();
  }
}

void ViewerWindow::on_slider_rotate_y_valueChanged(int value) {
  auto data = ui->view->getData();

  if (data) {
    my::RotateY t = my::RotateY();
    controller.Transform(&t, data, cur_rotate_y - value * 3.6);
    cur_rotate_y = value * 3.6;
    ui->view->update();
  }
}

void ViewerWindow::on_slider_rotate_z_valueChanged(int value) {
  auto data = ui->view->getData();

  if (data) {
    my::RotateZ t = my::RotateZ();
    controller.Transform(&t, data, cur_rotate_z - value * 3.6);
    cur_rotate_z = value * 3.6;
    ui->view->update();
  }
}

void ViewerWindow::on_move_x_neg_clicked() {
  auto data = ui->view->getData();

  if (data) {
    my::MoveX t = my::MoveX();
    controller.Transform(&t, data, static_cast<double>(-10.0 / 100));
    ui->view->update();
  }
}

void ViewerWindow::on_move_x_pos_clicked() {
  auto data = ui->view->getData();

  if (data) {
    my::MoveX t = my::MoveX();
    controller.Transform(&t, data, static_cast<double>(10.0 / 100));
    ui->view->update();
  }
}

void ViewerWindow::on_move_y_neg_clicked() {
  auto data = ui->view->getData();

  if (data) {
    my::MoveY t = my::MoveY();
    controller.Transform(&t, data, static_cast<double>(10.0 / 100));
    ui->view->update();
  }
}

void ViewerWindow::on_move_y_pos_clicked() {
  auto data = ui->view->getData();

  if (data) {
    my::MoveY t = my::MoveY();
    controller.Transform(&t, data, static_cast<double>(-10.0 / 100));
    ui->view->update();
  }
}

void ViewerWindow::on_move_z_neg_clicked() {
  auto data = ui->view->getData();

  if (data) {
    my::MoveZ t = my::MoveZ();
    controller.Transform(&t, data, static_cast<double>(-10.0 / 100));
    ui->view->update();
  }
}

void ViewerWindow::on_move_z_pos_clicked() {
  auto data = ui->view->getData();

  if (data) {
    my::MoveZ t = my::MoveZ();
    controller.Transform(&t, data, static_cast<double>(10.0 / 100));
    ui->view->update();
  }
}

void ViewerWindow::on_scale_neg_clicked() {
  auto data = ui->view->getData();

  if (data) {
    my::Scale t = my::Scale();

    controller.Transform(&t, data, 1 / 1.1);
    ui->view->update();
  }
}

void ViewerWindow::on_scale_pos_clicked() {
  auto data = ui->view->getData();

  if (data) {
    my::Scale t = my::Scale();

    controller.Transform(&t, data, 1.1);
    ui->view->update();
  }
}

void ViewerWindow::set_default_transforms() {
  cur_rotate_x = 0;
  cur_rotate_y = 0;
  cur_rotate_z = 0;

  ui->slider_rotate_x->setValue(0);
  ui->slider_rotate_y->setValue(0);
  ui->slider_rotate_z->setValue(0);
}
