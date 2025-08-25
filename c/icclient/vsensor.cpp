#include "vsensor.h"

vsensor::vsensor()
{
    stimer = new QTimer;
}

vsensor::~vsensor(){}

void vsensor::start_sensor(sensor* s)
{
    s->stimer->start(1000);
    s->stime = QDateTime::currentDateTime().toString("hh:mm:ss yyyy-MM-dd");
    vtime = s->stime;
    s->worktime = 0;
    connect(s->stimer, &QTimer::timeout, this, [=]()
        {
        s->stime = QDateTime::currentDateTime().toString("hh:mm:ss yyyy-MM-dd");
        vtime = s->stime;
        s->worktime++;
        });
}

void vsensor::stop_sensor(sensor* s)
{
    s->stimer->stop();
    s->worktime = 0;
}

void vsensor::pause_sensor(sensor* s)
{
    s->stimer->stop();
}

void vsensor::goon_sensor(sensor* s)
{
    s->stimer->start(1000);
    connect(s->stimer, &QTimer::timeout, this, [=]()
        {
        s->stime = QDateTime::currentDateTime().toString("hh:mm:ss yyyy-MM-dd");
        vtime = s->stime;
        s->worktime++;
        });
}

void vsensor::getdata(sensor* s)
{
    //s->idata = QRandomGenerator::global()->bounded(100, 120);
    if(s->idata >= 0)
    {
        if(s->idata > 200)
        {
            s->idata = 200;
        }
        else
        {
            s->idata += bs*av;
        }
    }
    else
    s->idata = 0;
    vdata = s->idata;
    QSqlQuery query;
    QString qs = QString("insert into icsensor.v(时间,传感器,数值) values('%1','%2','%3')")
            .arg(s->stime).arg("速度传感器").arg(s->idata);
    query.exec(qs);
    QString qs0 = QString("insert into icsensor.z(时间,传感器,数值) values('%1','%2','%3')")
            .arg(s->stime).arg("速度传感器").arg(s->idata);
    query.exec(qs0);
}

void vsensor::savedata()
{
    // 创建CSV文件
        QString csvFileName = "v.csv";
        QFile file(csvFileName);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
            qDebug() << "Failed to open CSV file for writing.";
        }

        // 写入CSV头部信息
        QTextStream out(&file);
        out << "time" << "," << "sensor" << "," << "data" << "\n";

        // 构造SELECT语句
        QString queryStr = "SELECT 时间, 传感器 , 数值 FROM icsensor.v";

        // 执行查询操作
        QSqlQuery query;
        if (query.exec(queryStr) == false) {
            qDebug() << "Failed to execute SQL query:" << query.lastError().text();
        }

        // 逐条记录写入CSV文件
        while (query.next()) {
            out << query.value(0).toString() << "," << query.value(1).toString()
                << ","<< query.value(2).toString() << "\n";
        }

        // 关闭文件
        file.close();
}

void vsensor::dosavedata(sensor* s)
{
    s->savedata();
}

void vsensor::initialize()
{
    db_v.setHostName("localhost");
    db_v.setPort(3306);
    db_v.setDatabaseName("icsensor");
    db_v.setUserName("root");
    db_v.setPassword("05231217");
    bool ok = db_v.open();
    if (ok)
    {
        qDebug() << "数据库连接成功" ;
    }
    else
    {
        QMessageBox::warning(NULL,"数据库连接失败的错误信息",db_v.lastError().text());
    }
    //每次初始化建立新的数据表，保证每次只保存本次的测量数据
    db_v.exec("DROP TABLE IF EXISTS v");
    db_v.exec("create table v (`时间` varchar(255) , `传感器` varchar(255), `数值` int not null)");
}

void vsensor::doinitialize(sensor* s)
{
    s->initialize();
}

