#ifndef TYPEB_H
#define TYPEB_H

#include <QMainWindow>
#include <QTimer>
#include <QLCDNumber>
#include <QString>

namespace Ui {
class TypeB;
}

class TypeB : public QMainWindow
{
    Q_OBJECT

public:
    explicit TypeB(QWidget *parent = 0);
    ~TypeB();

public slots:
    void mytime();

private:
    Ui::TypeB *ui;
    QTimer *time;
    float T;
    QString s;
};

#endif // TYPEB_H
