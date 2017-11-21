#include "home.h"

Home::Home(QWidget *parent) : QWidget(parent)
{
    mainLayout = new QVBoxLayout;

    homeLabel[0] = new QLabel("<h1>次の教室</h1>");
    homeLabel[1] = new QLabel("研A402");
    homeLabel[2] = new QLabel("<h1>次の講義</h1>");
    homeLabel[3] = new QLabel("コンピュータ概論Ⅱ");

    font[0] = homeLabel[1] -> font();
    font[1] = homeLabel[3] -> font();
    font[0].setPointSize(80);
    font[1].setPointSize(70);
    homeLabel[1] -> setFont(font[0]);
    homeLabel[3] -> setFont(font[1]);

    homeLabel[0] -> setAlignment(Qt::AlignHCenter|Qt::AlignBottom);
    homeLabel[1] -> setAlignment(Qt::AlignHCenter|Qt::AlignTop);
    homeLabel[2] -> setAlignment(Qt::AlignHCenter|Qt::AlignBottom);
    homeLabel[3] -> setAlignment(Qt::AlignHCenter|Qt::AlignTop);

    for(int i=0; i<4; i++){
        mainLayout -> addWidget(homeLabel[i]);
    }

    setLayout(mainLayout);
}
