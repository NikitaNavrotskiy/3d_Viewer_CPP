#include <QApplication>

#include "viewerwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  ViewerWindow *w = ViewerWindow::GetInstance();
  w->show();
  int res = a.exec();

  ViewerWindow::DestroyInstance();

  return res;
}
