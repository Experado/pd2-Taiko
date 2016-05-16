#include "typeb.h"
#include "ui_typeb.h"
#include <QtCore>
#include <QCoreApplication>
#include "result.h"

TypeB::TypeB(QWidget *parent) :
    QMainWindow(parent),
    time(new QTimer),
    ui(new Ui::TypeB),
    T(220)
{
    ui->setupUi(this);
    time->start(100);
    connect(time,SIGNAL(timeout()),this,SLOT(mytime()));
}

TypeB::~TypeB()
{
    delete ui;
}
void TypeB::mytime()
{
    T -= 0.1;
    s.sprintf("%.1f",T);
    ui->lcdNumber->display(s);
    if(T<0)
    {
        time->stop();
        Result *r =new Result;
        this->hide();
        r->show();

    }
}
