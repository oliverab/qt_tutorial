#include <QApplication>
#include <QProgressBar>
#include <QSlider>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QWidget window;
 window.setFixedSize(200,80);

 // Create the progress bar

 QProgressBar *progressBar = new QProgressBar(&window);
 progressBar->setRange(0,100);
 progressBar->setValue(0);
 progressBar->setGeometry(10, 10, 180, 30);

 // Create the slider

 QSlider *slider = new QSlider(&window);
 slider->setOrientation(Qt::Horizontal);
 slider->setRange(0,100);
 slider->setValue(0);
 slider->setGeometry(10, 40, 180, 30);

 window.show();
 return app.exec();
}
