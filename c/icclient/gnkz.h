#ifndef GNKZ_H
#define GNKZ_H

#include <QWidget>
#include <QMessageBox>
#include <qprocess.h>
#include "sensor.h"
#include "csh.h"
#include "opensxt.h"
#include "vsensor.h"
#include "icclient.h"
#include "esensor.h"
#include <QString>
#include "dsensor.h"
#include "csensor.h"
#include <QDesktopServices>
#include <QTextCodec>
#include "serialport.h"
#include "QMovie"
#include <QKeyEvent>

namespace Ui {
class gnkz;
}

class gnkz : public QWidget
{
    Q_OBJECT

public:
    explicit gnkz(QWidget *parent = nullptr);
    ~gnkz();

    QSqlDatabase db_g = QSqlDatabase::addDatabase("QMYSQL","g");

private slots:
    void keyPressEvent(QKeyEvent *event);

    void on_startpljcbutton_clicked();

    void on_stopdriverbutton_clicked();

    void on_startdriverbutton_clicked();

    void on_stoppljcbutton_clicked();

    void on_allsavebutton_clicked();

    void on_startenvbutton_clicked();

    void on_saveenvbutton_clicked();

    void on_stopenvbutton_clicked();

    void on_pauseenvbutton_clicked();

    void on_goonenvbutton_clicked();

    void on_pausedriverbutton_clicked();

    void on_goondriverbutton_clicked();

    void on_savedriverbutton_clicked();

    void on_starttybutton_clicked();

    void on_pausetybutton_clicked();

    void on_goontybutton_clicked();

    void on_stoptybutton_clicked();

    void on_savetybutton_clicked();

    void on_allstartbutton_clicked();

    void on_allstopbutton_clicked();

    void allsave();

    void on_alltransmitbutton_clicked();

    void on_stoptransmitbutton_clicked();

    void on_transmitdriverbutton_clicked();

    void on_transmitenvbutton_clicked();

    void on_transmittybutton_clicked();

    void on_transmitenvbutton_3_clicked();

    void on_transmitenvbutton_2_clicked();

    void on_transmittybutton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_sureButton_clicked();

    void on_sureButton_3_clicked();

    void on_sureButton_2_clicked();

    void on_sureButton_5_clicked();

    void on_sureButton_4_clicked();

    void on_verticalSlider_2_valueChanged(int value);

    void on_verticalSlider_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::gnkz *ui; 
    QProcess *pro = new QProcess();
    QTimer * opentime;
    QTimer * jctime;
    opensxt * o = new opensxt();
    sensor * v = new vsensor();
    esensor e;
    dsensor d;
    csensor c;
    QTimer * xctimer;
    QTimer * jytimer;
    QSerialPort * sp;

signals:
};

#endif // GNKZ_H
