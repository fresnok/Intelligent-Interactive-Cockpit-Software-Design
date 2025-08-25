#include "dsensor.h"

dsensor::dsensor()
{
    stimer = new QTimer;
}

dsensor::~dsensor(){}

void dsensor::start_sensor(sensor* s)
{
    d = 1;
    s->stimer->start(1000);
    s->stime = QDateTime::currentDateTime().toString("hh:mm:ss yyyy-MM-dd");
    dtime = s->stime;
    s->worktime = 1;
    connect(s->stimer, &QTimer::timeout, this, [=]()
        {
        s->stime = QDateTime::currentDateTime().toString("hh:mm:ss yyyy-MM-dd");
        dtime = s->stime;
        s->worktime++;
        });
}

void dsensor::stop_sensor(sensor* s)
{
    d = 0;
    s->stimer->stop();
    s->worktime = 0;
}

void dsensor::pause_sensor(sensor* s)
{
    d = 0;
    s->stimer->stop();
}

void dsensor::goon_sensor(sensor* s)
{
    d = 1;
    s->stimer->start(1000);
    connect(s->stimer, &QTimer::timeout, this, [=]()
        {
        s->stime = QDateTime::currentDateTime().toString("hh:mm:ss yyyy-MM-dd");
        dtime = s->stime;
        s->worktime++;
        });
}

void dsensor::getdata(sensor* s)
{
    s->data = QRandomGenerator::global()->bounded(300,700);
    s->data = s->data/10.0;
    fbdata = s->data;
    QSqlQuery query;
    QString qs = QString("insert into icsensor.d(时间,传感器,数值) values('%1','%2','%3')").arg(s->stime).arg("分贝传感器").arg(s->data);
    query.exec(qs);
    QString qs0 = QString("insert into icsensor.z(时间,传感器,数值) values('%1','%2','%3')").arg(s->stime).arg("分贝传感器").arg(s->data);
    query.exec(qs0);

    s->data1 = QRandomGenerator::global()->bounded(0,20);
    s->data1 = s->data1/10.0;
    jjdata = s->data1;
    QString qs1 = QString("insert into icsensor.d(时间,传感器,数值) values('%1','%2','%3')").arg(s->stime).arg("酒精浓度传感器").arg(s->data1);
    query.exec(qs1);
    QString qs10 = QString("insert into icsensor.z(时间,传感器,数值) values('%1','%2','%3')").arg(s->stime).arg("酒精浓度传感器").arg(s->data1);
    query.exec(qs10);
}

void dsensor::savedata()
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
        QString queryStr = "SELECT 时间, 传感器 , 数值 FROM icsensor.d";

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

void dsensor::dosavedata(sensor* s)
{
    s->savedata();
}

void dsensor::initialize()
{

    db_d.setHostName("localhost");
    db_d.setPort(3306);
    db_d.setDatabaseName("icsensor");
    db_d.setUserName("root");
    db_d.setPassword("05231217");
    bool ok = db_d.open();
    if (ok)
    {
        qDebug() << "数据库连接成功" ;
    }
    else
    {
        QMessageBox::warning(NULL,"数据库连接失败的错误信息",db_d.lastError().text());
    }
    //每次初始化建立新的数据表，保证每次只保存本次的测量数据
    db_d.exec("DROP TABLE IF EXISTS d");
    db_d.exec("create table d (`时间` varchar(255) , `传感器` varchar(255), `数值` double not null)");

}

void dsensor::doinitialize(sensor* s)
{
    s->initialize();
}
