#ifndef GRID_H
#define GRID_H

#include <QMainWindow>
#include <QtWidgets>

class grid : public QMainWindow
{
    Q_OBJECT

public:
    grid(QWidget *parent = 0);
    ~grid();

private:
    QGridLayout *seetLayout;
    QHBoxLayout *mainLayout;
    QLabel *time[5];
    QLabel *week[5];
    QPushButton *lec[5][5];
    QWidget *widget;
    QSizePolicy *timeSize;
    QSizePolicy *weekSize;
};

#endif // GRID_H
