#ifndef SJZL_H
#define SJZL_H

#include <QWidget>
#include "gnkz.h"
#include "icclient.h"
#include <fstream>
#include <sstream>
#include <typeinfo>
#include <cstring>
#include <QtCharts/QChartGlobal>
#include <QtCharts/QChart>
#include <QLineSeries>

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class sjzl;
}

class sjzl : public QWidget
{
    Q_OBJECT

public:
    explicit sjzl(QWidget *parent = nullptr);
    ~sjzl();

private slots:
    void on_choosebutton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_vcxbutton_clicked();

    void on_fbcxbutton_clicked();

    void on_jjcxbutton_clicked();

    void on_wdcxbutton_clicked();

    void on_sdcxbutton_clicked();

    void on_ywcxbutton_clicked();

    void on_tycxbutton_clicked();

    void on_hcjcxbutton_clicked();

    void on_ylcxbutton_clicked();

    void on_choosebutton_2_clicked();

private:
    Ui::sjzl *ui;
    QTimer * sjtime;
};

#endif // SJZL_H
