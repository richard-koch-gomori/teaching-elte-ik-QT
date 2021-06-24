#include "window.h"

Window::Window()
{
    gridlayout = new QGridLayout();

    layout = new QHBoxLayout();
    label = new QLabel("Enter name: ");
    edit = new QLineEdit();

    layout->addWidget(label);
    layout->addWidget(edit);

    button = new QPushButton("Do it!");
    welcome = new QLabel("Welcome: ");

    gridlayout->addLayout(layout, 0, 0);
    gridlayout->addWidget(button, 1, 0);
    gridlayout->addWidget(welcome, 2, 0);

    this->setLayout(gridlayout);

    QObject::connect(button, &QPushButton::clicked, this, &Window::handleButtonClicked);
}

Window::~Window()
{
    delete layout;
    delete label;
    delete edit;
    delete button;
    delete welcome;
}

void Window::handleButtonClicked()
{
    welcome->setText(edit->text());
}
