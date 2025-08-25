#include "ydfw.h"
#include "ui_ydfw.h"

ydfw::ydfw(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ydfw)
{
    ui->setupUi(this);
    sdtimer = new QTimer;
    ui->ipline->setText("127.0.0.1");
    ui->portline->setText("8000");
    socket = new QTcpSocket;
    connect(socket,&QTcpSocket::connected,[this]()
    {
        pdlj = 1;
        QMessageBox::information(this,"连接提示","连接成功");
        QByteArray ba;
        QString infor="2,"+username;
        ba.append(infor);
        socket->write(ba);
    });
    connect(socket,&QTcpSocket::disconnected,[this]()
    {
        pdlj = 0;
        QMessageBox::warning(this,"连接提示","连接断开");
    });
    connect(sdtimer,&QTimer::timeout,this,[=](){
        QByteArray ba1;
        QString zj1 = QString::number(vdata);
        zj1 += ",";
        ba1.append(zj1);

        QByteArray ba2;
        QString zj2 = QString::number(fbdata);
        zj2 += ",";
        ba2.append(zj2);

        QByteArray ba3;
        QString zj3 = QString::number(jjdata);
        zj3 += ",";
        ba3.append(zj3);

        QByteArray ba4;
        QString zj4 = QString::number(wddata);
        zj4 += ",";
        ba4.append(zj4);

        QByteArray ba5;
        QString zj5 = QString::number(sddata);
        zj5 += ",";
        ba5.append(zj5);

        QByteArray ba6;
        QString zj6 = QString::number(ywdata);
        zj6 += ",";
        ba6.append(zj6);

        QByteArray ba7;
        QString zj7 = QString::number(ddata);
        zj7 += ",";
        ba7.append(zj7);

        QByteArray ba8;
        QString zj8 = QString::number(yldata);
        zj8 += ",";
        ba8.append(zj8);

        QByteArray ba9;
        QString zj9 = QString::number(tydata);
        //zj9 += ",";
        ba9.append(zj9);

        if(dljy == 1)
        {
            int jd1 = QRandomGenerator::global()->bounded(0,180);
            int jd2 = QRandomGenerator::global()->bounded(000000,999999);
            int wd1 = QRandomGenerator::global()->bounded(0,90);
            int wd2 = QRandomGenerator::global()->bounded(000000,999999);
            QByteArray jy;
            QString jynr = "4";
            jynr += ",";
            jynr += username;
            jynr += " 正在请求道路救援，位置：";
            jynr += QString::number(jd1);
            jynr += ".";
            jynr += QString::number(jd2);
            jynr += "°E";
            jynr += "，";
            jynr += QString::number(wd1);
            jynr += ".";
            jynr += QString::number(wd2);
            jynr += "°N";
            jynr += "！";
            jy.append(jynr);
            socket->write(jy);
            dljy = 0;
        }
        else
        {
        socket->write("1,");
        if(vsc == 1)
        {
        socket->write(ba1);
        }
        else
        {
        socket->write("---,");
        }
        if(dsc == 1)
        {
        socket->write(ba2);
        socket->write(ba3);
        }
        else
        {
        socket->write("---,");
        socket->write("---,");
        }
        if(esc == 1)
        {
        socket->write(ba4);
        socket->write(ba5);
        socket->write(ba6);
        }
        else
        {
        socket->write("---,");
        socket->write("---,");
        socket->write("---,");
        }
        if(csc == 1)
        {
        socket->write(ba7);
        socket->write(ba8);
        socket->write(ba9);
        }
        else
        {
        socket->write("---,");
        socket->write("---,");
        socket->write("---");
        }
        }
    });

    connect(socket,&QTcpSocket::readyRead,this,[=]{
        QByteArray js = socket->readAll();
        QString jsxx = QString(js);
        xx += jsxx;
        ui->text->setText(xx);
        ui->text->moveCursor(QTextCursor::End);  //让滚动条滚动到最底部
    });


    ui->nameline->setText("server");
}

ydfw::~ydfw()
{
    delete ui;
}

void ydfw::on_pushButton_clicked()
{
    //获取ip地址和端口
    QString IP = ui->ipline->text();
    QString port=ui->portline->text();

    //连接服务器
    socket->connectToHost(QHostAddress(IP),port.toShort());

    sdtimer->start(100);
}

void ydfw::on_pushButton_2_clicked()
{
    QByteArray fs;
    QString infor="3,";
    fs.append(infor);
    socket->write(fs);

    dktimer = new QTimer;
    dktimer->start(2000);

    connect(dktimer,&QTimer::timeout,this,[=](){
        socket->close();
        sdtimer->stop();
        dktimer->stop();
    });
}

void ydfw::on_pushButton_3_clicked()
{

    if(pdlj == 0)
        QMessageBox::warning(this,"操作提示","请先连接云端中心以获取服务");
    else
    {
    QByteArray fs;
    QString infor="0,";//为传输的字符串加码
    infor += ui->nameline->text();
    infor += ",";
    infor += ui->xxline->text();
    fs.append(infor);
    socket->write(fs);
    }
}

void ydfw::on_pushButton_4_clicked()
{
    ui->nameline->setText("");
    ui->xxline->setText("");
}

void ydfw::on_pushButton_5_clicked()
{
    xx = "";
    ui->text->setText("");
}
