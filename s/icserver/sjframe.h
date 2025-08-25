#ifndef SJFRAME_H
#define SJFRAME_H

#include <QWidget>
#include <mythread.h>
#include <QTcpServer>
#include <QTcpSocket>
#include <qdebug.h>
#include <QTime>
#include <QTimer>
#include <qmessagebox.h>
#include "cframe.h"
#include<QSqlError>
#include<QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class sjframe; }
QT_END_NAMESPACE

class sjframe : public QWidget
{
    Q_OBJECT

public:
    sjframe(QWidget *parent = nullptr);
    ~sjframe();

    mythread *mt[100];
    int mno = 0;

private slots:
    void newClienthandler();
    void threadSlot(int n,QByteArray b);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::sjframe *ui;
    QTcpServer *server;
    cframe *c;
    QString ip1;
    QString port1;
    double minjj;
    double maxjj;
    double minfb;
    double maxfb;
    double minv;
    double maxv;
    int sum;
    QTimer *ztimer;
    QString time;

};
#endif // SJFRAME_H
