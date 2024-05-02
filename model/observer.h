#ifndef _MODEL_OBSERVER_H
#define _MODEL_OBSERVER_H

// classes - interfaces for "Observer" pattern

namespace my {

class IObserver {
 public:
  virtual void Update(){};
  virtual ~IObserver(){};
};

class IObservable {
 public:
  virtual void AddObserver(IObserver o) = 0;
  virtual void NotifyObservers() = 0;
};

}  // namespace my

#endif
