#ifndef ITEM_H
#define ITEM_H

#include <QObject>
#include <QGraphicsPixmapItem>

class Item : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Item(int,int);
    int getID();
    int gettime();

private:
    int ID;
    int time;

signals:
    void kill();

public slots:
    void vanish();
    void type();
};

#endif // ITEM_H
