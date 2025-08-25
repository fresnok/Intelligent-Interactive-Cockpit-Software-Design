#include "esensor.h"

esensor::esensor()
{
    stimer = new QTimer;
}

esensor::~esensor(){}

void esensor::start_sensor(sensor* s)
{
    e = 1;
    s->stimer->start(1000);
    s->stime = QDateTime::currentDateTime().toString("hh:mm:ss yyyy-MM-dd");
    etime = s->stime;
    s->worktime = 1;
    connect(s->stimer, &QTimer::timeout, this, [=]()
        {
        s->stime = QDateTime::currentDateTime().toString("hh:mm:ss yyyy-MM-dd");
        etime = s->stime;
        s->worktime++;
        });
}

void esensor::stop_sensor(sensor* s)
{
    e = 0;
    s->stimer->stop();
    s->worktime = 0;
}

void esensor::pause_sensor(sensor* s)
{
    e = 0;
    s->stimer->stop();
}

void esensor::goon_sensor(sensor* s)
{
    e = 1;
    s->stimer->start(1000);
    connect(s->stimer, &QTimer::timeout, this, [=]()
        {
        s->stime = QDateTime::currentDateTime().toString("hh:mm:ss yyyy-MM-dd");
        etime = s->stime;
        s->worktime++;
        });
}

void esensor::getdata(sensor* s)
{
    s->data = QRandomGenerator::global()->bounded(0,10);
    s->data += 260 + kt;
    s->data = s->data/10.0;
    wddata = s->data;
    QSqlQuery query;
    QString qs = QString("insert into icsensor.e(时间,传感器,数值) values('%1','%2','%3')").arg(s->stime).arg("温度传感器").arg(s->data);
    query.exec(qs);
    QString qs0 = QString("insert into icsensor.z(时间,传感器,数值) values('%1','%2','%3')").arg(s->stime).arg("温度传感器").arg(s->data);
    query.exec(qs0);

    s->data1 = QRandomGenerator::global()->bounded(400,600);
    s->data1 = s->data1/10.0;
    sddata = s->data1;
    QString qs1 = QString("insert into icsensor.e(时间,传感器,数值) values('%1','%2','%3')").arg(s->stime).arg("湿度传感器").arg(s->data1);
    query.exec(qs1);
    QString qs10 = QString("insert into icsensor.z(时间,传感器,数值) values('%1','%2','%3')").arg(s->stime).arg("湿度传感器").arg(s->data1);
    query.exec(qs10);

    s->data2 = QRandomGenerator::global()->bounded(100,1200);
    s->data2 = s->data2/10.0;
    ywdata = s->data2;
    QString qs2 = QString("insert into icsensor.e(时间,传感器,数值) values('%1','%2','%3')").arg(s->stime).arg("烟雾浓度传感器").arg(s->data2);
    query.exec(qs2);
    QString qs20 = QString("insert into icsensor.z(时间,传感器,数值) values('%1','%2','%3')").arg(s->stime).arg("烟雾浓度传感器").arg(s->data2);
    query.exec(qs20);
}

void esensor::savedata()
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
        QString queryStr = "SELECT 时间, 传感器 , 数值 FROM icsensor.e";

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

void esensor::dosavedata(sensor* s)
{
    s->savedata();
}

void esensor::initialize()
{

    db_e.setHostName("localhost");
    db_e.setPort(3306);
    db_e.setDatabaseName("icsensor");
    db_e.setUserName("root");
    db_e.setPassword("05231217");
    bool ok = db_e.open();
    if (ok)
    {
        qDebug() << "数据库连接成功" ;
    }
    else
    {
        QMessageBox::warning(NULL,"数据库连接失败的错误信息",db_e.lastError().text());
    }
    //每次初始化建立新的数据表，保证每次只保存本次的测量数据
    db_e.exec("DROP TABLE IF EXISTS e");
    db_e.exec("create table e (`时间` varchar(255) , `传感器` varchar(255), `数值` double not null)");

}

void esensor::doinitialize(sensor* s)
{
    s->initialize();
}
