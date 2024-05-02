#ifndef _CONTROLLER_CONTROLLER_H
#define _CONTROLLER_CONTROLLER_H

#include "../model/affine.h"
#include "../model/config.h"
#include "../model/parser.h"

namespace my {

class Controller {
 public:
  Controller() {}
  std::shared_ptr<objData> GetObject(const std::string& filename);  // Exception
  void Transform(ITransformation* t, std::shared_ptr<objData> data,
                 double factor);

  void ReadConfig();
  std::shared_ptr<Settings> getConfigSettings();
  void UpdateConfig();

 private:
  Parser parser;
  Config config;
};

inline void Controller::ReadConfig() { config.ReadConfig(); }

inline std::shared_ptr<Settings> Controller::getConfigSettings() {
  return config.getSettings();
}

inline void Controller::UpdateConfig() { config.Update(); }

inline std::shared_ptr<objData> Controller::GetObject(
    const std::string& filename) {
  parser.setFile(filename);
  parser.ParseFile();

  if (parser.isError())
    throw std::runtime_error("3D-ViewerError: Parsing error");
  return parser.GetParsedObj();
}

inline void Controller::Transform(ITransformation* t,
                                  std::shared_ptr<objData> data,
                                  double factor) {
  t->Transform(data, factor);
}

}  // namespace my

#endif
