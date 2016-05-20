#ifndef ENDING_H
#define ENDING_H

#include <QDialog>

namespace Ui {
class ending;
}

class ending : public QDialog
{
    Q_OBJECT

public:
    explicit ending(QWidget *parent = 0);
    ~ending();
    void shot(int);

private:
    Ui::ending *e;
};

#endif // ENDING_H
