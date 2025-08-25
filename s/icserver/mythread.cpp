#include "mythread.h"

mythread::mythread(int n, QTcpSocket *s)
{
    socket=s;
    no=n;
}


void mythread::run()
{
    connect(socket,&QTcpSocket::readyRead,this,&mythread::clineInfoSlot);
}

void mythread::clineInfoSlot()
{
    QByteArray ba = socket->readAll();
    QString xx = QString(ba);
    QStringList vxx;
    vxx = xx.split(',');//按照","分割字符
    int pd = 0;
    if(vxx[0] == "0")
        pd = 1;
    if(vxx[0] == "1")
        pd = 2;
    if(vxx[0] == "2")
        pd = 3;
    switch(pd)
    {
    case 1:
        break;
    case 2:
        vdata = vxx[1];
        fbdata = vxx[2];
        jjdata = vxx[3];
        wddata = vxx[4];
        sddata = vxx[5];
        ywdata = vxx[6];
        ddata = vxx[7];
        yldata = vxx[8];
        tydata = vxx[9];
        break;
    case 3:
        username = vxx[1];
        break;
    }
    emit sendToSever(no, ba);
}

