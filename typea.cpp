#include "typea.h"
#include "ui_typea.h"
#include <QtCore>
#include <QCoreApplication>
#include "result.h"
#include <QTime>
#include <QString>


TypeA::TypeA(QWidget *parent) :
    QMainWindow(parent),
    timer(new QTimer),
    ui(new Ui::TypeA),
    T(0),
    grade(0)
{
    ui->setupUi(this);
    timer->start(10);
    srand(time(NULL));
    scene = new QGraphicsScene(0,100,1024,150);
    view = new QGraphicsView(ui->graphicsView);
    view->setScene(scene);

    ui->grade->display((int)grade);
    restart();
    connect(this->timer,SIGNAL(timeout()),this,SLOT(go()));
}

TypeA::~TypeA()
{
    delete ui;
    delete view;
    delete scene;
}

void TypeA::item_add()
{
    for(int i=0;i<600;i++)
    {
        item = new Item(i*550+6000,rand()%4);
        v.push_back(item);
    }
    now= v.begin();
    here= v.begin();
}

void TypeA::go()
{
    T+=3;
    if(T<=36000)
    {
        QString s;
        s.sprintf("%.2f",(float)(36000-T)/1000);
        ui->lcdNumber->display(s); //show time
        if(here!=v.end())
           if((*here)->gettime() <= T)
           {
                 scene->addItem(*here);
                 connect(timer,SIGNAL(timeout()),*here,SLOT(vanish()));
                 connect(*here,SIGNAL(kill()),this,SLOT((item_kill())));
                 here++;
           }
    }
    else
    {
        Result *r = new Result;
        timer->stop();
        scene->clear();
        r->setGeometry(this->x()+200,this->y()+150,400,300);
        r->shot(grade);
        connect(r,SIGNAL(accepted()),this,SLOT(restart()));
        connect(r,SIGNAL(rejected()),this,SLOT(close()));
    }

}

void TypeA::item_kill()
{
    if(now!=v.end()) now++;
}

void TypeA::score(int position)
{
    int distance=(position-20);
    if(distance<=50)    grade+=100;
    else    grade-=50;
    ui->grade->display((int)grade);
}

void TypeA::keyPressEvent(QKeyEvent *press)
{
    if(press->key()==Qt::Key_J || press->key()==Qt::Key_K) {

        if((*now)->getID() == 0 || (*now)->getID() == 2)
        {
            score((*now)->x());
            delete *now;
            now++;
        }
    }
    else if(press->key()==Qt::Key_D || press->key()==Qt::Key_F) {

        if((*now)->getID() == 1 || (*now)->getID() == 3)
        {
            score((*now)->x());
            delete *now;
            now++;
        }
    }
}
void TypeA::restart()
{
    v.clear();
        item_add();
        view->show();
        grade = 0;
        T = 0;
        timer->start(3);
        ui->grade->display(grade);
}
