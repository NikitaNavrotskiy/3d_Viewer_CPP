#include "test_header.h"

TEST(Parser, Test_1) {
  my::Parser parser("no.obj");

  parser.ParseFile();

  EXPECT_EQ(parser.isError(), true);
}

TEST(Parser, Test_2) {
  my::Parser parser("obj/test_obj/test1.obj");
  double eps = 1e-7;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  EXPECT_EQ(o->get_vertex_amount(), 3);
  EXPECT_EQ(o->get_indexes_amount(), 1);

  auto v = o->get_vertexes();
  auto f = o->get_indexes();

  EXPECT_TRUE(fabs(v->at(0) * 8 - 1.212) < eps);
  EXPECT_TRUE(fabs(v->at(1) * 8 - 2.324) < eps);
  EXPECT_TRUE(fabs(v->at(2) * 8 - 3.355) < eps);

  EXPECT_TRUE(f->at(0) == 1);
  EXPECT_TRUE(f->at(1) == 2);
  EXPECT_TRUE(f->at(2) == 3);

  EXPECT_EQ(parser.isError(), false);
}

TEST(Parser, Test_3) {
  my::Parser parser("obj/test_obj/test2.obj");
  double eps = 1e-7;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  EXPECT_EQ(o->get_vertex_amount(), 4);
  EXPECT_EQ(o->get_indexes_amount(), 4);

  auto v = o->get_vertexes();
  auto f = o->get_indexes();

  for (int i = 1; i < 13; i++) {
    EXPECT_TRUE(fabs(v->at(i - 1) * 12 - i) < eps);
    EXPECT_EQ(f->at(i - 1), i);
  }

  EXPECT_EQ(parser.isError(), false);
}

TEST(Parser, Test_4) {
  my::Parser parser("obj/test_obj/test.ob");

  parser.ParseFile();

  EXPECT_EQ(parser.isError(), true);
}

TEST(Parser, Test_5) {
  my::Parser parser("obj/test_obj/test3.obj");
  double eps = 1e-7;

  parser.ParseFile();
  auto o = parser.GetParsedObj();

  EXPECT_EQ(o->get_vertex_amount(), 4);
  EXPECT_EQ(o->get_indexes_amount(), 4);

  auto v = o->get_vertexes();
  auto f = o->get_indexes();

  for (int i = 1; i < 13; i++) {
    EXPECT_TRUE(fabs(v->at(i - 1) * 12 - i) < eps);
    EXPECT_EQ(f->at(i - 1), i);
  }

  EXPECT_EQ(parser.isError(), true);
}
