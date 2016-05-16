#include "item.h"



Item::Item(int what,int when)
{
    ID=what;
    time=when;
    type();
}

void Item::vanish()
{
    if(x()>=0)   setPos(x()-1,y());
    else
    {
        emit kill();
        delete this;
    }
}

void Item::getID()
{
    return ID;
}

void Item::gettime()
{
    return time;
}
void Item::type()
{
    switch(ID) {
            case 0:
                setPixmap(QPixmap(":/item/images/1.png"));
                setPos(1024,150);
                break;
            case 1:
                setPixmap(QPixmap(":/item/images/2.png"));
                setPos(1024,150);
                break;
            case 2:
                setPixmap(QPixmap(":/item/images/3.png"));
                setPos(1024,150);
                break;
            case 3:
                setPixmap(QPixmap(":/item/images/4.png"));
                setPos(1024,150);
                break;
            default:
                break;
        }
}
