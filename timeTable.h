#ifndef GRID_H
#define GRID_H

#include <QWidget>
#include <QtWidgets>

class TimeTable : public QWidget
{
    Q_OBJECT

public:
    TimeTable(QWidget *parent = 0);

private:
    QStackedLayout *stackLayout;
    QWidget *sheetWidget;
    QGridLayout *sheetLayout;
    QLabel *time[5];
    QLabel *week[5];
    QPushButton *lec[5][5];

    QWidget *configWidget;
    QHBoxLayout *buttonLayout;
    QVBoxLayout *configLayout;
    QPushButton *ok;
    QPushButton *cancel;
};

#endif // GRID_H
