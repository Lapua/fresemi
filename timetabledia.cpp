#include "timetabledia.h"

TimeTableDia::TimeTableDia(QWidget *parent) : QWidget(parent)
{
    subject = new QTextLine;

    /*ok = new QPushButton(tr("OK"));
    cancel = new QPushButton(tr("Cancel"));
    buttonLayout = new QHBoxLayout;
    buttonLayout -> addWidget(ok);
    buttonLayout -> addWidget(cancel);
    */

    formLayout = new QFormLayout;
}
