

#include "window.h"

Window::Window()
{
    button = new QPushButton("button", this);
    button->setGeometry(30, 30, 500, 100);
    label = new QLabel("label", this);
}

Window::~Window()
{
    delete button;
    delete label;
}

