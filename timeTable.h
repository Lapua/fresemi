#ifndef GRID_H
#define GRID_H

#include <QWidget>
#include <QtWidgets>
//#include "timetabledia.h"

class TimeTable : public QWidget
{
    Q_OBJECT

public:
    TimeTable(QWidget *parent = 0);

private:
    QWidget *sheetWidget;
    QGridLayout *sheetLayout;
    QLabel *time[5];
    QLabel *week[5];
    QPushButton *lec[5][5];
    QFont *chemical;

    QSizePolicy weekSize;
    QSizePolicy timeSize;
    QStackedLayout *stackedLayout;
    QDesktopWidget *desktop;

    /*timetable conf*/

    QPushButton *ok;
    QPushButton *cancel;
    QVBoxLayout *formLayout;
    QHBoxLayout *YNLayout;
    QWidget *formWidget;

    QHBoxLayout *noticeOFLayout;
    QLabel *noticeOFLabel;
    QCheckBox *noticeOF;

    QHBoxLayout *noticeLayout;
    QSpinBox *spinBox;
    QLabel *minLabel;
    QComboBox *comBox;
    QLabel *noticeLabel;

private slots:
    void showForm();
    void showSheet();
};

#endif // GRID_H
