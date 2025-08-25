#include "login.h"
#include "ui_login.h"
#include<QDebug>
#include <QMessageBox>
#include "QLabel"
#include "QMovie"

login::login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

    rltime = new QTimer;
    opentime = new QTimer;
    connect(rltime,SIGNAL(timeout()),this,SLOT(dl()));
    connect(rltime, &QTimer::timeout, this, [=]()
        {
        pro->kill();
        });
    connect(opentime, &QTimer::timeout, this, [=]()
        {
        o->close();
        });

    QMovie *movie = new QMovie("E:/C++ks/qtic/c/resource/image/logingif.gif");
    ui->loginphoto->setMovie(movie);
    movie->start();
    // 调整 QLabel 大小以适应图像大小
    ui->loginphoto->setScaledContents(true);
}


login::~login()
{
    delete ui;
}

int a=2;


void login::dl()
{
    this->hide();
    jframe * j = new jframe();
    j->show();
    rltime->stop();
}

void login::on_rlsbbutton_clicked()
{
    QString str = "E:/C++ks/qtic/c/build-icclient-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/debug/detect_jhb/detect_jhb.exe";
    o->show();
    connect(pro, &QProcess::readyReadStandardOutput, this, [=]()
        {
            qDebug() << pro->readAllStandardOutput();
        });
    pro->start(str);//启动可执行文件

    rltime->start(12000);
    opentime->start(8000);

    username = "fxajhb";
}

void login::on_singupbutton_clicked()
{
   a=1;
}


void login::on_loginbutton_clicked()
{
    a=2;
}

void login::on_sureButton_clicked()
{
    switch (a) {
    case 0:
    {
        QMessageBox::warning(this,"操作提示","请先选择操作");
        break;
    }
    case 1:
    {
        a=0;
        //获取用户的注册信息
        QString account = ui->zhanghaoedit->text();
        QString password = ui->mimaedit->text();
        //插入数据
        QSqlQuery query;
        QString qs = QString("insert into user(用户名,密码) values('%1','%2')").arg(account).arg(password);
        if(query.exec(qs))//若数据插入成功（注册成功）
        {
             QMessageBox::information(this,"注册提示","注册成功");
        }
        else
        {
             QMessageBox::warning(this,"注册失败的错误信息",query.lastError().text());
        }
        break;
    }
    case 2:
    {
        a=0;
        //获取用户的登录信息
        QString account = ui->zhanghaoedit->text();
        QString password = ui->mimaedit->text();
        QSqlQuery query;
        QString qs = QString("select * from user where 用户名 = '%1' and 密码 = '%2'").arg(account).arg(password);
        if(!query.exec(qs))//若无记录
        {
           QMessageBox::warning(this,"登录失败的错误信息",query.lastError().text());
        }
        else if(query.next())
        {
            //QMessageBox::information(this,"登录提示","登录成功");
            username = account;
            this->hide();
            jframe * j = new jframe();
            j->show();
        }
        else
        {
            QMessageBox::information(this,"登录提示","登录失败");
        }
        break;
    }
    }

}
