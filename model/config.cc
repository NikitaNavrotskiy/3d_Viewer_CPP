#include "config.h"

namespace my {

void Config::ReadConfig() {
  if (!IsExist()) {
    DefaultConfig();
    return;
  }

  QSettings settings(CONFIG_FILE_PATH, QSettings::IniFormat);

  if (settings.contains("Background/red"))
    set->bg_red = settings.value("Background/red").toFloat();
  if (settings.contains("Background/green"))
    set->bg_green = settings.value("Background/green").toFloat();
  if (settings.contains("Background/blue"))
    set->bg_blue = settings.value("Background/blue").toFloat();
  if (settings.contains("Edge/red"))
    set->edge_red = settings.value("Edge/red").toFloat();
  if (settings.contains("Edge/green"))
    set->edge_green = settings.value("Edge/green").toFloat();
  if (settings.contains("Edge/blue"))
    set->edge_blue = settings.value("Edge/blue").toFloat();
  if (settings.contains("Vertex/red"))
    set->vertex_red = settings.value("Vertex/red").toFloat();
  if (settings.contains("Vertex/green"))
    set->vertex_green = settings.value("Vertex/green").toFloat();
  if (settings.contains("Vertex/blue"))
    set->vertex_blue = settings.value("Vertex/blue").toFloat();
  if (settings.contains("Edge/type") &&
      settings.value("Edge/type").toString() == "dotted")
    set->edge_type = KDOTTED;
  if (settings.contains("Vertex/type")) {
    if (settings.value("Vertex/type").toString() == "circle")
      set->vertex_type = KCIRCLE;
    else if (settings.value("Vertex/type").toString() == "squared")
      set->vertex_type = KSQUARE;
  }
  if (settings.contains("Vertex/size"))
    set->vertex_size = settings.value("Vertex/size").toUInt();
  if (settings.contains("Edge/thickness"))
    set->edge_thickness = settings.value("Edge/thickness").toUInt();
  if (settings.contains("Projection/type") &&
      settings.value("Projection/type").toString() == "central")
    set->projection_type = KCENTRAL;
}

void Config::DefaultConfig() {
  QSettings settings(CONFIG_FILE_PATH, QSettings::IniFormat);

  settings.beginGroup("Background");
  settings.setValue("red", "0.1");
  settings.setValue("green", "0.1");
  settings.setValue("blue", "0.1");
  settings.endGroup();

  settings.beginGroup("Edge");
  settings.setValue("red", "1.0");
  settings.setValue("green", "1.0");
  settings.setValue("blue", "1.0");
  settings.setValue("type", "solid");
  settings.setValue("thickness", "1");
  settings.endGroup();

  settings.beginGroup("Vertex");
  settings.setValue("red", "1.0");
  settings.setValue("green", "1.0");
  settings.setValue("blue", "1.0");
  settings.setValue("type", "none");
  settings.setValue("size", "1");
  settings.endGroup();

  settings.beginGroup("Projection");
  settings.setValue("type", "parallel");
  settings.endGroup();

  settings.sync();
}

void Config::Update() {
  QSettings settings(CONFIG_FILE_PATH, QSettings::IniFormat);

  settings.setValue("Background/red", QString::number(set->bg_red));
  settings.setValue("Background/green", QString::number(set->bg_green));
  settings.setValue("Background/blue", QString::number(set->bg_blue));

  settings.setValue("Edge/red", QString::number(set->edge_red));
  settings.setValue("Edge/green", QString::number(set->edge_green));
  settings.setValue("Edge/blue", QString::number(set->edge_blue));
  if (set->edge_type == KSOLID)
    settings.setValue("Edge/type", "solid");
  else if (set->edge_type == KDOTTED)
    settings.setValue("Edge/type", "dotted");
  settings.setValue("Edge/thickness", QString::number(set->edge_thickness));

  settings.setValue("Vertex/red", QString::number(set->vertex_red));
  settings.setValue("Vertex/green", QString::number(set->vertex_green));
  settings.setValue("Vertex/blue", QString::number(set->vertex_blue));
  if (set->vertex_type == KNONE)
    settings.setValue("Vertex/type", "none");
  else if (set->vertex_type == KCIRCLE)
    settings.setValue("Vertex/type", "circle");
  else if (set->vertex_type == KSQUARE)
    settings.setValue("Vertex/type", "squared");
  settings.setValue("Vertex/size", QString::number(set->vertex_size));

  if (set->projection_type == KPARALLEL)
    settings.setValue("Projection/type", "parallel");
  else if (set->projection_type == KCENTRAL)
    settings.setValue("Projection/type", "central");
  settings.sync();
}

}  // namespace my
