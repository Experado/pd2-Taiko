#include "timer.h"
#include <QtCore>
#include <QDebug>
Timer::Timer()
{
       time = new QTimer(this);
       connect(time,SIGNAL(timeout()),this,SLOT(My()));

       time->start(1000);
}

