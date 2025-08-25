#ifndef JFRAME_H
#define JFRAME_H

#include <QWidget>
#include "icclient.h"
#include<QTime>
#include<QTimer>
#include "sensor.h"
#include "vsensor.h"
#include "serialport.h"

namespace Ui {
class jframe;
}

class jframe : public QWidget
{
    Q_OBJECT

public:
    explicit jframe(QWidget *parent = nullptr);
    ~jframe();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void update_ztime();

private:
    Ui::jframe *ui;
    QTimer * ztime;
    QTimer * jytimer;
    QSerialPort * sp;
};

#endif // JFRAME_H
