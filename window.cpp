#include "window.h"
//#include <QApplication>
#include <QPushButton>

Window::Window(QWidget *parent)
    : QWidget{parent}
{
setFixedSize(100,50);

m_button = new QPushButton("Hello World", this);
m_button->setGeometry(10,10,80,30);
m_button->setCheckable(true);

connect(m_button, SIGNAL (clicked(bool)), this, SLOT (slotButtonClicked(bool)));
//connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
}

void Window::slotButtonClicked(bool checked)
{
 if (checked) {
 m_button->setText("Checked");
 } else {
 m_button->setText("Hello World");
 }
}
