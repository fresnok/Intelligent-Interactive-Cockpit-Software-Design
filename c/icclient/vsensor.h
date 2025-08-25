#ifndef VSENSOR_H
#define VSENSOR_H
#include "sensor.h"


class vsensor : public sensor
{
public:
    vsensor();
    ~vsensor();

    QSqlDatabase db_v = QSqlDatabase::addDatabase("QMYSQL","v");

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

#endif // VSENSOR_H


