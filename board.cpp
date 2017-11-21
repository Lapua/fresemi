#include "board.h"

Board::Board(QWidget *parent) : QWidget(parent)
{
    desktop = new QDesktopWidget;
    image = QPixmap("://images/board.png");
    label = new QLabel;
    label -> setPixmap(image);
    label -> setPixmap(image.scaledToWidth(desktop -> width()-100));
    scrollBar = new QScrollArea;
    scrollBar -> setWidget(label);
    mainLayout = new QVBoxLayout;
    mainLayout -> addWidget(scrollBar);
    QScroller::grabGesture(scrollBar);
    setLayout(mainLayout);
}
