#ifndef CHOOSE_H
#define CHOOSE_H

#include <QMainWindow>
#include <QWidget>
#include <QApplication>
#include "mainwindow.h"
#include "typea.h"
#include "typeb.h"
namespace Ui {
class choose;
class MainWindow;
}
class choose : public QMainWindow
{
    Q_OBJECT

public:
    explicit choose(QWidget *parent = 0);
    ~choose();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::choose *ui;
    Ui::TypeA *window;
    Ui::MainWindow *w;
    Ui::TypeB *window2;
};

#endif // CHOOSE_H
