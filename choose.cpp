#include "choose.h"
#include "ui_choose.h"

choose::choose(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::choose)
{
    ui->setupUi(this);
}

choose::~choose()
{
    delete ui;
}

void choose::on_pushButton_clicked()
{
   TypeA *window = new TypeA;
    window->show();
    this->hide();
}

void choose::on_pushButton_4_clicked()
{
    MainWindow *w = new MainWindow;
     w->show();
     this->hide();
}

void choose::on_pushButton_2_clicked()
{
    TypeB *window2 = new TypeB;
     window2->show();
     this->hide();
}
