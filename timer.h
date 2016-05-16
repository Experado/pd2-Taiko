#ifndef TIMER_H
#define TIMER_H

#include <QtCore>
#include "result.h"

class Timer : public QObject
{
    Q_OBJECT
public:
    Timer();
    QTimer *time;
    Ui::Result *r;

public slots:
    void My();
};

#endif // TIMER_H
