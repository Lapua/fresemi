#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "home.h"
#include "timeTable.h"
#include "board.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();

private:
    TimeTable *timeTable;
    Board *board;
    Home *home;

    QMenu *menu;
    QAction *homeAct;
    QAction *timeTableAct;
    QAction *boardAct;

    void createMenu();
    void createAction();


private slots:
    void homeShow();
    void timeTableShow();
    void boardShow();
};

#endif // MAINWINDOW_H
