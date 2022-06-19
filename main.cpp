#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QPushButton button1; // ("Hello world !");
  button1.setText("My text");
  button1.setToolTip("A tooltip");
  QFont font ("Comic Sans MS");
  button1.setFont(font);
  QPushButton button2 ("other", &button1);
  button1.show();

 return app.exec();
}
