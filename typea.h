#ifndef TYPEA_H
#define TYPEA_H

#include <QMainWindow>
#include <QTimer>
#include <QKeyEvent>
#include <QLCDNumber>
#include <QString>
#include "item.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <ctime>
#include <QVector>

namespace Ui {
class TypeA;
}

class TypeA : public QMainWindow
{
    Q_OBJECT

public:
    explicit TypeA(QWidget *parent = 0);
    ~TypeA();    

public slots:
    void keyPressEvent(QKeyEvent *press);
    void go();
    void item_add();
    void item_kill();
    void score(int position);
    void restart();


private:
    Ui::TypeA *ui;
    QVector<Item*> v;
    QTimer *timer;
    QGraphicsScene *scene;
    QGraphicsView *view;
    QVector<Item*>::iterator here;
    QVector<Item*>::iterator now;
    Item *item;
    float T;
    QString s;
    int grade;
};
#endif // TYPEA_H
