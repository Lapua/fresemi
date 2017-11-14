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

    QSpinBox *spinBox;
    QLabel *min;
    QComboBox *comBox;
    QLabel *noticeLabel;
};

#endif // TIMETABLEDIA_H
