#include "opensxt.h"
#include "ui_opensxt.h"

opensxt::opensxt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::opensxt)
{
    ui->setupUi(this);
}

opensxt::~opensxt()
{
    delete ui;
}
