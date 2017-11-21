#include "mainwindow.h"

MainWindow::MainWindow()
{
    setWindowTitle(tr("TUT Application"));
    timeTable = new TimeTable;
    board = new Board;
    home = new Home;

    setCentralWidget(home);

    createAction();
    createMenu();
}

void MainWindow::createAction(){
    homeAct = new QAction(tr("ホーム"));
    connect(homeAct,SIGNAL(triggered()),this,SLOT(homeShow()));

    timeTableAct = new QAction(tr("時間割"));
    connect(timeTableAct,SIGNAL(triggered()),this,SLOT(timeTableShow()));

    boardAct = new QAction(tr("質問掲示板"));
    connect(boardAct,SIGNAL(triggered()),this,SLOT(boardShow()));
}

void MainWindow::createMenu(){
    menu = menuBar() -> addMenu(tr("Menu"));
    menu -> addAction(homeAct);
    menu -> addAction(timeTableAct);
    menu -> addAction(boardAct);
}

void MainWindow::timeTableShow(){
    takeCentralWidget();
    setCentralWidget(timeTable);
}

void MainWindow::boardShow(){
    takeCentralWidget();
    setCentralWidget(board);
}

void MainWindow::homeShow(){
    takeCentralWidget();
    setCentralWidget(home);
}