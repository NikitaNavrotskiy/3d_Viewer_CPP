#include "settings.h"

namespace my {

void Settings::NotifyObservers() {
  for (auto o : observers) o.Update();
}

}  // namespace my