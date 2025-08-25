#include "csh.h"
#include "ui_csh.h"

csh::csh(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::csh)
{
    ui->setupUi(this);
}

csh::~csh()
{
    delete ui;
}
