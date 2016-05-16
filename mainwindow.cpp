#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    w(new Ui::MainWindow)
{
    w->setupUi(this);
    MainWindow::connect(w->pushButton_2, SIGNAL(clicked()), this,SLOT(on_pushButton_2_clicked()));
}


MainWindow::~MainWindow()
{
    delete w;
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_clicked()
{
    choose *window = new choose;
    window->show();
    this->hide();

}
