#include "timetabledia.h"

TimeTableDia::TimeTableDia(QWidget *parent) : QWidget(parent)
{
    subject = new QTextLine;
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

    /*ok = new QPushButton(tr("OK"));
    cancel = new QPushButton(tr("Cancel"));
    buttonLayout = new QHBoxLayout;
    buttonLayout -> addWidget(ok);
    buttonLayout -> addWidget(cancel);
    */

    formLayout = new QFormLayout;
    formLayout -> addRow(subject);
    formLayout -> addRow(noticeOFLabel, noticeOF);

    setLayout(formLayout);
}
