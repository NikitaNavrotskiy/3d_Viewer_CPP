#ifndef _MODEL_OBJ_DATA_H
#define _MODEL_OBJ_DATA_H

#include <cstdint>
#include <memory>
#include <vector>

namespace my {

struct objData {
 public:
  using i32 = int32_t;

  objData()
      : vertexes(new std::vector<double>()),
        face_indexes(new std::vector<i32>()) {}
  objData(const objData&) = delete;

  objData& operator=(const objData&) = delete;

  void push_back(double v1, double v2, double v3);
  void push_back(i32 i1, i32 i2, i32 i3);

  std::shared_ptr<std::vector<double>> get_vertexes();
  std::shared_ptr<std::vector<i32>> get_indexes();
  std::size_t get_vertex_amount() const;
  std::size_t get_indexes_amount() const;
  double normalize = 1.0;

  void Clear();

 private:
  std::shared_ptr<std::vector<double>> vertexes;
  std::shared_ptr<std::vector<i32>> face_indexes;
  std::size_t v_amount = 0;
  std::size_t f_amount = 0;
};

inline void objData::push_back(double v1, double v2, double v3) {
  vertexes->push_back(v1);
  vertexes->push_back(v2);
  vertexes->push_back(v3);

  v_amount++;
}

inline void objData::push_back(i32 i1, i32 i2, i32 i3) {
  face_indexes->push_back(i1);
  face_indexes->push_back(i2);
  face_indexes->push_back(i3);

  f_amount++;
}

inline std::shared_ptr<std::vector<double>> objData::get_vertexes() {
  return vertexes;
}

inline std::shared_ptr<std::vector<int32_t>> objData::get_indexes() {
  return face_indexes;
}

inline std::size_t objData::get_vertex_amount() const { return v_amount; }

inline std::size_t objData::get_indexes_amount() const { return f_amount; }

inline void objData::Clear() {
  vertexes->clear();
  face_indexes->clear();
  v_amount = 0;
  f_amount = 0;
}

}  // namespace my

#endif
