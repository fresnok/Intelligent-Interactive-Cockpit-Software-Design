#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include<QThread>
#include <QTcpSocket>
#include <QDebug>
#include <QString>
#include <QMessageBox>

class mythread : public QThread
{
    Q_OBJECT
public:
    explicit mythread(int n, QTcpSocket *s);
    void run();

    //定义变量储存改服务器的各项值
    QString vdata = "---";
    QString wddata = "---";
    QString sddata = "---";
    QString ywdata = "---";
    QString fbdata = "---";
    QString jjdata = "---";
    QString ddata = "---";
    QString yldata = "---";
    QString tydata = "---";

    //定义socket
    QTcpSocket *socket;

    //所连接的客户端的用户名
    QString username;

    //所连接的客户端的次序
    int no;

signals:
    void sendToSever(int n, QByteArray b);

public slots:
    void clineInfoSlot();

private:



};

#endif // MYTHREAD_H
