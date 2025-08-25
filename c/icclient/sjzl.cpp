#include "sjzl.h"
#include "ui_sjzl.h"


sjzl::sjzl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sjzl)
{
    ui->setupUi(this);

    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget_2->setCurrentIndex(0);

    ui->lstable->setColumnCount(3);//设置三列
    QStringList lsheader;
    lsheader<<"时间"<<"传感器"<<"数值";
    ui->lstable->setHorizontalHeaderLabels(lsheader);//设置表头内容
    ui->lstable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应
    ui->sstable->setColumnCount(3);//设置三列
    QStringList ssheader;
    ssheader<<"时间"<<"传感器"<<"数值";
    ui->sstable->setHorizontalHeaderLabels(ssheader);//设置表头内容
    ui->sstable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应
    ui->tableWidget->setColumnCount(3);//设置三列
    QStringList header1;
    header1<<"时间"<<"传感器"<<"数值";
    ui->tableWidget->setHorizontalHeaderLabels(header1);//设置表头内容
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应
    ui->tableWidget_2->setColumnCount(3);//设置三列
    QStringList header2;
    header2<<"时间"<<"传感器"<<"数值";
    ui->tableWidget_2->setHorizontalHeaderLabels(header2);//设置表头内容
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应
    ui->tableWidget_3->setColumnCount(3);//设置三列
    QStringList header3;
    header3<<"时间"<<"传感器"<<"数值";
    ui->tableWidget_3->setHorizontalHeaderLabels(header3);//设置表头内容
    ui->tableWidget_3->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应
    ui->tableWidget_4->setColumnCount(3);//设置三列
    QStringList header4;
    header4<<"时间"<<"传感器"<<"数值";
    ui->tableWidget_4->setHorizontalHeaderLabels(header4);//设置表头内容
    ui->tableWidget_4->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应
    ui->tableWidget_5->setColumnCount(3);//设置三列
    QStringList header5;
    header5<<"时间"<<"传感器"<<"数值";
    ui->tableWidget_5->setHorizontalHeaderLabels(header5);//设置表头内容
    ui->tableWidget_5->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应
    ui->tableWidget_6->setColumnCount(3);//设置三列
    QStringList header6;
    header6<<"时间"<<"传感器"<<"数值";
    ui->tableWidget_6->setHorizontalHeaderLabels(header6);//设置表头内容
    ui->tableWidget_6->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应
    ui->tableWidget_7->setColumnCount(3);//设置三列
    QStringList header7;
    header7<<"时间"<<"传感器"<<"数值";
    ui->tableWidget_7->setHorizontalHeaderLabels(header7);//设置表头内容
    ui->tableWidget_7->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应
    ui->tableWidget_8->setColumnCount(3);//设置三列
    QStringList header8;
    header8<<"时间"<<"传感器"<<"数值";
    ui->tableWidget_8->setHorizontalHeaderLabels(header8);//设置表头内容
    ui->tableWidget_8->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应
    ui->tableWidget_9->setColumnCount(3);//设置三列
    QStringList header9;
    header9<<"时间"<<"传感器"<<"数值";
    ui->tableWidget_9->setHorizontalHeaderLabels(header9);//设置表头内容
    ui->tableWidget_9->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表头元素自适应

    sjtime = new QTimer;
    connect(sjtime,&QTimer::timeout,this,[=](){
        //表格
        //环境
        if(e == 1)
        {
        ui->sstable->insertRow(ui->sstable->rowCount());
        int hs = ui->sstable->rowCount()-1;
        QTableWidgetItem *wd0 = new QTableWidgetItem(etime);
        QTableWidgetItem *wd1 = new QTableWidgetItem("温度传感器");
        QTableWidgetItem *wd2 = new QTableWidgetItem(QString::number(wddata));
        ui->sstable->setItem(hs,0,wd0);
        ui->sstable->setItem(hs,1,wd1);
        ui->sstable->setItem(hs,2,wd2);
        ui->sstable->insertRow(ui->sstable->rowCount());
        int hs1 = ui->sstable->rowCount()-1;
        QTableWidgetItem *sd0 = new QTableWidgetItem(etime);
        QTableWidgetItem *sd1 = new QTableWidgetItem("湿度传感器");
        QTableWidgetItem *sd2 = new QTableWidgetItem(QString::number(sddata));
        ui->sstable->setItem(hs1,0,sd0);
        ui->sstable->setItem(hs1,1,sd1);
        ui->sstable->setItem(hs1,2,sd2);
        ui->sstable->insertRow(ui->sstable->rowCount());
        int hs2 = ui->sstable->rowCount()-1;
        QTableWidgetItem *yw0 = new QTableWidgetItem(etime);
        QTableWidgetItem *yw1 = new QTableWidgetItem("烟雾浓度传感器");
        QTableWidgetItem *yw2 = new QTableWidgetItem(QString::number(ywdata));
        ui->sstable->setItem(hs2,0,yw0);
        ui->sstable->setItem(hs2,1,yw1);
        ui->sstable->setItem(hs2,2,yw2);
        }

        //司机
        if(d == 1)
        {
            ui->sstable->insertRow(ui->sstable->rowCount());
            int hs = ui->sstable->rowCount()-1;
            QTableWidgetItem *fb0 = new QTableWidgetItem(dtime);
            QTableWidgetItem *fb1 = new QTableWidgetItem("分贝传感器");
            QTableWidgetItem *fb2 = new QTableWidgetItem(QString::number(fbdata));
            ui->sstable->setItem(hs,0,fb0);
            ui->sstable->setItem(hs,1,fb1);
            ui->sstable->setItem(hs,2,fb2);
            ui->sstable->insertRow(ui->sstable->rowCount());
            int hs1 = ui->sstable->rowCount()-1;
            QTableWidgetItem *jj0 = new QTableWidgetItem(dtime);
            QTableWidgetItem *jj1 = new QTableWidgetItem("酒精浓度传感器");
            QTableWidgetItem *jj2 = new QTableWidgetItem(QString::number(jjdata));
            ui->sstable->setItem(hs1,0,jj0);
            ui->sstable->setItem(hs1,1,jj1);
            ui->sstable->setItem(hs1,2,jj2);
        }

        //车况
        if(c == 1)
        {
            ui->sstable->insertRow(ui->sstable->rowCount());
            int hs = ui->sstable->rowCount()-1;
            QTableWidgetItem *d0 = new QTableWidgetItem(cctime);
            QTableWidgetItem *d1 = new QTableWidgetItem("毫米波雷达");
            QTableWidgetItem *d2 = new QTableWidgetItem(QString::number(ddata));
            ui->sstable->setItem(hs,0,d0);
            ui->sstable->setItem(hs,1,d1);
            ui->sstable->setItem(hs,2,d2);
            ui->sstable->insertRow(ui->sstable->rowCount());
            int hs1 = ui->sstable->rowCount()-1;
            QTableWidgetItem *yl0 = new QTableWidgetItem(cctime);
            QTableWidgetItem *yl1 = new QTableWidgetItem("油量传感器");
            QTableWidgetItem *yl2 = new QTableWidgetItem(QString::number(yldata));
            ui->sstable->setItem(hs1,0,yl0);
            ui->sstable->setItem(hs1,1,yl1);
            ui->sstable->setItem(hs1,2,yl2);
            ui->sstable->insertRow(ui->sstable->rowCount());
            int hs2 = ui->sstable->rowCount()-1;
            QTableWidgetItem *ty0 = new QTableWidgetItem(cctime);
            QTableWidgetItem *ty1 = new QTableWidgetItem("胎压传感器");
            QTableWidgetItem *ty2 = new QTableWidgetItem(QString::number(tydata));
            ui->sstable->setItem(hs2,0,ty0);
            ui->sstable->setItem(hs2,1,ty1);
            ui->sstable->setItem(hs2,2,ty2);
        }

        //速度
        ui->sstable->insertRow(ui->sstable->rowCount());
        int hs = ui->sstable->rowCount()-1;
        QTableWidgetItem *v0 = new QTableWidgetItem(vtime);
        QTableWidgetItem *v1 = new QTableWidgetItem("速度传感器");
        QTableWidgetItem *v2 = new QTableWidgetItem(QString::number(vdata));
        ui->sstable->setItem(hs,0,v0);
        ui->sstable->setItem(hs,1,v1);
        ui->sstable->setItem(hs,2,v2);

        ui->sstable->scrollToBottom();  //让滚动条滚动到最底部
    });

}

sjzl::~sjzl()
{
    delete ui;
}

void sjzl::on_choosebutton_clicked()
{
    fn = QFileDialog::getOpenFileName(0, tr("导入文件"), tr("/root/Projects/product/bin/config"),
                                      tr("file(*.csv);;Allfile(*.*)"));
    ui->lsline->setText(fn);
    if(!fn.isEmpty())
    {
        QFile file;
        file.setFileName(fn);
        //打开文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox msg;
            msg.setText("打开文件失败!");
            msg.exec();
        }
        else
        {
            if(!file.size())
            {
                QMessageBox::warning(0,tr("警告"),tr("文件大小为空!"),QMessageBox::Ok);
            }
            else
            {
                QTextStream in(&file);
                QString line;
                QStringList fields;
                int row = 0;
                while (!in.atEnd())
                {
                line = in.readLine();
                fields = line.split(',');//按照","分割字符
                for (int column = 0; column < fields.size(); column++)
                {
                ui->lstable->setRowCount(row);//设置行数
                ui->lstable->setItem(row - 1, column, new QTableWidgetItem(fields[column]));//插入数据
                }
                row++;
                }
            }
        }
    }
    else
    {
        QMessageBox::warning(0,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void sjzl::on_pushButton_clicked()
{
    while (ui->sstable->rowCount() > 0)
    {
        ui->sstable->removeRow(0);
    }
}

void sjzl::on_pushButton_2_clicked()
{
    sjtime->start(1000);
}

void sjzl::on_pushButton_3_clicked()
{
    sjtime->stop();
}

void sjzl::on_vcxbutton_clicked()
{
    int pd = 0;
    QString time = ui->vline->text();
    QString name = "速度传感器";
    if(!fn.isEmpty())
    {
        QFile file;
        file.setFileName(fn);
        //打开文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox msg;
            msg.setText("打开文件失败!");
            msg.exec();
        }
        else
        {
            if(!file.size())
            {
                QMessageBox::warning(0,tr("警告"),tr("文件大小为空!"),QMessageBox::Ok);
            }
            else
            {
                QTextStream in(&file);
                QString line;
                QStringList fields;
                int row = 1;
                while (!in.atEnd())
                {
                line = in.readLine();
                fields = line.split(',');//按照","分割字符
                if(fields[0] == time && fields[1] == name)
                {
                    for (int column = 0; column < fields.size(); column++)
                    {
                    ui->tableWidget->setRowCount(row);//设置行数
                    ui->tableWidget->setItem(row - 1, column, new QTableWidgetItem(fields[column]));//插入数据
                    }
                    row++;
                    pd++;
                }
                }
                if(pd == 0)
                {
                    QMessageBox::warning(0,tr("警告"),tr("未查询到符合条件的数据!"),QMessageBox::Ok);
                }
            }
        }
    }
    else
    {
        QMessageBox::warning(0,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void sjzl::on_fbcxbutton_clicked()
{
    int pd = 0;
    QString time = ui->fbline->text();
    QString name = "分贝传感器";
    if(!fn.isEmpty())
    {
        QFile file;
        file.setFileName(fn);
        //打开文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox msg;
            msg.setText("打开文件失败!");
            msg.exec();
        }
        else
        {
            if(!file.size())
            {
                QMessageBox::warning(0,tr("警告"),tr("文件大小为空!"),QMessageBox::Ok);
            }
            else
            {
                QTextStream in(&file);
                QString line;
                QStringList fields;
                int row = 1;
                while (!in.atEnd())
                {
                line = in.readLine();
                fields = line.split(',');//按照","分割字符
                if(fields[0] == time && fields[1] == name)
                {
                    for (int column = 0; column < fields.size(); column++)
                    {
                    ui->tableWidget_2->setRowCount(row);//设置行数
                    ui->tableWidget_2->setItem(row - 1, column, new QTableWidgetItem(fields[column]));//插入数据
                    }
                    row++;
                    pd++;
                }
                }
                if(pd == 0)
                {
                    QMessageBox::warning(0,tr("警告"),tr("未查询到符合条件的数据!"),QMessageBox::Ok);
                }
            }
        }
    }
    else
    {
        QMessageBox::warning(0,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void sjzl::on_jjcxbutton_clicked()
{
    int pd = 0;
    QString time = ui->jjline->text();
    QString name = "酒精浓度传感器";
    if(!fn.isEmpty())
    {
        QFile file;
        file.setFileName(fn);
        //打开文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox msg;
            msg.setText("打开文件失败!");
            msg.exec();
        }
        else
        {
            if(!file.size())
            {
                QMessageBox::warning(0,tr("警告"),tr("文件大小为空!"),QMessageBox::Ok);
            }
            else
            {
                QTextStream in(&file);
                QString line;
                QStringList fields;
                int row = 1;
                while (!in.atEnd())
                {
                line = in.readLine();
                fields = line.split(',');//按照","分割字符
                if(fields[0] == time && fields[1] == name)
                {
                    for (int column = 0; column < fields.size(); column++)
                    {
                    ui->tableWidget_3->setRowCount(row);//设置行数
                    ui->tableWidget_3->setItem(row - 1, column, new QTableWidgetItem(fields[column]));//插入数据
                    }
                    row++;
                    pd++;
                }
                }
                if(pd == 0)
                {
                    QMessageBox::warning(0,tr("警告"),tr("未查询到符合条件的数据!"),QMessageBox::Ok);
                }
            }
        }
    }
    else
    {
        QMessageBox::warning(0,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void sjzl::on_wdcxbutton_clicked()
{
    int pd = 0;
    QString time = ui->wdline->text();
    QString name = "温度传感器";
    if(!fn.isEmpty())
    {
        QFile file;
        file.setFileName(fn);
        //打开文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox msg;
            msg.setText("打开文件失败!");
            msg.exec();
        }
        else
        {
            if(!file.size())
            {
                QMessageBox::warning(0,tr("警告"),tr("文件大小为空!"),QMessageBox::Ok);
            }
            else
            {
                QTextStream in(&file);
                QString line;
                QStringList fields;
                int row = 1;
                while (!in.atEnd())
                {
                line = in.readLine();
                fields = line.split(',');//按照","分割字符
                if(fields[0] == time && fields[1] == name)
                {
                    for (int column = 0; column < fields.size(); column++)
                    {
                    ui->tableWidget_4->setRowCount(row);//设置行数
                    ui->tableWidget_4->setItem(row - 1, column, new QTableWidgetItem(fields[column]));//插入数据
                    }
                    row++;
                    pd++;
                }
                }
                if(pd == 0)
                {
                    QMessageBox::warning(0,tr("警告"),tr("未查询到符合条件的数据!"),QMessageBox::Ok);
                }
            }
        }
    }
    else
    {
        QMessageBox::warning(0,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void sjzl::on_sdcxbutton_clicked()
{
    int pd = 0;
    QString time = ui->sdline->text();
    QString name = "湿度传感器";
    if(!fn.isEmpty())
    {
        QFile file;
        file.setFileName(fn);
        //打开文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox msg;
            msg.setText("打开文件失败!");
            msg.exec();
        }
        else
        {
            if(!file.size())
            {
                QMessageBox::warning(0,tr("警告"),tr("文件大小为空!"),QMessageBox::Ok);
            }
            else
            {
                QTextStream in(&file);
                QString line;
                QStringList fields;
                int row = 1;
                while (!in.atEnd())
                {
                line = in.readLine();
                fields = line.split(',');//按照","分割字符
                if(fields[0] == time && fields[1] == name)
                {
                    for (int column = 0; column < fields.size(); column++)
                    {
                    ui->tableWidget_5->setRowCount(row);//设置行数
                    ui->tableWidget_5->setItem(row - 1, column, new QTableWidgetItem(fields[column]));//插入数据
                    }
                    row++;
                    pd++;
                }
                }
                if(pd == 0)
                {
                    QMessageBox::warning(0,tr("警告"),tr("未查询到符合条件的数据!"),QMessageBox::Ok);
                }
            }
        }
    }
    else
    {
        QMessageBox::warning(0,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void sjzl::on_ywcxbutton_clicked()
{
    int pd = 0;
    QString time = ui->ywline->text();
    QString name = "烟雾浓度传感器";
    if(!fn.isEmpty())
    {
        QFile file;
        file.setFileName(fn);
        //打开文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox msg;
            msg.setText("打开文件失败!");
            msg.exec();
        }
        else
        {
            if(!file.size())
            {
                QMessageBox::warning(0,tr("警告"),tr("文件大小为空!"),QMessageBox::Ok);
            }
            else
            {
                QTextStream in(&file);
                QString line;
                QStringList fields;
                int row = 1;
                while (!in.atEnd())
                {
                line = in.readLine();
                fields = line.split(',');//按照","分割字符
                if(fields[0] == time && fields[1] == name)
                {
                    for (int column = 0; column < fields.size(); column++)
                    {
                    ui->tableWidget_6->setRowCount(row);//设置行数
                    ui->tableWidget_6->setItem(row - 1, column, new QTableWidgetItem(fields[column]));//插入数据
                    }
                    row++;
                    pd++;
                }
                }
                if(pd == 0)
                {
                    QMessageBox::warning(0,tr("警告"),tr("未查询到符合条件的数据!"),QMessageBox::Ok);
                }
            }
        }
    }
    else
    {
        QMessageBox::warning(0,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void sjzl::on_tycxbutton_clicked()
{
    int pd = 0;
    QString time = ui->tyline->text();
    QString name = "胎压传感器";
    if(!fn.isEmpty())
    {
        QFile file;
        file.setFileName(fn);
        //打开文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox msg;
            msg.setText("打开文件失败!");
            msg.exec();
        }
        else
        {
            if(!file.size())
            {
                QMessageBox::warning(0,tr("警告"),tr("文件大小为空!"),QMessageBox::Ok);
            }
            else
            {
                QTextStream in(&file);
                QString line;
                QStringList fields;
                int row = 1;
                while (!in.atEnd())
                {
                line = in.readLine();
                fields = line.split(',');//按照","分割字符
                if(fields[0] == time && fields[1] == name)
                {
                    for (int column = 0; column < fields.size(); column++)
                    {
                    ui->tableWidget_7->setRowCount(row);//设置行数
                    ui->tableWidget_7->setItem(row - 1, column, new QTableWidgetItem(fields[column]));//插入数据
                    }
                    row++;
                    pd++;
                }
                }
                if(pd == 0)
                {
                    QMessageBox::warning(0,tr("警告"),tr("未查询到符合条件的数据!"),QMessageBox::Ok);
                }
            }
        }
    }
    else
    {
        QMessageBox::warning(0,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void sjzl::on_hcjcxbutton_clicked()
{
    int pd = 0;
    QString time = ui->dline->text();
    QString name = "毫米波雷达";
    if(!fn.isEmpty())
    {
        QFile file;
        file.setFileName(fn);
        //打开文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox msg;
            msg.setText("打开文件失败!");
            msg.exec();
        }
        else
        {
            if(!file.size())
            {
                QMessageBox::warning(0,tr("警告"),tr("文件大小为空!"),QMessageBox::Ok);
            }
            else
            {
                QTextStream in(&file);
                QString line;
                QStringList fields;
                int row = 1;
                while (!in.atEnd())
                {
                line = in.readLine();
                fields = line.split(',');//按照","分割字符
                if(fields[0] == time && fields[1] == name)
                {
                    for (int column = 0; column < fields.size(); column++)
                    {
                    ui->tableWidget_8->setRowCount(row);//设置行数
                    ui->tableWidget_8->setItem(row - 1, column, new QTableWidgetItem(fields[column]));//插入数据
                    }
                    row++;
                    pd++;
                }
                }
                if(pd == 0)
                {
                    QMessageBox::warning(0,tr("警告"),tr("未查询到符合条件的数据!"),QMessageBox::Ok);
                }
            }
        }
    }
    else
    {
        QMessageBox::warning(0,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void sjzl::on_ylcxbutton_clicked()
{
    int pd = 0;
    QString time = ui->ylline->text();
    QString name = "油量传感器";
    if(!fn.isEmpty())
    {
        QFile file;
        file.setFileName(fn);
        //打开文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox msg;
            msg.setText("打开文件失败!");
            msg.exec();
        }
        else
        {
            if(!file.size())
            {
                QMessageBox::warning(0,tr("警告"),tr("文件大小为空!"),QMessageBox::Ok);
            }
            else
            {
                QTextStream in(&file);
                QString line;
                QStringList fields;
                int row = 1;
                while (!in.atEnd())
                {
                line = in.readLine();
                fields = line.split(',');//按照","分割字符
                if(fields[0] == time && fields[1] == name)
                {
                    for (int column = 0; column < fields.size(); column++)
                    {
                    ui->tableWidget_9->setRowCount(row);//设置行数
                    ui->tableWidget_9->setItem(row - 1, column, new QTableWidgetItem(fields[column]));//插入数据
                    }
                    row++;
                    pd++;
                }
                }
                if(pd == 0)
                {
                    QMessageBox::warning(0,tr("警告"),tr("未查询到符合条件的数据!"),QMessageBox::Ok);
                }
            }
        }
    }
    else
    {
        QMessageBox::warning(0,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }
}

void sjzl::on_choosebutton_2_clicked()
{
    QLineSeries *series = new QLineSeries();
    QString name = ui->sensorline->text();
    QString fn1 = QFileDialog::getOpenFileName(0, tr("导入文件"), tr("/root/Projects/product/bin/config"),tr("file(*.csv);;Allfile(*.*)"));
    ui->ksline->setText(fn1);
    if(!fn1.isEmpty())
    {
        QFile file;
        file.setFileName(fn1);
        //打开文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox msg;
            msg.setText("打开文件失败!");
            msg.exec();
        }
        else
        {
            if(!file.size())
            {
                QMessageBox::warning(0,tr("警告"),tr("文件大小为空!"),QMessageBox::Ok);
            }
            else
            {
                QTextStream in(&file);
                QString line;
                QStringList fields;
                double xx = 0;
                while (!in.atEnd())
                {
                line = in.readLine();
                fields = line.split(',');//按照","分割字符
                if(fields[1] == name)
                {
                qreal x = xx;
                qreal y = fields[2].toDouble();
                *series << QPointF(x, y);
                xx++;
                }
                }
                QChart *chart = new QChart();
                chart->legend()->hide();
                chart->addSeries(series);
                chart->createDefaultAxes();
                chart->setTitle(name);

                ui->chartView->setChart(chart);
                ui->chartView->setRenderHint(QPainter::Antialiasing);
            }
        }
    }
    else
    {
        QMessageBox::warning(0,tr("警告"),tr("文件名未指定!"),QMessageBox::Ok);
    }

}
