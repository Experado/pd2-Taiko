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

int Item::getID()
{
    return ID;
}

int Item::gettime()
{
    return time;
}
void Item::type()
{
    switch(ID) {
            case 0:
                setPixmap(QPixmap(":/../../Desktop/使用/notes11.png"));
                setPos(1024,310);
                break;
            case 1:
                setPixmap(QPixmap(":/../../Desktop/使用/noteAAAAs.png"));
                setPos(1024,310);
                break;
            case 2:
                setPixmap(QPixmap(":/../../Desktop/使用/notAAAAes.png"));
                setPos(1024,310);
                break;
            case 3:
                setPixmap(QPixmap(":/../../Desktop/使用/nSSotes.png"));
                setPos(1024,310);
                break;
            default:
                break;
        }
}
