#ifndef TIMETABLEDIA_H
#define TIMETABLEDIA_H

#include <QWidget>
#include <QtWidgets>

class TimeTableDia : public QWidget
{
    Q_OBJECT
public:
    explicit TimeTableDia(QWidget *parent = nullptr);

private:
    QPushButton *ok;
    QPushButton *cancel;
    QFormLayout *formLayout;

    QTextLine *subject;
    QLabel *noticeOFLabel;
    QCheckBox *noticeOF;

    QHBoxLayout *noticeLayout;
    QSpinBox *spinBox;
    QLabel *minLabel;
    QComboBox *comBox;
    QLabel *noticeLabel;
};

#endif // TIMETABLEDIA_H
