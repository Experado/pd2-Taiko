#include "ending.h"
#include "ui_ending.h"

ending::ending(QWidget *parent) :
    QDialog(parent),
    e(new Ui::ending)
{
    e->setupUi(this);
}

ending::~ending()
{
    delete e;
}
void ending::shot(int grade)
{
    this->show();
    e->point->display((int)grade);
}
