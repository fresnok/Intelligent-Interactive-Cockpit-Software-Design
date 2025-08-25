#ifndef TSENSOR_H
#define TSENSOR_H
#include "sensor.h"

class esensor : public sensor
{
public:
    esensor();
    ~esensor();

    QSqlDatabase db_e = QSqlDatabase::addDatabase("QMYSQL","e");

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

#endif // TSENSOR_H
