#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QApplication>
#include "choose.h"

namespace Ui {
class MainWindow;
class choose;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_pushButton_2_clicked();

private slots:

    void on_pushButton_clicked();

private:
    Ui::MainWindow *w;
    Ui::choose *ui;
};

#endif // MAINWINDOW_H
