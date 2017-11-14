#include "board.h"

Board::Board(QWidget *parent) : QWidget(parent)
{
    label = new QLabel("<h1>質問掲示板かっこかり~~><br>endl</h1>");
    scrollBar = new QScrollArea;
    scrollBar -> setWidget(label);
    mainLayout = new QVBoxLayout;
    mainLayout -> addWidget(scrollBar);
    QScroller::grabGesture(scrollBar);
    setLayout(mainLayout);
}
