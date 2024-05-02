#ifndef _MODEL_PARSER_H
#define _MODEL_PARSER_H

#include <cmath>
#include <cstring>
#include <fstream>
#include <memory>
#include <regex>
#include <string>

#include "obj_data.h"

namespace my {

class IParser  // Interface for parser
{
 public:
  IParser() : file(), data(new objData()) {}
  IParser(const std::string& filename) : file(filename), data(new objData()){};
  ~IParser() = default;

  bool isError();

  virtual std::shared_ptr<objData> GetParsedObj() = 0;
  virtual void ParseFile() = 0;

 protected:
  virtual bool CheckFileExt() = 0;

 protected:
  std::string file;
  bool error = false;
  std::shared_ptr<objData> data;
};

inline bool IParser::isError() { return error; }

class Parser final : public IParser {
 public:
  Parser() : IParser() {}
  Parser(const std::string& file) : IParser(file) {}
  std::shared_ptr<objData> GetParsedObj() override;
  void ParseFile() override;

  void setFile(const std::string& file);
  void Clear();

 private:
  bool CheckFileExt() override;
  bool ValidateVertex(const std::string& s);
  bool ValidateIndexes(const std::string& s);

  void GetVertexesFromStr(const std::string& s);
  void GetIndexesFromStr(const std::string& s);
};

inline void Parser::Clear() {
  data->Clear();
  error = false;
}

inline bool Parser::CheckFileExt() {
  std::regex pattern("^.+\\.obj$");

  return std::regex_match(this->file, pattern);
}

inline bool Parser::ValidateVertex(const std::string& s) {
  return s.compare(0, 2, "v ") == 0;
}

inline bool Parser::ValidateIndexes(const std::string& s) {
  return s.compare(0, 2, "f ") == 0;
}

inline std::shared_ptr<objData> Parser::GetParsedObj() { return this->data; }

inline void Parser::setFile(const std::string& file) {
  this->file = file;
  Clear();
}

}  // namespace my

#endif
