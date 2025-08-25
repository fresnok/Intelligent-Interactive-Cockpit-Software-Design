#include "gnkz.h"
#include "ui_gnkz.h"
#include<QDebug>

gnkz::gnkz(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gnkz)
{
    ui->setupUi(this);

    sp = new QSerialPort(this);
    sp->setPortName("COM2"); // 设置虚拟串口号
    sp->setBaudRate(QSerialPort::Baud9600); // 设置波特率
    if (!sp->open(QIODevice::ReadWrite))
       qDebug() << "Failed to open serial port";

    db_g.setHostName("localhost");
    db_g.setPort(3306);
    db_g.setDatabaseName("icsensor");
    db_g.setUserName("root");
    db_g.setPassword("05231217");
    bool ok = db_g.open();
    if (ok)
    {
        qDebug() << "数据库连接成功" ;
    }
    else
    {
        QMessageBox::warning(NULL,"数据库连接失败的错误信息",db_g.lastError().text());
    }
    //每次初始化建立新的数据表，保证每次只保存本次的测量数据
    db_g.exec("DROP TABLE IF EXISTS z");
    db_g.exec("create table z (`时间` varchar(255) , `传感器` varchar(255), `数值` double not null)");


    ui->cgq->setCurrentIndex(0);

    ui->zhcjlabel->setText("---");
    ui->zhcjlabel->setAlignment(Qt::AlignCenter);
    ui->zqcjlabel->setText("---");
    ui->zqcjlabel->setAlignment(Qt::AlignCenter);
    ui->ztylabel->setText("---");
    ui->ztylabel->setAlignment(Qt::AlignCenter);
    ui->zwdlabel->setText("---");
    ui->zwdlabel->setAlignment(Qt::AlignCenter);
    ui->zsdlabel->setText("---");
    ui->zsdlabel->setAlignment(Qt::AlignCenter);
    ui->zywlabel->setText("---");
    ui->zywlabel->setAlignment(Qt::AlignCenter);
    ui->zfblabel->setText("---");
    ui->zfblabel->setAlignment(Qt::AlignCenter);
    ui->zjjlabel->setText("---");
    ui->zjjlabel->setAlignment(Qt::AlignCenter);

    //显示速度
    v->doinitialize(v);
    v->start_sensor(v);
    connect(v->stimer, &QTimer::timeout, this, [=]()
        {
        v->getdata(v);
        vdata = v->idata;
        //利用串口模拟数据由传感器传给驾驶舱
        QByteArray spdata;
        QString infor=QString::number(vdata);
        spdata.append(infor);
        sp->write(spdata); // 发送数据
        });

    //env表格
    ui->envtable->setColumnCount(3);//设置三列
    QStringList eheader;
    eheader<<"时间"<<"传感器"<<"数值";
    ui->envtable->setHorizontalHeaderLabels(eheader);//设置表头内容
    ui->envtable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应

    ui->drivertable->setColumnCount(3);//设置三列
    QStringList dheader;
    dheader<<"时间"<<"传感器"<<"数值";
    ui->drivertable->setHorizontalHeaderLabels(dheader);//设置表头内容
    ui->drivertable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应

    ui->tytable->setColumnCount(3);//设置三列
    QStringList cheader;
    cheader<<"时间"<<"传感器"<<"数值";
    ui->tytable->setHorizontalHeaderLabels(cheader);//设置表头内容
    ui->tytable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应

    //环境
    connect(e.stimer, &QTimer::timeout, this, [=]()
        {
        e.getdata(&e);
        //时间
        ui->envtimelabel->setText(QString::number(e.worktime));
        ui->envtimelabel->setAlignment(Qt::AlignCenter);
        //温度
        QString wd = QString::number(e.data);
        wd += "℃";
        ui->zwdlabel->setText(wd);
        ui->zwdlabel->setAlignment(Qt::AlignCenter);
        //湿度
        QString sd = QString::number(e.data1);
        sd += "%";
        ui->zsdlabel->setText(sd);
        ui->zsdlabel->setAlignment(Qt::AlignCenter);
        //烟雾
        QString yw = QString::number(e.data2);
        yw += "ppm";
        ui->zywlabel->setText(yw);
        ui->zywlabel->setAlignment(Qt::AlignCenter);
        //表格
        ui->envtable->insertRow(ui->envtable->rowCount());
        int hs = ui->envtable->rowCount()-1;
        QTableWidgetItem *wd0 = new QTableWidgetItem(e.stime);
        QTableWidgetItem *wd1 = new QTableWidgetItem("温度传感器");
        QTableWidgetItem *wd2 = new QTableWidgetItem(QString::number(e.data));
        ui->envtable->setItem(hs,0,wd0);
        ui->envtable->setItem(hs,1,wd1);
        ui->envtable->setItem(hs,2,wd2);
        ui->envtable->insertRow(ui->envtable->rowCount());
        int hs1 = ui->envtable->rowCount()-1;
        QTableWidgetItem *sd0 = new QTableWidgetItem(e.stime);
        QTableWidgetItem *sd1 = new QTableWidgetItem("湿度传感器");
        QTableWidgetItem *sd2 = new QTableWidgetItem(QString::number(e.data1));
        ui->envtable->setItem(hs1,0,sd0);
        ui->envtable->setItem(hs1,1,sd1);
        ui->envtable->setItem(hs1,2,sd2);
        ui->envtable->insertRow(ui->envtable->rowCount());
        int hs2 = ui->envtable->rowCount()-1;
        QTableWidgetItem *yw0 = new QTableWidgetItem(e.stime);
        QTableWidgetItem *yw1 = new QTableWidgetItem("烟雾浓度传感器");
        QTableWidgetItem *yw2 = new QTableWidgetItem(QString::number(e.data2));
        ui->envtable->setItem(hs2,0,yw0);
        ui->envtable->setItem(hs2,1,yw1);
        ui->envtable->setItem(hs2,2,yw2);
        ui->envtable->scrollToBottom();  //让滚动条滚动到最底部
        });

    //司机情况
    connect(d.stimer, &QTimer::timeout, this, [=]()
        {
        d.getdata(&d);
        //时间
        ui->drivertimelabel->setText(QString::number(d.worktime));
        ui->drivertimelabel->setAlignment(Qt::AlignCenter);
        //分贝
        QString fb = QString::number(d.data);
        fb += "dB";
        ui->zfblabel->setText(fb);
        ui->zfblabel->setAlignment(Qt::AlignCenter);
        //酒精
        QString jj = QString::number(d.data1);
        jj += "mg/100mL";
        ui->zjjlabel->setText(jj);
        ui->zjjlabel->setAlignment(Qt::AlignCenter);
        //表格
        ui->drivertable->insertRow(ui->drivertable->rowCount());
        int hs = ui->drivertable->rowCount()-1;
        QTableWidgetItem *fb0 = new QTableWidgetItem(d.stime);
        QTableWidgetItem *fb1 = new QTableWidgetItem("分贝传感器");
        QTableWidgetItem *fb2 = new QTableWidgetItem(QString::number(d.data));
        ui->drivertable->setItem(hs,0,fb0);
        ui->drivertable->setItem(hs,1,fb1);
        ui->drivertable->setItem(hs,2,fb2);
        ui->drivertable->insertRow(ui->drivertable->rowCount());
        int hs1 = ui->drivertable->rowCount()-1;
        QTableWidgetItem *jj0 = new QTableWidgetItem(d.stime);
        QTableWidgetItem *jj1 = new QTableWidgetItem("酒精浓度传感器");
        QTableWidgetItem *jj2 = new QTableWidgetItem(QString::number(d.data1));
        ui->drivertable->setItem(hs1,0,jj0);
        ui->drivertable->setItem(hs1,1,jj1);
        ui->drivertable->setItem(hs1,2,jj2);
        ui->drivertable->scrollToBottom();  //让滚动条滚动到最底部
        });

    //车况
    connect(c.stimer, &QTimer::timeout, this, [=]()
        {
        c.getdata(&c);
        //时间
        ui->tytimelabel->setText(QString::number(c.worktime));
        ui->tytimelabel->setAlignment(Qt::AlignCenter);
        //车距
        QString d = QString::number(c.data);
        d += "m";
        ui->zhcjlabel->setText(d);
        ui->zhcjlabel->setAlignment(Qt::AlignCenter);
        //油量
        QString yl = QString::number(c.data1);
        yl += "%";
        ui->zqcjlabel->setText(yl);
        ui->zqcjlabel->setAlignment(Qt::AlignCenter);
        //胎压
        QString ty = QString::number(c.data2);
        ty += "bar";
        ui->ztylabel->setText(ty);
        ui->ztylabel->setAlignment(Qt::AlignCenter);
        //表格
        ui->tytable->insertRow(ui->tytable->rowCount());
        int hs = ui->tytable->rowCount()-1;
        QTableWidgetItem *d0 = new QTableWidgetItem(c.stime);
        QTableWidgetItem *d1 = new QTableWidgetItem("毫米波雷达");
        QTableWidgetItem *d2 = new QTableWidgetItem(QString::number(c.data));
        ui->tytable->setItem(hs,0,d0);
        ui->tytable->setItem(hs,1,d1);
        ui->tytable->setItem(hs,2,d2);
        ui->tytable->insertRow(ui->tytable->rowCount());
        int hs1 = ui->tytable->rowCount()-1;
        QTableWidgetItem *yl0 = new QTableWidgetItem(c.stime);
        QTableWidgetItem *yl1 = new QTableWidgetItem("油量传感器");
        QTableWidgetItem *yl2 = new QTableWidgetItem(QString::number(c.data1));
        ui->tytable->setItem(hs1,0,yl0);
        ui->tytable->setItem(hs1,1,yl1);
        ui->tytable->setItem(hs1,2,yl2);
        ui->tytable->insertRow(ui->tytable->rowCount());
        int hs2 = ui->tytable->rowCount()-1;
        QTableWidgetItem *ty0 = new QTableWidgetItem(c.stime);
        QTableWidgetItem *ty1 = new QTableWidgetItem("胎压传感器");
        QTableWidgetItem *ty2 = new QTableWidgetItem(QString::number(c.data2));
        ui->tytable->setItem(hs2,0,ty0);
        ui->tytable->setItem(hs2,1,ty1);
        ui->tytable->setItem(hs2,2,ty2);
        ui->tytable->scrollToBottom();  //让滚动条滚动到最底部
        });

    opentime = new QTimer;
    jctime = new QTimer;
    xctimer = new QTimer;
    jytimer = new QTimer;
    connect(opentime, &QTimer::timeout, this, [=]()
        {
        o->close();
        opentime->stop();
        jctime->start(1000);
        });

    connect(jctime, &QTimer::timeout, this, [=]()
        {
        ui->textEdit->append("疲劳");
        });

    QImage image3("E:/C++ks/qtic/c/resource/image/tired.jpg"); // 使用资源路径或实际文件路径
    // 将 QImage 设置为 QLabel 的内容
    ui->pllabel->setPixmap(QPixmap::fromImage(image3));
    // 调整 QLabel 大小以适应图像大小
    ui->pllabel->setScaledContents(true);

    QImage image4("E:/C++ks/qtic/c/resource/image/server1.jpg"); // 使用资源路径或实际文件路径
    // 将 QImage 设置为 QLabel 的内容
    ui->serverlabel->setPixmap(QPixmap::fromImage(image4));
    // 调整 QLabel 大小以适应图像大小
    ui->serverlabel->setScaledContents(true);

    connect(xctimer,&QTimer::timeout,this,[=](){
        int dh = QRandomGenerator::global()->bounded(0,100);
        if (dh >= 0 && dh < 50)
        {
            ui->dhlabel->setText("请保持直行！");
            xctimer->stop();
            xctimer->start(10000);
        }
        if (dh >= 50 && dh < 75)
        {
            ui->dhlabel->setText("前方路口请右转！");
            xctimer->stop();
            xctimer->start(5000);
        }
        if (dh >= 75 && dh <= 100)
        {
            ui->dhlabel->setText("前方路口请左转！");
            xctimer->stop();
            xctimer->start(5000);
        }
    });

    QMovie *movie = new QMovie("E:/C++ks/qtic/c/resource/image/gojzh.gif");
    ui->kclabel->setMovie(movie);
    movie->start();
    // 调整 QLabel 大小以适应图像大小
    ui->kclabel->setScaledContents(true);

}

gnkz::~gnkz()
{
    delete ui;
}

//按键按下事件
void gnkz::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Up)
    {
        QMovie *movie = new QMovie("E:/C++ks/qtic/c/resource/image/gojzh.gif");
        ui->kclabel->setMovie(movie);
        movie->start();
        // 调整 QLabel 大小以适应图像大小
        ui->kclabel->setScaledContents(true);
    }
    if(event->key() == Qt::Key_Left)
    {
        QMovie *movie = new QMovie("E:/C++ks/qtic/c/resource/image/left.gif");
        ui->kclabel->setMovie(movie);
        movie->start();
        // 调整 QLabel 大小以适应图像大小
        ui->kclabel->setScaledContents(true);
    }
    if(event->key() == Qt::Key_Right)
    {
        QMovie *movie = new QMovie("E:/C++ks/qtic/c/resource/image/rightjzh.gif");
        ui->kclabel->setMovie(movie);
        movie->start();
        // 调整 QLabel 大小以适应图像大小
        ui->kclabel->setScaledContents(true);
    }
}

void gnkz::allsave()
{
    // 创建CSV文件
        QString csvfileName = QFileDialog::getSaveFileName(nullptr, "Save CSV File", "", "CSV Files (*.csv)");
        //if (!csvfileName.isEmpty())
            //QFile file(csvfileName);
        QFile file(csvfileName);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
            qDebug() << "Failed to open CSV file for writing.";
        }
        // 写入CSV头部信息
        QTextStream out(&file);
        out << "time" << "," << "sensor" << "," << "data" << "\n";

        // 构造SELECT语句
        QString queryStr = "SELECT 时间, 传感器 , 数值 FROM icsensor.z";

        // 执行查询操作
        QSqlQuery query;
        if (query.exec(queryStr) == false) {
            qDebug() << "Failed to execute SQL query:" << query.lastError().text();
        }

        // 逐条记录写入CSV文件
        while (query.next()) {
            out << query.value(0).toString() << "," << query.value(1).toString() << ","<< query.value(2).toString() << "\n";
        }

        // 关闭文件
        file.close();
}

//启动疲劳检测
void gnkz::on_startpljcbutton_clicked()
{
    QString str = "E:/C++ks/qtic/c/build-icclient-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/debug/detect_pljc/detect_pljc.exe";
    o->show();
    opentime->start(8000);
    //pro->startDetached(str);//启动可执行文件
    pro->start(str);//启动可执行文件
    connect(pro, &QProcess::readyReadStandardOutput, this, [=]()
        {
        //获取输出的数据，是一个字节数组
        QByteArray output = pro->readAllStandardOutput();

        //创建对象，并设置接收数据的编码方式
        QTextCodec *codec = QTextCodec::codecForName("GBK");
        //转换成Unicode编码
        QString unicodeStr = codec->toUnicode(output);

        //输出结果
        qDebug() << unicodeStr;

        ui->textEdit->setText(unicodeStr);
        });
}

//停止疲劳检测
void gnkz::on_stoppljcbutton_clicked()
{
    pro->kill();
    jctime->stop();
}

//全部启动
void gnkz::on_allstartbutton_clicked()
{
    QMessageBox::information(this,"提示","全部启动会使已经启动的传感器重启，未保存的数据也将丢失！");
    d.stop_sensor(&d);
    c.stop_sensor(&c);
    e.stop_sensor(&e);
    while (ui->drivertable->rowCount() > 0)
    {
        ui->drivertable->removeRow(0);
    }
    d.doinitialize(&d);
    d.start_sensor(&d);
    while (ui->envtable->rowCount() > 0)
    {
        ui->envtable->removeRow(0);
    }
    e.doinitialize(&e);
    e.start_sensor(&e);
    while (ui->tytable->rowCount() > 0)
    {
        ui->tytable->removeRow(0);
    }
    c.getdata(&c);
    e.getdata(&e);
    d.getdata(&d);
    c.doinitialize(&c);
    c.start_sensor(&c);
}

//全部停止
void gnkz::on_allstopbutton_clicked()
{
    QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this, "提示", "是否保存本次整体监测数据？", QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
       if (reply == QMessageBox::Save) {
           // 保存修改
           allsave();
           d.stop_sensor(&d);
           e.stop_sensor(&e);
           c.stop_sensor(&c);
           while (ui->drivertable->rowCount() > 0)
           {
               ui->drivertable->removeRow(0);
           }
           ui->drivertimelabel->setText("");
           while (ui->envtable->rowCount() > 0)
           {
               ui->envtable->removeRow(0);
           }
           ui->envtimelabel->setText("");
           while (ui->tytable->rowCount() > 0)
           {
               ui->tytable->removeRow(0);
           }
           ui->tytimelabel->setText("");

           ui->zhcjlabel->setText("---");
           ui->zhcjlabel->setAlignment(Qt::AlignCenter);
           ui->zqcjlabel->setText("---");
           ui->zqcjlabel->setAlignment(Qt::AlignCenter);
           ui->ztylabel->setText("---");
           ui->ztylabel->setAlignment(Qt::AlignCenter);
           ui->zwdlabel->setText("---");
           ui->zwdlabel->setAlignment(Qt::AlignCenter);
           ui->zsdlabel->setText("---");
           ui->zsdlabel->setAlignment(Qt::AlignCenter);
           ui->zywlabel->setText("---");
           ui->zywlabel->setAlignment(Qt::AlignCenter);
           ui->zfblabel->setText("---");
           ui->zfblabel->setAlignment(Qt::AlignCenter);
           ui->zjjlabel->setText("---");
           ui->zjjlabel->setAlignment(Qt::AlignCenter);
       } else if (reply == QMessageBox::Discard) {
           // 不保存修改
           d.stop_sensor(&d);
           e.stop_sensor(&e);
           c.stop_sensor(&c);
           while (ui->drivertable->rowCount() > 0)
           {
               ui->drivertable->removeRow(0);
           }
           ui->drivertimelabel->setText("");
           while (ui->envtable->rowCount() > 0)
           {
               ui->envtable->removeRow(0);
           }
           ui->envtimelabel->setText("");
           while (ui->tytable->rowCount() > 0)
           {
               ui->tytable->removeRow(0);
           }
           ui->tytimelabel->setText("");

           ui->zhcjlabel->setText("---");
           ui->zhcjlabel->setAlignment(Qt::AlignCenter);
           ui->zqcjlabel->setText("---");
           ui->zqcjlabel->setAlignment(Qt::AlignCenter);
           ui->ztylabel->setText("---");
           ui->ztylabel->setAlignment(Qt::AlignCenter);
           ui->zwdlabel->setText("---");
           ui->zwdlabel->setAlignment(Qt::AlignCenter);
           ui->zsdlabel->setText("---");
           ui->zsdlabel->setAlignment(Qt::AlignCenter);
           ui->zywlabel->setText("---");
           ui->zywlabel->setAlignment(Qt::AlignCenter);
           ui->zfblabel->setText("---");
           ui->zfblabel->setAlignment(Qt::AlignCenter);
           ui->zjjlabel->setText("---");
           ui->zjjlabel->setAlignment(Qt::AlignCenter);
       } else {
           // 取消关闭事件
       }
}

//全部保存
void gnkz::on_allsavebutton_clicked()
{
    allsave();
}

//开启司机情况检测
void gnkz::on_startdriverbutton_clicked()
{
    while (ui->drivertable->rowCount() > 0)
    {
        ui->drivertable->removeRow(0);
    }
    d.getdata(&d);
    d.doinitialize(&d);
    d.start_sensor(&d);
}

//暂停司机情况检测
void gnkz::on_pausedriverbutton_clicked()
{
   d.pause_sensor(&d);
}

//继续司机情况检测
void gnkz::on_goondriverbutton_clicked()
{
    d.goon_sensor(&d);
}

//停止司机情况检测
void gnkz::on_stopdriverbutton_clicked()
{
    QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this, "提示", "是否保存本次监测数据？", QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
       if (reply == QMessageBox::Save) {
           // 保存修改
           d.dosavedata(&d);
           d.stop_sensor(&d);
           while (ui->drivertable->rowCount() > 0)
           {
               ui->drivertable->removeRow(0);
           }
           ui->drivertimelabel->setText("");
           ui->zfblabel->setText("---");
           ui->zfblabel->setAlignment(Qt::AlignCenter);
           ui->zjjlabel->setText("---");
           ui->zjjlabel->setAlignment(Qt::AlignCenter);
       } else if (reply == QMessageBox::Discard) {
           // 不保存修改
           d.stop_sensor(&d);
           ui->drivertimelabel->setText("");
           ui->zfblabel->setText("---");
           ui->zfblabel->setAlignment(Qt::AlignCenter);
           ui->zjjlabel->setText("---");
           ui->zjjlabel->setAlignment(Qt::AlignCenter);
           while (ui->drivertable->rowCount() > 0)
           {
               ui->drivertable->removeRow(0);
           }
       } else {
           // 取消关闭事件
       }
}

//保存司机情况检测
void gnkz::on_savedriverbutton_clicked()
{
    d.dosavedata(&d);
}

//开始环境检测
void gnkz::on_startenvbutton_clicked()
{
    while (ui->envtable->rowCount() > 0)
    {
        ui->envtable->removeRow(0);
    }
    e.getdata(&e);
    e.doinitialize(&e);
    e.start_sensor(&e);
}

//暂停环境检测
void gnkz::on_pauseenvbutton_clicked()
{
    e.pause_sensor(&e);
}

//继续环境检测
void gnkz::on_goonenvbutton_clicked()
{
    e.goon_sensor(&e);
}

//停止环境检测
void gnkz::on_stopenvbutton_clicked()
{
    QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this, "提示", "是否保存本次监测数据？", QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
       if (reply == QMessageBox::Save) {
           // 保存修改
           e.dosavedata(&e);
           e.stop_sensor(&e);
           while (ui->envtable->rowCount() > 0)
           {
               ui->envtable->removeRow(0);
           }
           ui->envtimelabel->setText("");
           ui->zwdlabel->setText("---");
           ui->zwdlabel->setAlignment(Qt::AlignCenter);
           ui->zsdlabel->setText("---");
           ui->zsdlabel->setAlignment(Qt::AlignCenter);
           ui->zywlabel->setText("---");
           ui->zywlabel->setAlignment(Qt::AlignCenter);
       } else if (reply == QMessageBox::Discard) {
           // 不保存修改
           e.stop_sensor(&e);
           ui->envtimelabel->setText("");
           ui->zwdlabel->setText("---");
           ui->zwdlabel->setAlignment(Qt::AlignCenter);
           ui->zsdlabel->setText("---");
           ui->zsdlabel->setAlignment(Qt::AlignCenter);
           ui->zywlabel->setText("---");
           ui->zywlabel->setAlignment(Qt::AlignCenter);
           while (ui->envtable->rowCount() > 0)
           {
               ui->envtable->removeRow(0);
           }
       } else {
           // 取消关闭事件
       }
}

//保存环境检测
void gnkz::on_saveenvbutton_clicked()
{
    e.dosavedata(&e);
}

//开启车况检测
void gnkz::on_starttybutton_clicked()
{
    while (ui->tytable->rowCount() > 0)
    {
        ui->tytable->removeRow(0);
    }
    c.getdata(&c);
    c.doinitialize(&c);
    c.start_sensor(&c);
}

//暂停车况检测
void gnkz::on_pausetybutton_clicked()
{
    c.pause_sensor(&c);
}


//继续车况检测
void gnkz::on_goontybutton_clicked()
{
    c.goon_sensor(&c);
}

//停止车况检测
void gnkz::on_stoptybutton_clicked()
{
    QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this, "提示", "是否保存本次监测数据？", QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
       if (reply == QMessageBox::Save) {
           // 保存修改
           c.dosavedata(&c);
           c.stop_sensor(&c);
           while (ui->tytable->rowCount() > 0)
           {
               ui->tytable->removeRow(0);
           }
           ui->tytimelabel->setText("");
           ui->zhcjlabel->setText("---");
           ui->zhcjlabel->setAlignment(Qt::AlignCenter);
           ui->zqcjlabel->setText("---");
           ui->zqcjlabel->setAlignment(Qt::AlignCenter);
           ui->ztylabel->setText("---");
           ui->ztylabel->setAlignment(Qt::AlignCenter);
       } else if (reply == QMessageBox::Discard) {
           // 不保存修改
           c.stop_sensor(&c);
           ui->tytimelabel->setText("");
           ui->zhcjlabel->setText("---");
           ui->zhcjlabel->setAlignment(Qt::AlignCenter);
           ui->zqcjlabel->setText("---");
           ui->zqcjlabel->setAlignment(Qt::AlignCenter);
           ui->ztylabel->setText("---");
           ui->ztylabel->setAlignment(Qt::AlignCenter);
           while (ui->tytable->rowCount() > 0)
           {
               ui->tytable->removeRow(0);
           }
       } else {
           // 取消关闭事件
       }
}

//保存车况检测
void gnkz::on_savetybutton_clicked()
{
    c.dosavedata(&c);
}

void gnkz::on_alltransmitbutton_clicked()
{
    if(pdlj == 0)
        QMessageBox::warning(this,"操作提示","请先连接云端中心以获取服务");
    else
    {
        vsc = 1;
        dsc = 1;
        esc = 1;
        csc = 1;
    }
}

void gnkz::on_stoptransmitbutton_clicked()
{
    if(pdlj == 0)
        QMessageBox::warning(this,"操作提示","请先连接云端中心以获取服务");
    else
    {
        vsc = 0;
        dsc = 0;
        esc = 0;
        csc = 0;
    }
}

void gnkz::on_transmitdriverbutton_clicked()
{
    if(pdlj == 0)
        QMessageBox::warning(this,"操作提示","请先连接云端中心以获取服务");
    else
    {
        dsc = 1;
    }
}

void gnkz::on_transmitenvbutton_clicked()
{
    if(pdlj == 0)
        QMessageBox::warning(this,"操作提示","请先连接云端中心以获取服务");
    else
    {
        esc = 1;
    }
}

void gnkz::on_transmittybutton_clicked()
{
    if(pdlj == 0)
        QMessageBox::warning(this,"操作提示","请先连接云端中心以获取服务");
    else
    {
        csc = 1;
    }
}

void gnkz::on_transmitenvbutton_3_clicked()
{
    if(pdlj == 0)
        QMessageBox::warning(this,"操作提示","请先连接云端中心以获取服务");
    else
    {
        dsc = 0;
    }
}

void gnkz::on_transmitenvbutton_2_clicked()
{
    if(pdlj == 0)
        QMessageBox::warning(this,"操作提示","请先连接云端中心以获取服务");
    else
    {
        esc = 0;
    }
}

void gnkz::on_transmittybutton_2_clicked()
{
    if(pdlj == 0)
        QMessageBox::warning(this,"操作提示","请先连接云端中心以获取服务");
    else
    {
        csc = 0;
    }
}


void gnkz::on_pushButton_clicked()
{
    xctimer->start(10);
}

void gnkz::on_pushButton_2_clicked()
{
    xctimer->stop();
    ui->dhlabel->setText("");
}

void gnkz::on_sureButton_clicked()
{
    if(pdlj == 0)
        QMessageBox::warning(this,"操作提示","请先连接云端中心以获取服务");
    else
        dljy = 1;
}

void gnkz::on_sureButton_3_clicked()
{
     QDesktopServices::openUrl(QUrl("https://www.baidu.com/"));
}

void gnkz::on_sureButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl("https://map.baidu.com/@12730968,3551498,13z"));
}

void gnkz::on_sureButton_5_clicked()
{
    QDesktopServices::openUrl(QUrl("https://cdnai.lexiao66.com/#/home?from=lg"));
}

void gnkz::on_sureButton_4_clicked()
{
    QDesktopServices::openUrl(QUrl("https://music.163.com/"));
}

void gnkz::on_verticalSlider_2_valueChanged(int value)
{
    bs = (value/25) + 1;
    qDebug() << bs;
}

void gnkz::on_verticalSlider_valueChanged(int value)
{
    kt = value - 40;
}

void gnkz::on_dial_valueChanged(int value)
{
    av = (value/10) - 4;
    qDebug() << av;
}

void gnkz::on_pushButton_3_clicked()
{
    grabKeyboard();
}

void gnkz::on_pushButton_4_clicked()
{
    releaseKeyboard();
}
