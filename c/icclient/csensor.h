#ifndef CSENSOR_H
#define CSENSOR_H
#include "sensor.h"


class csensor : public sensor
{
public:
    csensor();
    ~csensor();

    QSqlDatabase db_c = QSqlDatabase::addDatabase("QMYSQL","c");

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

#endif // CSENSOR_H
