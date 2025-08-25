#include "cframe.h"
#include "ui_cframe.h"

cframe::cframe(mythread *m, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cframe)
{
    ui->setupUi(this);

    myth=m;

    //设置一个更新用户名的定时器
    usertimer = new QTimer;
    usertimer->start(1000);
    connect(usertimer,&QTimer::timeout,this,[=](){
        ui->namelabel->setText(myth->username);
        ui->namelabel->setAlignment(Qt::AlignCenter);
        //速度
        ui->vlcd->display(myth->vdata);
        //温度
        QString wd = myth->wddata;
        wd += "℃";
        ui->zwdlabel->setText(wd);
        ui->zwdlabel->setAlignment(Qt::AlignCenter);
        //湿度
        QString sd = myth->sddata;
        sd += "%";
        ui->zsdlabel->setText(sd);
        ui->zsdlabel->setAlignment(Qt::AlignCenter);
        //烟雾
        QString yw = myth->ywdata;
        yw += "ppm";
        ui->zywlabel->setText(yw);
        ui->zywlabel->setAlignment(Qt::AlignCenter);
        //分贝
        QString fb = myth->fbdata;
        fb += "dB";
        ui->zfblabel->setText(fb);
        ui->zfblabel->setAlignment(Qt::AlignCenter);
        //酒精
        QString jj = myth->jjdata;
        jj += "mg/100mL";
        ui->zjjlabel->setText(jj);
        ui->zjjlabel->setAlignment(Qt::AlignCenter);
        //车距
        QString d = myth->ddata;
        d += "m";
        ui->zhcjlabel->setText(d);
        ui->zhcjlabel->setAlignment(Qt::AlignCenter);
        //油量
        QString yl = myth->yldata;
        yl += "%";
        ui->zqcjlabel->setText(yl);
        ui->zqcjlabel->setAlignment(Qt::AlignCenter);
        //胎压
        QString ty = myth->tydata;
        ty += "bar";
        ui->ztylabel->setText(ty);
        ui->ztylabel->setAlignment(Qt::AlignCenter);
    });

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




cframe::~cframe()
{
    delete ui;
}

void cframe::userTimeout()
{
}
void cframe::updataTimeout()
{
}

void cframe::on_pushButton_2_clicked()
{
    QByteArray stc;
    QString infor="智能云端服务中心：";
    infor += ui->line->text();
    infor += "\n";
    stc.append(infor);
    myth->socket->write(stc);
}

void cframe::on_pushButton_clicked()
{
    ui->line->setText("");
}
