#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QMessageBox>
#include <qprocess.h>
#include "icclient.h"
#include "jframe.h"
#include<QTimer>
#include<QSqlError>
#include<QSqlQuery>
#include "opensxt.h"

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QWidget
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_rlsbbutton_clicked();

    void on_singupbutton_clicked();

    void on_sureButton_clicked();

    void on_loginbutton_clicked();

    void dl();

private:
    Ui::login *ui;
    QTimer * rltime;
    QTimer * opentime;
    opensxt * o = new opensxt();
    QProcess *pro = new QProcess();
};
#endif // LOGIN_H


