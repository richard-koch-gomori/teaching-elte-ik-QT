#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QLabel* label_a;
    QLineEdit* edit_a;
    QHBoxLayout* hlayout_a;

    QLabel* label_b;
    QLineEdit* edit_b;
    QHBoxLayout* hlayout_b;

    QPushButton* button;

    QLabel* label_res;
    QLineEdit* edit_res;
    QHBoxLayout* hlayout_res;

    QGridLayout* layout;

private slots:
    void handleButtonClick();
};

#endif // WIDGET_H
