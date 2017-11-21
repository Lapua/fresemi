#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include <QtWidgets>

class Home : public QWidget
{
    Q_OBJECT
public:
    explicit Home(QWidget *parent = nullptr);

private:
    QFont font[2];
    QLabel *homeLabel[4];
    QVBoxLayout *mainLayout;
};

#endif // HOME_H