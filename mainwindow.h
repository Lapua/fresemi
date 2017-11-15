#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "timeTable.h"
#include "map.h"
#include "board.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();

private:
    TimeTable *timeTable;
    //TimeTableDia *timeTableDia;
    Board *board;

    QMenu *menu;
    QAction *timeTableAct;
    QAction *boardAct;

    void createMenu();
    void createAction();


private slots:
    void timeTableShow();
    void boardShow();
};

#endif // MAINWINDOW_H
