#ifndef _MODEL_SETTING_H
#define _MODEL_SETTING_H

#include <cstdint>
#include <list>

#include "observer.h"

namespace my {

enum EdgeType { KSOLID, KDOTTED };

enum VertexType { KNONE, KCIRCLE, KSQUARE };

enum ProjectionType { KPARALLEL, KCENTRAL };

struct Settings : public IObservable {
 public:
  void AddObserver(IObserver o) override;
  void NotifyObservers() override;

  // projection settings
  ProjectionType projection_type = KPARALLEL;

  // background settings
  float bg_red = 0.1, bg_green = 0.1, bg_blue = 0.1;

  // Vertex settings
  uint32_t vertex_size = 1;
  VertexType vertex_type = KNONE;
  float vertex_red = 1.0, vertex_green = 1.0, vertex_blue = 1.0;

  // Edge settings
  uint32_t edge_thickness = 1;
  EdgeType edge_type = KSOLID;
  float edge_red = 1.0, edge_green = 1.0, edge_blue = 1.0;

 private:
  std::list<IObserver> observers;
};

inline void Settings::AddObserver(IObserver o) { observers.push_back(o); }

}  // namespace my

#endif
