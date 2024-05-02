#include <iostream>

#include "test_header.h"

TEST(RotateX, Test_1) {
  my::Parser parser("obj/test_obj/test_transform1.obj");
  double eps = 1e-4;
  double factor = 45;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{0, 0, 0, 1, 0, 0, 0, 0.7071, 0.7071};

  my::RotateX transform = my::RotateX();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateX, Test_2) {
  my::Parser parser("obj/test_obj/test_transform2.obj");
  double eps = 1e-4;
  double factor = 45;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{2.0 / 10, -0.7071 / 10, 4.9497 / 10,
                  5.0 / 10, -0.7071 / 10, 9.1923 / 10,
                  8.0 / 10, -0.7071 / 10, 13.4350 / 10};

  my::RotateX transform = my::RotateX();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateX, Test_3) {
  my::Parser parser("obj/test_obj/test_transform3.obj");
  double eps = 1e-4;
  double factor = -90;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{1.34 / 34.33,   7.89 / 34.33,   2.55 / 34.33,
                  3.80 / 34.33,   34.33 / 34.33,  -32.23 / 34.33,
                  0.7123 / 34.33, -1.532 / 34.33, -0.43 / 34.33};

  my::RotateX transform = my::RotateX();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateX, Test_4) {
  my::Parser parser("obj/test_obj/test_transform4.obj");
  double eps = 1e-4;
  double factor = 180;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{12.23 / 342.23, -15.2245 / 342.23, -78.99 / 342.23,
                  -1.12 / 342.23, 342.23 / 342.23,   8.889 / 342.23,
                  0.01 / 342.23,  0.258 / 342.23,    -2.76 / 342.23};

  my::RotateX transform = my::RotateX();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateX, Test_5) {
  my::Parser parser("obj/test_obj/test_transform5.obj");
  double eps = 1e-3;
  double factor = 78;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{-0.015 / 1412.1, -4.4975 / 1412.1,   8.3471 / 1412.1,
                  32.14 / 1412.1,  -0.454859 / 1412.1, -5.3623 / 1412.1,
                  1412.1 / 1412.1, 227.3747 / 1412.1,  85.8357 / 1412.1};

  my::RotateX transform = my::RotateX();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateY, Test_1) {
  my::Parser parser("obj/test_obj/test_transform1.obj");
  double eps = 1e-4;
  double factor = 45;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{0, 0, 0, 0.7071, 0, -0.7071, 0, 1, 0};

  my::RotateY transform = my::RotateY();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateY, Test_2) {
  my::Parser parser("obj/test_obj/test_transform2.obj");
  double eps = 1e-4;
  double factor = 45;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{4.2426 / 10, 3.0 / 10,     1.4142 / 10, 8.4852 / 10, 6.0 / 10,
                  1.4142 / 10, 12.7278 / 10, 9.0 / 10,    1.4142 / 10};

  my::RotateY transform = my::RotateY();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateY, Test_3) {
  my::Parser parser("obj/test_obj/test_transform3.obj");
  double eps = 1e-4;
  double factor = -90;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{-7.89 / 34.33,  -2.55 / 34.33, 1.34 / 34.33,
                  -34.33 / 34.33, 32.23 / 34.33, 3.80 / 34.33,
                  1.532 / 34.33,  0.43 / 34.33,  0.7123 / 34.33};

  my::RotateY transform = my::RotateY();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateY, Test_4) {
  my::Parser parser("obj/test_obj/test_transform4.obj");
  double eps = 1e-4;
  double factor = 180;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{-12.23 / 342.23, 15.2245 / 342.23, -78.99 / 342.23,
                  1.12 / 342.23,   -342.23 / 342.23, 8.889 / 342.23,
                  -0.01 / 342.23,  -0.258 / 342.23,  -2.76 / 342.23};

  my::RotateY transform = my::RotateY();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateY, Test_5) {
  my::Parser parser("obj/test_obj/test_transform5.obj");
  double eps = 1e-4;
  double factor = 78;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{5.9975 / 1412.1,  7.23 / 1412.1,   1.2901 / 1412.1,
                  7.33723 / 1412.1, -5.34 / 1412.1,  -31.2968 / 1412.1,
                  93.4856 / 1412.1, 131.24 / 1412.1, -1423.7051 / 1412.1};

  my::RotateY transform = my::RotateY();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateZ, Test_1) {
  my::Parser parser("obj/test_obj/test_transform1.obj");
  double eps = 1e-4;
  double factor = 45;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{0, 0, 0, 0.7071, 0.7071, 0, -0.7071, 0.7071, 0};

  my::RotateZ transform = my::RotateZ();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateZ, Test_2) {
  my::Parser parser("obj/test_obj/test_transform2.obj");
  double eps = 1e-4;
  double factor = 45;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{-0.7071 / 10, 3.5355 / 10,  4.0 / 10,
                  -0.7071 / 10, 7.7781 / 10,  7.0 / 10,
                  -0.7071 / 10, 12.0207 / 10, 10.0 / 10};

  my::RotateZ transform = my::RotateZ();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateZ, Test_3) {
  my::Parser parser("obj/test_obj/test_transform3.obj");
  double eps = 1e-4;
  double factor = -90;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{-2.55 / 34.33, -1.34 / 34.33,   7.89 / 34.33,
                  32.23 / 34.33, -3.80 / 34.33,   34.33 / 34.33,
                  0.43 / 34.33,  -0.7123 / 34.33, -1.532 / 34.33};

  my::RotateZ transform = my::RotateZ();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateZ, Test_4) {
  my::Parser parser("obj/test_obj/test_transform4.obj");
  double eps = 1e-4;
  double factor = 180;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{-12.23 / 342.23, -15.2245 / 342.23, 78.99 / 342.23,
                  1.12 / 342.23,   342.23 / 342.23,   -8.889 / 342.23,
                  0.01 / 342.23,   0.258 / 342.23,    2.76 / 342.23};

  my::RotateZ transform = my::RotateZ();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(RotateZ, Test_5) {
  my::Parser parser("obj/test_obj/test_transform5.obj");
  double eps = 1e-4;
  double factor = 78;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{-7.0747815 / 1412.1, 1.4884455 / 1412.1,   6.135 / 1412.1,
                  11.90496 / 1412.1,   30.3259 / 1412.1,     0.67 / 1412.1,
                  165.209746 / 1412.1, 1408.459806 / 1412.1, -204.57 / 1412.1};

  my::RotateZ transform = my::RotateZ();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(Scale, Test_1) {
  my::Parser parser("obj/test_obj/test_transform1.obj");
  double eps = 1e-4;
  double factor = 0;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{0, 0, 0, 1, 0, 0, 0, 1, 0};

  my::Scale transform = my::Scale();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(Scale, Test_2) {
  my::Parser parser("obj/test_obj/test_transform2.obj");
  double eps = 1e-4;
  double factor = 8;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{16.0 / 10, 24.0 / 10, 32.0 / 10, 40.0 / 10, 48.0 / 10,
                  56.0 / 10, 64.0 / 10, 72.0 / 10, 80.0 / 10};

  my::Scale transform = my::Scale();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(Scale, Test_3) {
  my::Parser parser("obj/test_obj/test_transform3.obj");
  double eps = 1e-4;
  double factor = 0.34;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{
      1.34 * factor / 34.33,   -2.55 * factor / 34.33, 7.89 * factor / 34.33,
      3.80 * factor / 34.33,   32.23 * factor / 34.33, 34.33 * factor / 34.33,
      0.7123 * factor / 34.33, 0.43 * factor / 34.33,  -1.532 * factor / 34.33};

  my::Scale transform = my::Scale();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(Scale, Test_4) {
  my::Parser parser("obj/test_obj/test_transform4.obj");
  double eps = 1e-4;
  double factor = 1.5;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{12.23 * factor / 342.23,   15.2245 * factor / 342.23,
                  78.99 * factor / 342.23,   -1.12 * factor / 342.23,
                  -342.23 * factor / 342.23, -8.889 * factor / 342.23,
                  0.01 * factor / 342.23,    -0.258 * factor / 342.23,
                  2.76 * factor / 342.23};

  my::Scale transform = my::Scale();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(Scale, Test_5) {
  my::Parser parser("obj/test_obj/test_transform5.obj");
  double eps = 1e-4;
  double factor = 1.45;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{-0.015 * factor / 1412.1, 7.23 * factor / 1412.1,
                  6.135 * factor / 1412.1,  32.14 * factor / 1412.1,
                  -5.34 * factor / 1412.1,  0.67 * factor / 1412.1,
                  1412.1 * factor / 1412.1, 131.24 * factor / 1412.1,
                  -204.57 * factor / 1412.1};

  my::Scale transform = my::Scale();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveX, Test_1) {
  my::Parser parser("obj/test_obj/test_transform1.obj");
  double eps = 1e-4;
  double factor = 12;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{12, 0, 0, 13, 0, 0, 12, 1, 0};

  my::MoveX transform = my::MoveX();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveX, Test_2) {
  my::Parser parser("obj/test_obj/test_transform2.obj");
  double eps = 1e-4;
  double factor = 8;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{2.0 / 10 + factor, 3.0 / 10, 4.0 / 10,
                  5.0 / 10 + factor, 6.0 / 10, 7.0 / 10,
                  8.0 / 10 + factor, 9.0 / 10, 10.0 / 10};

  my::MoveX transform = my::MoveX();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveX, Test_3) {
  my::Parser parser("obj/test_obj/test_transform3.obj");
  double eps = 1e-4;
  double factor = 0;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{1.34 / 34.33 + factor,   -2.55 / 34.33, 7.89 / 34.33,
                  3.80 / 34.33 + factor,   32.23 / 34.33, 34.33 / 34.33,
                  0.7123 / 34.33 + factor, 0.43 / 34.33,  -1.532 / 34.33};

  my::MoveX transform = my::MoveX();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveX, Test_4) {
  my::Parser parser("obj/test_obj/test_transform4.obj");
  double eps = 1e-4;
  double factor = 1.5;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{12.23 / 342.23 + factor, 15.2245 / 342.23, 78.99 / 342.23,
                  -1.12 / 342.23 + factor, -342.23 / 342.23, -8.889 / 342.23,
                  0.01 / 342.23 + factor,  -0.258 / 342.23,  2.76 / 342.23};

  my::MoveX transform = my::MoveX();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveX, Test_5) {
  my::Parser parser("obj/test_obj/test_transform5.obj");
  double eps = 1e-4;
  double factor = -67;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{-0.015 / 1412.1 + factor, 7.23 / 1412.1,   6.135 / 1412.1,
                  32.14 / 1412.1 + factor,  -5.34 / 1412.1,  0.67 / 1412.1,
                  1412.1 / 1412.1 + factor, 131.24 / 1412.1, -204.57 / 1412.1};

  my::MoveX transform = my::MoveX();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveY, Test_1) {
  my::Parser parser("obj/test_obj/test_transform1.obj");
  double eps = 1e-4;
  double factor = 12;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{0, 12, 0, 1, 12, 0, 0, 13, 0};

  my::MoveY transform = my::MoveY();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveY, Test_2) {
  my::Parser parser("obj/test_obj/test_transform2.obj");
  double eps = 1e-4;
  double factor = 8;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{2.0 / 10, 3.0 / 10 + factor, 4.0 / 10,
                  5.0 / 10, 6.0 / 10 + factor, 7.0 / 10,
                  8.0 / 10, 9.0 / 10 + factor, 10.0 / 10};

  my::MoveY transform = my::MoveY();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveY, Test_3) {
  my::Parser parser("obj/test_obj/test_transform3.obj");
  double eps = 1e-4;
  double factor = 0;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{1.34 / 34.33 + factor,   -2.55 / 34.33, 7.89 / 34.33,
                  3.80 / 34.33 + factor,   32.23 / 34.33, 34.33 / 34.33,
                  0.7123 / 34.33 + factor, 0.43 / 34.33,  -1.532 / 34.33};

  my::MoveY transform = my::MoveY();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveY, Test_4) {
  my::Parser parser("obj/test_obj/test_transform4.obj");
  double eps = 1e-4;
  double factor = 1.5;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{12.23 / 342.23, 15.2245 / 342.23 + factor, 78.99 / 342.23,
                  -1.12 / 342.23, -342.23 / 342.23 + factor, -8.889 / 342.23,
                  0.01 / 342.23,  -0.258 / 342.23 + factor,  2.76 / 342.23};

  my::MoveY transform = my::MoveY();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveY, Test_5) {
  my::Parser parser("obj/test_obj/test_transform5.obj");
  double eps = 1e-4;
  double factor = -67;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{-0.015 / 1412.1, 7.23 / 1412.1 + factor,   6.135 / 1412.1,
                  32.14 / 1412.1,  -5.34 / 1412.1 + factor,  0.67 / 1412.1,
                  1412.1 / 1412.1, 131.24 / 1412.1 + factor, -204.57 / 1412.1};

  my::MoveY transform = my::MoveY();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveZ, Test_1) {
  my::Parser parser("obj/test_obj/test_transform1.obj");
  double eps = 1e-4;
  double factor = 12;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{0, 0, 12, 1, 0, 12, 0, 1, 12};

  my::MoveZ transform = my::MoveZ();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveZ, Test_2) {
  my::Parser parser("obj/test_obj/test_transform2.obj");
  double eps = 1e-4;
  double factor = 8;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{2.0 / 10, 3.0 / 10, 4.0 / 10 + factor,
                  5.0 / 10, 6.0 / 10, 7.0 / 10 + factor,
                  8.0 / 10, 9.0 / 10, 10.0 / 10 + factor};

  my::MoveZ transform = my::MoveZ();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveZ, Test_3) {
  my::Parser parser("obj/test_obj/test_transform3.obj");
  double eps = 1e-4;
  double factor = 0;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{1.34 / 34.33,   -2.55 / 34.33, 7.89 / 34.33 + factor,
                  3.80 / 34.33,   32.23 / 34.33, 34.33 / 34.33 + factor,
                  0.7123 / 34.33, 0.43 / 34.33,  -1.532 / 34.33 + factor};

  my::MoveZ transform = my::MoveZ();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveZ, Test_4) {
  my::Parser parser("obj/test_obj/test_transform4.obj");
  double eps = 1e-4;
  double factor = 1.5;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{12.23 / 342.23, 15.2245 / 342.23, 78.99 / 342.23 + factor,
                  -1.12 / 342.23, -342.23 / 342.23, -8.889 / 342.23 + factor,
                  0.01 / 342.23,  -0.258 / 342.23,  2.76 / 342.23 + factor};

  my::MoveZ transform = my::MoveZ();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}

TEST(MoveZ, Test_5) {
  my::Parser parser("obj/test_obj/test_transform5.obj");
  double eps = 1e-4;
  double factor = -67;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  double expect[]{-0.015 / 1412.1, 7.23 / 1412.1,   6.135 / 1412.1 + factor,
                  32.14 / 1412.1,  -5.34 / 1412.1,  0.67 / 1412.1 + factor,
                  1412.1 / 1412.1, 131.24 / 1412.1, -204.57 / 1412.1 + factor};

  my::MoveZ transform = my::MoveZ();

  my::Tranformation tr(o, factor, &transform);
  tr.Transform();

  for (int i = 0; i < 9; i++) {
    EXPECT_TRUE(fabs(o->get_vertexes()->data()[i] - expect[i]) < eps);
  }
}