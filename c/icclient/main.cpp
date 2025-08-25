#include "login.h"
#include <QApplication>
#include <QSqlError>
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QTextStream>
#include <QTextCodec>

//连接登录数据库（iclogin）
bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("iclogin");
    db.setUserName("root");
    db.setPassword("05231217");
    bool ok = db.open();
    if (ok)
    {
        qDebug() << "数据库连接成功" ;
    }
    else
    {
        QMessageBox::warning(NULL,"数据库连接失败的错误信息",db.lastError().text());
    }
    return ok;
}



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;
    w.show();
    createConnection();

    return a.exec();
}
