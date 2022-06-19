#include <QApplication>
#include "window.h"

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 Window window;
 window.setFixedSize(100,50);

 window.show();
 return app.exec();
}
