#ifndef VIEWERWINDOW_H
#define VIEWERWINDOW_H

#include <QColorDialog>
#include <QDateTime>
#include <QDir>
#include <QFileDialog>
#include <QMainWindow>
#include <QOpenGLWidget>
#include <QSize>
#include <QTimer>

#include "../../controller/controller.h"
#include "glwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class ViewerWindow;
}
QT_END_NAMESPACE

class ViewerWindow : public QMainWindow {
  Q_OBJECT

 public:
  static ViewerWindow *GetInstance();
  static void DestroyInstance();

 private:
  ViewerWindow(QWidget *parent = nullptr);
  ~ViewerWindow();

 private slots:
  void on_button_bg_color_clicked();

  void on_button_load_clicked();

  void on_button_edge_color_clicked();

  void on_button_vertex_color_clicked();

  void on_proj_type_parallel_clicked();

  void on_proj_type_central_clicked();

  void on_type_square_clicked();

  void on_type_circle_clicked();

  void on_type_none_clicked();

  void on_type_dotted_clicked();

  void on_type_solid_clicked();

  void on_slider_thickness_sliderMoved(int position);

  void on_slider_size_sliderMoved(int position);

  void on_button_save_clicked();

  void on_button_gif_clicked();

  void on_slider_rotate_x_valueChanged(int value);

  void on_slider_rotate_y_valueChanged(int value);

  void on_slider_rotate_z_valueChanged(int value);

  void on_move_x_neg_clicked();

  void on_move_x_pos_clicked();

  void on_move_y_neg_clicked();

  void on_move_y_pos_clicked();

  void on_move_z_neg_clicked();

  void on_move_z_pos_clicked();

  void on_scale_neg_clicked();

  void on_scale_pos_clicked();

  void on_button_save_bmp_clicked();

 private:
  void syncSettings();

  QString getFilenameFromTime(const QString &extension = "jpeg");

  void noticeLabelSetText(const QString &str);

  void UpdateView();

  void set_default_transforms();

 private:
  inline static ViewerWindow *instance;
  Ui::ViewerWindow *ui;
  my::Controller controller;
  double cur_rotate_x = 0;
  double cur_rotate_y = 0;
  double cur_rotate_z = 0;
};
#endif  // VIEWERWINDOW_H
