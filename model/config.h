#ifndef _MODEL_SETTINGS_H
#define _MODEL_SETTINGS_H

#include <QFile>
#include <QSettings>
#include <memory>

#include "observer.h"
#include "settings.h"

#define CONFIG_FILE_PATH \
  "../config.ini"  // Standart path (src folder), if file isn't exist, it will
                   // be created

namespace my {

class Config : public IObserver {
 public:
  Config() : set(new Settings()){};
  ~Config() = default;
  void ReadConfig();
  std::shared_ptr<Settings> getSettings();

  void Update() override;

 private:
  void DefaultConfig();  // Create default config
  bool IsExist();

 private:
  std::shared_ptr<Settings> set;
};

inline bool Config::IsExist() {
  QFile file(CONFIG_FILE_PATH);

  return file.exists();
}

inline std::shared_ptr<Settings> Config::getSettings() { return set; }

}  // namespace my

#endif
