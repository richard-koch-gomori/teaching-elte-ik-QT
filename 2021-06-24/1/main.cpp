

#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QWidget>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget window;
    QPushButton button("helloworld", &window);
    button.setGeometry(30, 30, 500, 100);
    //button.show();
    QLabel label("textarea", &window);
    //label.show();
    window.show();
    return app.exec();
}

