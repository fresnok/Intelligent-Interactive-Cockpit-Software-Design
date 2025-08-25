#include "jframe.h"
#include "ui_jframe.h"
#include "QLabel"
#include "QMovie"
#include<QDebug>
#include "sensor.h"

jframe::jframe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jframe)
{
    ui->setupUi(this);

    sp = new QSerialPort(this);
    sp->setPortName("COM1"); // 设置虚拟串口号
    sp->setBaudRate(QSerialPort::Baud9600); // 设置波特率
    if (!sp->open(QIODevice::ReadWrite))
       qDebug() << "Failed to open serial port";
    connect(sp, &QSerialPort::readyRead, this,[=](){
        QByteArray data = sp->readAll(); // 读取串口数据
        //qDebug() << data;
    });

    //显示用户名
    ui->usernamelabel->setText(username);
    ui->usernamelabel->setAlignment(Qt::AlignCenter);

    //显示时间
    ztime = new QTimer;
    ztime->start(10);
    connect(ztime,SIGNAL(timeout()),this, SLOT(update_ztime()));

    //显示
    connect(ztime, &QTimer::timeout, this, [=]()
        {
        if(vdata >= 0&&vdata <= 200)
           ui->vlcd->display(QString::number(vdata));
        else if(vdata < 0)
           ui->vlcd->display(QString::number(0));
        else
           ui->vlcd->display(QString::number(200));
        ui->text->setText(xx);
        ui->text->moveCursor(QTextCursor::End);  //让滚动条滚动到最底部
        if(e == 1)
        {
        //温度
        QString wd = QString::number(wddata);
        wd += "℃";
        ui->zwdlabel->setText(wd);
        ui->zwdlabel->setAlignment(Qt::AlignCenter);
        //湿度
        QString sd = QString::number(sddata);
        sd += "%";
        ui->zsdlabel->setText(sd);
        ui->zsdlabel->setAlignment(Qt::AlignCenter);
        //烟雾
        QString yw = QString::number(ywdata);
        yw += "ppm";
        ui->zywlabel->setText(yw);
        ui->zywlabel->setAlignment(Qt::AlignCenter);
        }
        else
        {
            ui->zwdlabel->setText("---");
            ui->zwdlabel->setAlignment(Qt::AlignCenter);
            ui->zsdlabel->setText("---");
            ui->zsdlabel->setAlignment(Qt::AlignCenter);
            ui->zywlabel->setText("---");
            ui->zywlabel->setAlignment(Qt::AlignCenter);
        }
        if(d == 1)
        {
        //分贝
        QString fb = QString::number(fbdata);
        fb += "dB";
        ui->zfblabel->setText(fb);
        ui->zfblabel->setAlignment(Qt::AlignCenter);
        //酒精
        QString jj = QString::number(jjdata);
        jj += "mg/100mL";
        ui->zjjlabel->setText(jj);
        ui->zjjlabel->setAlignment(Qt::AlignCenter);
        }
        else
        {
            ui->zfblabel->setText("---");
            ui->zfblabel->setAlignment(Qt::AlignCenter);
            ui->zjjlabel->setText("---");
            ui->zjjlabel->setAlignment(Qt::AlignCenter);
        }

        if(d == 1)
        {
        //车距
        QString d = QString::number(ddata);
        d += "m";
        ui->zhcjlabel->setText(d);
        ui->zhcjlabel->setAlignment(Qt::AlignCenter);
        //油量
        QString yl = QString::number(yldata);
        yl += "%";
        ui->zqcjlabel->setText(yl);
        ui->zqcjlabel->setAlignment(Qt::AlignCenter);
        //胎压
        QString ty = QString::number(tydata);
        ty += "bar";
        ui->ztylabel->setText(ty);
        ui->ztylabel->setAlignment(Qt::AlignCenter);
        }
        else
        {
            ui->zhcjlabel->setText("---");
            ui->zhcjlabel->setAlignment(Qt::AlignCenter);
            ui->ztylabel->setText("---");
            ui->ztylabel->setAlignment(Qt::AlignCenter);
            ui->zqcjlabel->setText("---");
            ui->zqcjlabel->setAlignment(Qt::AlignCenter);
        }
        });


    //默认显示功能控制页面
    ui->stackedWidget->setCurrentIndex(0);

    //贴图
    QImage image2("E:/C++ks/qtic/c/resource/image/carphoto2.png"); // 使用资源路径或实际文件路径
       // 将 QImage 设置为 QLabel 的内容
       ui->car2label->setPixmap(QPixmap::fromImage(image2));
       // 调整 QLabel 大小以适应图像大小
       ui->car2label->setScaledContents(true);

    //贴图
    QImage image1("E:/C++ks/qtic/c/resource/image/carphoto1.png"); // 使用资源路径或实际文件路径
       // 将 QImage 设置为 QLabel 的内容
       ui->car1label->setPixmap(QPixmap::fromImage(image1));
       // 调整 QLabel 大小以适应图像大小
       ui->car1label->setScaledContents(true);
}

jframe::~jframe()
{
    delete ui;
}

//更新总时间
void jframe::update_ztime()
{
    QString ztm = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd");
    ui->ztmlabel->setText(ztm);
    ui->ztmlabel->setAlignment(Qt::AlignCenter);
}

void jframe::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void jframe::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void jframe::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
