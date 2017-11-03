#include "grid.h"

grid::grid(QWidget *parent)
    : QMainWindow(parent)
{
    seetLayout = new QGridLayout;
    for(int i=0; i<5; i++){
        time[i] = new QLabel(QString::number(i+1));
        time[i] -> setFrameStyle(QFrame::Panel | QFrame::Raised);
        time[i] -> setLineWidth(2);
        time[i] -> setAlignment(Qt::AlignCenter);
        //time[i] -> setSizePolicy(timeSize);
        time[i] -> setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred);
        seetLayout -> addWidget(time[i],i+1,0);
    }

    week[0] = new QLabel("月");
    week[1] = new QLabel("火");
    week[2] = new QLabel("水");
    week[3] = new QLabel("木");
    week[4] = new QLabel("金");
    for(int i=0; i<5; i++){
        week[i] -> setFrameStyle(QFrame::Panel | QFrame::Raised);
        week[i] -> setLineWidth(2);
        week[i] -> setAlignment(Qt::AlignCenter);
        week[i] -> setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred);
        seetLayout -> addWidget(week[i],0,i+1);
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            lec[i][j] = new QPushButton;
            lec[i][j] -> setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred);
            seetLayout -> addWidget(lec[i][j],i+1,j+1);
        }
    }
    lec[2][3] -> setDefault(true);

    mainLayout = new QHBoxLayout;
    mainLayout -> addLayout(seetLayout);

    widget = new QWidget;
    widget -> setLayout(mainLayout);
    setCentralWidget(widget);
}

grid::~grid()
{

}
