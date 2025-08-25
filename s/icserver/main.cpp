#include "sjframe.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sjframe w;
    w.show();
    return a.exec();
}
