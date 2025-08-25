#ifndef CFRAME_H
#define CFRAME_H

#include <QWidget>
#include "mythread.h"
#include <QTime>
#include <QTimer>

namespace Ui {
class cframe;
}

class cframe : public QWidget
{
    Q_OBJECT

public:
    explicit cframe(mythread *m, QWidget *parent = nullptr);
    ~cframe();

    mythread *myth;

private slots:
    void userTimeout();
    void updataTimeout();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::cframe *ui;
    QTimer *usertimer;
    QTimer *updataTimer;
};

#endif // CLIENT_SERVER_H
