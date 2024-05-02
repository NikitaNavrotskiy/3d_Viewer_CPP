#ifndef _MODEL_AFFINE_H
#define _MODEL_AFFINE_H

#include <cmath>
#include <memory>

#include "obj_data.h"

// Implementation of STRATEGY pattern

namespace my {

class ITransformation {
 public:
  virtual void Transform(std::shared_ptr<objData> data, double factor) = 0;
};

class Tranformation {
 public:
  Tranformation(std::shared_ptr<objData> data, double factor,
                ITransformation *itransformation)
      : data(data), factor(factor), itransformation(itransformation){};

  void Transform();

 private:
  std::shared_ptr<objData> data;
  double factor;
  ITransformation *itransformation;
};

class RotateX : public ITransformation {
 public:
  void Transform(std::shared_ptr<objData> data, double factor) override;
};

class RotateY : public ITransformation {
 public:
  void Transform(std::shared_ptr<objData> data, double factor) override;
};

class RotateZ : public ITransformation {
 public:
  void Transform(std::shared_ptr<objData> data, double factor) override;
};

class MoveX : public ITransformation {
 public:
  void Transform(std::shared_ptr<objData> data, double factor) override;
};

class MoveY : public ITransformation {
 public:
  void Transform(std::shared_ptr<objData> data, double factor) override;
};

class MoveZ : public ITransformation {
 public:
  void Transform(std::shared_ptr<objData> data, double factor) override;
};

class Scale : public ITransformation {
 public:
  void Transform(std::shared_ptr<objData> data, double factor) override;
};

}  // namespace my

#endif
