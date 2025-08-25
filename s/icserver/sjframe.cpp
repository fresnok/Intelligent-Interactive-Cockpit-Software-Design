#include "sjframe.h"
#include "ui_sjframe.h"

sjframe::sjframe(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::sjframe)
{
    ui->setupUi(this);

    ztimer = new QTimer;
    ztimer->start(10);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("iclogin");
    db.setUserName("root");
    db.setPassword("05231217");
    bool ok = db.open();
    if (ok)
    {
        qDebug() << "数据库连接成功" ;
    }
    else
    {
        QMessageBox::warning(NULL,"数据库连接失败的错误信息",db.lastError().text());
    }

    ui->usertable->setColumnCount(3);//设置3列
    QStringList nmheader;
    nmheader<<"用户名"<<"密码"<<"状态";
    ui->usertable->setHorizontalHeaderLabels(nmheader);//设置表头内容
    ui->usertable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应

    time = QDateTime::currentDateTime().toString("hh:mm:ss yyyy-MM-dd");
    connect(ztimer, &QTimer::timeout, this, [=]()
        {
        time = QDateTime::currentDateTime().toString("hh:mm:ss yyyy-MM-dd");
        QSqlQuery query;
        QString sql = QString("select * from user");
        query.exec(sql);
        QString zt;
        for(int i = 0; query.next(); i++)
        {
            int pd = 0;
            int j = 0;
            for(j=0;j<sum;j++)
            {
                if(mt[j]->username == (query.value(0).toString()))
                {
                pd = 1;
                }
            }
            if(pd == 0)
            {
                zt = "离线";
            }
            else
            {
                zt = "在线";
            }
        QTableWidgetItem *ty0 = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *ty1 = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *ty2 = new QTableWidgetItem(zt);
        ui->usertable->setItem(i,0,ty0);
        ui->usertable->setItem(i,1,ty1);
        ui->usertable->setItem(i,2,ty2);
        }
        });

    ui->ipline->setText("127.0.0.1");
    ui->portline->setText("8000");

    ui->minjj->setText("0");
    ui->maxjj->setText("20");
    ui->minfb->setText("0");
    ui->maxfb->setText("70");
    ui->minv->setText("0");
    ui->maxv->setText("120");
    minjj=ui->minjj->text().toDouble();
    maxjj=ui->maxjj->text().toDouble();
    minfb=ui->minfb->text().toDouble();
    maxfb=ui->maxfb->text().toDouble();
    minv=ui->minv->text().toDouble();
    maxv=ui->maxv->text().toDouble();

    //创建一个server对象
    server = new QTcpServer;

    ui->tableWidget->setColumnCount(4);//设置4列
    QStringList header1;
    header1<<"时间"<<"用户名"<<"IP地址"<<"端口号";
    ui->tableWidget->setHorizontalHeaderLabels(header1);//设置表头内容
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应
    QSqlQuery query;
    QString sql = QString("select * from user");
    query.exec(sql);
    for(int i = 0; query.next(); i++)
    {
    ui->usertable->insertRow(ui->usertable->rowCount());
    int hs2 = ui->usertable->rowCount()-1;
    QTableWidgetItem *ty0 = new QTableWidgetItem(query.value(0).toString());
    QTableWidgetItem *ty1 = new QTableWidgetItem(query.value(1).toString());
    ui->usertable->setItem(hs2,0,ty0);
    ui->usertable->setItem(hs2,1,ty1);
    }

    sum = 0;

}


sjframe::~sjframe()
{
    delete ui;
}

void sjframe::newClienthandler()
{
    //创建socket
    QTcpSocket *socket=server->nextPendingConnection();

    //获取对接的客户端的地址和端口号
    ip1 = socket->peerAddress().toString();
    port1 = QString::number(socket->peerPort());

    //服务器收到客户端发送的信息
    //connect(socket,&QTcpSocket::readyRead,this,[=]{});

    //启动线程
    sum++;
    //创建线程对象
    mythread *m = new mythread(mno,socket);
        mt[mno]=m;
        mno++;
        c =new cframe(m,this);
        c->move(400+(mno-1)*271,0);
        c->show();
    //打开线程
    m->start();
    connect(m,&mythread::sendToSever,this,&sjframe::threadSlot);
}

void sjframe::threadSlot(int n,QByteArray b)
{
    QString xx = QString(b);
    QStringList vxx;
    vxx = xx.split(',');//按照","分割字符

    //连接记录
    if(vxx[0] == "2")
    {
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    int hs = ui->tableWidget->rowCount()-1;
    QTableWidgetItem *lj0 = new QTableWidgetItem(time);
    QTableWidgetItem *lj1 = new QTableWidgetItem(mt[n]->username);
    QTableWidgetItem *lj2 = new QTableWidgetItem(ip1);
    QTableWidgetItem *lj3 = new QTableWidgetItem(port1);
    ui->tableWidget->setItem(hs,0,lj0);
    ui->tableWidget->setItem(hs,1,lj1);
    ui->tableWidget->setItem(hs,2,lj2);
    ui->tableWidget->setItem(hs,3,lj3);
    ui->tableWidget->scrollToBottom();  //让滚动条滚动到最底部
    ui->textEdit->append(mt[n]->username + "已连接");
    }

    //阈值报警
    if(vxx[0] == "1")
    {
    if(vxx[3].toDouble() <= maxjj && vxx[3].toDouble() >= minjj)
    {
    }
    else
    {
        QByteArray jjts;
        QString infor = time;
        infor += " 智能云端服务中心：酒精浓度异常，请不要酒驾，不然将会自动报警！\n";
        jjts.append(infor);
        mt[n]->socket->write(jjts);
    }

    if(vxx[2].toDouble() <= maxfb && vxx[2].toDouble() >= minfb)
    {
    }
    else
    {
        QByteArray fbts;
        QString infor = time;
        infor += " 智能云端服务中心：分贝异常，请放平心态，文明驾驶，杜绝路怒，从我做起！\n";
        fbts.append(infor);
        mt[n]->socket->write(fbts);
    }

    if(vxx[1].toDouble() <= maxv && vxx[3].toDouble() >= minv)
    {
    }
    else
    {
        QByteArray vts;
        QString infor = time;
        infor += " 智能云端服务中心：速度异常，为了您的安全，请勿过快或过慢！\n";
        vts.append(infor);
        mt[n]->socket->write(vts);
    }
    }

    //车车通信
    if(vxx[0] == "0")
    {
        int i;
        int pd = 0;
        if(vxx[1] == "server")
        {
            QString infor = time;
            infor += " ";
            infor += mt[n]->username;
            infor += ":";
            infor += vxx[2];
            ui->textEdit->append(infor);
        }
        else
        {
        for(i=0;i<sum;i++)
        {
            if(mt[i]->username == vxx[1])
            {
                QByteArray ccfs;
                QString infor = time;
                infor += " ";
                infor += mt[n]->username;
                infor += ":";
                int l = 3;
                QString xxnr = vxx[2];
                for(l = 3;l < vxx.size();l++)
                {
                xxnr += ",";
                xxnr += vxx[l];
                }
                infor += xxnr;
                infor += "\n";
                ccfs.append(infor);
                mt[i]->socket->write(ccfs);
                ui->textEdit->append(time + "用户" + mt[n]->username + " to " + "用户" + vxx[1] + ":" + xxnr);
                pd++;
            }
        }
        if(pd == 0)
        {
            QByteArray cwfs;
            QString infor = time;
            infor += " 智能云端服务中心：该用户不存在！\n";
            cwfs.append(infor);
            mt[n]->socket->write(cwfs);
        }
        }
    }

    //断开连接
    if(vxx[0] == "3")
    {
        mt[n]->username = "##########";
        qDebug() << mt[n]->username;
    }

    //道路救援
    if(vxx[0] == "4")
    {
        QMessageBox::information(this,"道路救援提醒",vxx[1]);
    }
}


void sjframe::on_pushButton_clicked()
{
    //开始监听
    server->listen(QHostAddress::AnyIPv4,8000);
    connect(server,&QTcpServer::newConnection,this,&sjframe::newClienthandler);
    QMessageBox::information(this,"服务器提示","服务器已打开，等待客户端用户连接");
}

void sjframe::on_pushButton_2_clicked()
{
    minjj=ui->minjj->text().toDouble();
    maxjj=ui->maxjj->text().toDouble();
    minfb=ui->minfb->text().toDouble();
    maxfb=ui->maxfb->text().toDouble();
    minv=ui->minv->text().toDouble();
    maxv=ui->maxv->text().toDouble();
}
