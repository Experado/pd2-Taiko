#include "result.h"
#include "ui_result.h"
#include <QMainWindow>

Result::Result(QWidget *parent) :
    QDialog(parent),
    r(new Ui::Result)
{
    r->setupUi(this);
}

Result::~Result()
{
    delete r;
}
void Result::shot(int grade)
{
    this->show();
    r->grade->display((int)grade);
}
