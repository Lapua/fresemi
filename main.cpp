#include "grid.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    grid w;
    w.show();

    return a.exec();
}
