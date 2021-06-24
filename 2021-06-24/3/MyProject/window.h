#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window();
    ~Window();

private:
    QHBoxLayout* layout;
    QLabel* label;
    QLineEdit* edit;
    QPushButton* button;
    QGridLayout* gridlayout;
    QLabel* welcome;

private slots:
    void handleButtonClicked();

};

#endif // WINDOW_H
