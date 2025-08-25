#ifndef YDFW_H
#define YDFW_H

#include <QWidget>
#include "icclient.h"
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include<QTime>
#include<QTimer>
#include<QRandomGenerator>

namespace Ui {
class ydfw;
}

class ydfw : public QWidget
{
    Q_OBJECT

public:
    explicit ydfw(QWidget *parent = nullptr);
    ~ydfw();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::ydfw *ui;
    QTcpSocket *socket;
    QTimer *sdtimer;
    QTimer *dktimer;
};

#endif // YDFW_H
