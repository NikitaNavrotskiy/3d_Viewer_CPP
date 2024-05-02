#include "affine.h"

namespace my {

void Tranformation::Transform() { itransformation->Transform(data, factor); }

void RotateX::Transform(std::shared_ptr<objData> data, double factor) {
  double angle = factor * M_PI / 180;
  auto count = data->get_vertex_amount() * 3;
  auto vert = data->get_vertexes()->data();

  for (size_t i = 0; i < count; i += 3) {
    double y_tmp = vert[i + 1];
    double z_tmp = vert[i + 2];
    vert[i + 1] = y_tmp * cos(angle) - z_tmp * sin(angle);
    vert[i + 2] = y_tmp * sin(angle) + z_tmp * cos(angle);
  }
}

void RotateY::Transform(std::shared_ptr<objData> data, double factor) {
  double angle = factor * M_PI / 180;
  auto count = data->get_vertex_amount() * 3;
  auto vert = data->get_vertexes()->data();

  for (size_t i = 0; i < count; i += 3) {
    double x_tmp = vert[i];
    double z_tmp = vert[i + 2];
    vert[i] = x_tmp * cos(angle) + z_tmp * sin(angle);
    vert[i + 2] = -x_tmp * sin(angle) + z_tmp * cos(angle);
  }
}

void RotateZ::Transform(std::shared_ptr<objData> data, double factor) {
  double angle = factor * M_PI / 180;
  auto count = data->get_vertex_amount() * 3;
  auto vert = data->get_vertexes()->data();

  for (size_t i = 0; i < count; i += 3) {
    double x_tmp = vert[i];
    double y_tmp = vert[i + 1];
    vert[i] = x_tmp * cos(angle) - y_tmp * sin(angle);
    vert[i + 1] = x_tmp * sin(angle) + y_tmp * cos(angle);
  }
}

void MoveX::Transform(std::shared_ptr<objData> data, double factor) {
  auto count = data->get_vertex_amount() * 3;
  auto vert = data->get_vertexes()->data();

  for (size_t i = 0; i < count; i += 3) vert[i] += factor;
}

void MoveY::Transform(std::shared_ptr<objData> data, double factor) {
  auto count = data->get_vertex_amount() * 3;
  auto vert = data->get_vertexes()->data();

  for (size_t i = 0; i < count; i += 3) vert[i + 1] += factor;
}

void MoveZ::Transform(std::shared_ptr<objData> data, double factor) {
  auto count = data->get_vertex_amount() * 3;
  auto vert = data->get_vertexes()->data();

  for (size_t i = 0; i < count; i += 3) vert[i + 2] += factor;
}

void Scale::Transform(std::shared_ptr<objData> data, double factor) {
  if (factor < 1e-10) return;

  auto count = data->get_vertex_amount() * 3;
  auto vert = data->get_vertexes()->data();

  for (size_t i = 0; i < count; i++) vert[i] *= factor;
}

}  // namespace my
