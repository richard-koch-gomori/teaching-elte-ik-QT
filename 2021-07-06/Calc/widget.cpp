#include "widget.h"

#include <string>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    label_a = new QLabel("A: ");
    edit_a = new QLineEdit();
    hlayout_a = new QHBoxLayout();
    hlayout_a->addWidget(label_a);
    hlayout_a->addWidget(edit_a);

    label_b = new QLabel("B: ");
    edit_b = new QLineEdit();
    hlayout_b = new QHBoxLayout();
    hlayout_b->addWidget(label_b);
    hlayout_b->addWidget(edit_b);

    layout = new QGridLayout();
    layout->addLayout(hlayout_a, 0, 0);
    layout->addLayout(hlayout_b, 1, 0);

    button = new QPushButton("Calculate A+B");
    layout->addWidget(button, 2, 0);

    label_res = new QLabel("A+B: ");
    layout->addWidget(label_res);

    this->setLayout(layout);

    QObject::connect(button, &QPushButton::clicked, this, &Widget::handleButtonClick);
}

Widget::~Widget()
{
    delete hlayout_a;
}

void Widget::handleButtonClick()
{
    /*
    QString qstr_a = edit_a->text();
    std::string str_a = qstr_a.toStdString();
    double a = std::stod(str_a);

    QString qstr_b = edit_b->text();
    std::string str_b = qstr_b.toStdString();
    double b = std::stod(str_b);

    double res = a + b;

    std::string str_res = std::to_string(res);
    QString qstr_res = QString::fromStdString(str_res);

    label_res->setText("A+B: " + qstr_res);
    */

    QString qstr_a = edit_a->text();
    QString qstr_b = edit_b->text();
    double a = qstr_a.toDouble();
    double b = qstr_b.toDouble();
    label_res->setText("A+B: " + QString::number(a + b));
}

