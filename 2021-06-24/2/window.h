
#include <QPushButton>
#include <QLabel>

class Window : public QWidget
{
private:
    QPushButton* button;
    QLabel* label;

public:
    Window();
    ~Window();
};

