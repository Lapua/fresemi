#include "timeTable.h"

TimeTable::TimeTable(QWidget *parent)
    : QWidget(parent)
{
    sheetLayout = new QGridLayout;
    for(int i=0; i<5; i++){
        time[i] = new QLabel(QString::number(i+1));
        time[i] -> setFrameStyle(QFrame::Panel | QFrame::Raised);
        time[i] -> setLineWidth(2);
        time[i] -> setAlignment(Qt::AlignCenter);
        time[i] -> setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred);
        sheetLayout -> addWidget(time[i],i+1,0);
    }

    desktop = new QDesktopWidget;
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
        sheetLayout -> addWidget(week[i],0,i+1);
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            lec[i][j] = new QPushButton;
            lec[i][j] -> setFixedWidth((desktop -> width())/6);
            lec[i][j] -> setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
            connect(lec[i][j],SIGNAL(clicked()),this,SLOT(showForm()));
            sheetLayout -> addWidget(lec[i][j],i+1,j+1);
        }
    }

    lec[0][0] -> setText("芸術論");
    lec[1][0] -> setText(" 化学 ");
    lec[2][0] -> setText(" 情報リ　");
    lec[3][0] -> setText(" 通信 ");
    lec[4][0] -> setText(" 通信 ");
    lec[0][1] -> setText("英語SL");
    lec[2][1] -> setText("線形代");
    lec[3][1] -> setText("プ基礎");
    lec[4][1] -> setText("プ基礎");
    lec[0][2] -> setText(" 通信 ");
    lec[1][2] -> setText("フレゼミ");
    lec[2][2] -> setText("コン概論");
    lec[2][3] -> setText("英語RW");
    lec[2][4] -> setText("解析学");

    //weekSize = QSizePolicy;
    //timeSize = QSizePolicy;
    weekSize = week[0] -> sizePolicy();
    timeSize = time[0] -> sizePolicy();
    weekSize.setHorizontalStretch(1);
    timeSize.setHorizontalStretch(1);
    week[0] -> setSizePolicy(weekSize);
    time[0] -> setSizePolicy(timeSize);

    sheetWidget = new QWidget;
    sheetWidget -> setLayout(sheetLayout);

    /**timetable config*/

    subject = new QTextEdit;
    noticeOFLabel = new QLabel("通知する");
    noticeOF = new QCheckBox;

    spinBox = new QSpinBox;
    minLabel = new QLabel("分");
    comBox = new QComboBox;
    comBox -> addItem("前");
    comBox -> addItem("後");
    noticeLabel = new QLabel("に通知する");
    noticeLayout = new QHBoxLayout;
    noticeLayout -> addWidget(spinBox);
    noticeLayout -> addWidget(minLabel);
    noticeLayout -> addWidget(comBox);
    noticeLayout -> addWidget(noticeLabel);

    ok = new QPushButton(tr("OK"));
    cancel = new QPushButton(tr("Cancel"));
    YNLayout = new QHBoxLayout;
    YNLayout -> addWidget(ok);
    YNLayout -> addWidget(cancel);

    formRect = QRect((desktop -> height())/2,0,desktop -> width(),50);
    formLayout = new QVBoxLayout;
    //formLayout -> addRow(subject);
    formLayout -> addLayout(noticeLayout);
    formLayout -> addLayout(YNLayout);
    formLayout -> setGeometry(formRect);
    formWidget = new QWidget;
    formWidget -> setLayout(formLayout);

    /*stackedLayout*/

    stackedLayout = new QStackedLayout;
    stackedLayout -> addWidget(sheetWidget);
    stackedLayout -> addWidget(formWidget);

    connect(lec[0][0],SIGNAL(clicked()),this,SLOT(showForm()));
    connect(ok,SIGNAL(clicked()),this,SLOT(showSheet()));

    setLayout(stackedLayout);
}

void TimeTable::showForm(){
    stackedLayout -> setCurrentWidget(formWidget);
}

void TimeTable::showSheet(){
    stackedLayout -> setCurrentWidget(sheetWidget);
}
