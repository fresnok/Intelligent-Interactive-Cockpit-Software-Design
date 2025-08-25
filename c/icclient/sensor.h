#ifndef SENSOR_H
#define SENSOR_H

#include <QObject>
#include<QTime>
#include<QTimer>
#include <QSqlError>
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>
#include<QRandomGenerator>
#include<QSqlQuery>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QSqlTableModel>
#include <QFileDialog>
#include "icclient.h"

class sensor : public QObject
{
    Q_OBJECT
public:
    //explicit sensor(QObject *parent = nullptr);
    sensor();
    ~sensor();

    double data;
    double data1;
    double data2;
    int idata;
    QString stime;
    QTimer * stimer;
    int worktime;

public slots:

    virtual void start_sensor(sensor* s) = 0;

    virtual void stop_sensor(sensor* s) = 0;

    virtual void pause_sensor(sensor* s) = 0;

    virtual void goon_sensor(sensor* s) = 0;

    virtual void getdata(sensor* s) = 0;

    virtual void initialize() = 0;

    virtual void doinitialize(sensor* s) = 0;

    virtual void savedata() = 0;

    virtual void dosavedata(sensor* s) = 0;


signals:

};



#endif // SENSOR_H
