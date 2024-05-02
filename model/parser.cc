#include "parser.h"

namespace my {

void Parser::ParseFile() {
  std::fstream f(file);
  if (!CheckFileExt() || !f.is_open())
    error = true;
  else {
    std::string buffer;

    while (std::getline(f, buffer)) {
      if (ValidateVertex(buffer))
        GetVertexesFromStr(buffer);
      else if (ValidateIndexes(buffer))
        GetIndexesFromStr(buffer);
    }

    size_t v_count = data->get_vertex_amount();
    auto ver = data->get_vertexes();
    auto fac = data->get_indexes();

    for (size_t i = 0; i < v_count * 3; i++) {
      ((*ver)[i] /= (data->normalize));
    }

    for (size_t i = 0; i < v_count; i++) {
      if ((*fac).size() > i && (*fac)[i] < 0)
        (*fac)[i] = (*fac)[i] + v_count + 1;
    }
  }
}

void Parser::GetVertexesFromStr(const std::string& s) {
  double v1 = 0, v2 = 0, v3 = 0;

  if (std::sscanf(s.c_str(), "v %lf %lf %lf", &v1, &v2, &v3) != 3)
    error = true;
  else
    data->push_back(v1, v2, v3);

  double loc_max = std::max(std::max(fabs(v1), fabs(v2)), fabs(v3));
  if (loc_max > data->normalize) data->normalize = loc_max;
}

void Parser::GetIndexesFromStr(const std::string& s) {
  int32_t index = 0;
  int32_t cur_index = 0;
  int32_t i[3] = {0, 0, 0};
  char* cur = std::strtok(const_cast<char*>(s.c_str() + 2), " ");

  while (cur != NULL && index < 3) {
    cur_index = std::atoi(cur);
    i[index++] = cur_index;
    cur = std::strtok(nullptr, " ");
  }

  data->push_back(i[0], i[1], i[2]);
}

}  // namespace my
