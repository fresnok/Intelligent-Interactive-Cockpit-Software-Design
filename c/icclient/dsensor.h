#ifndef DSENSOR_H
#define DSENSOR_H
#include "sensor.h"


class dsensor : public sensor
{
public:
public:
    dsensor();
    ~dsensor();

    QSqlDatabase db_d = QSqlDatabase::addDatabase("QMYSQL","d");

public slots:

    void start_sensor(sensor* s);

    void stop_sensor(sensor* s);

    void pause_sensor(sensor* s);

    void goon_sensor(sensor* s);

    void getdata(sensor* s);

    void initialize();

    void doinitialize(sensor* s);

    void savedata();

    void dosavedata(sensor* s);
};

#endif // DSENSOR_H
