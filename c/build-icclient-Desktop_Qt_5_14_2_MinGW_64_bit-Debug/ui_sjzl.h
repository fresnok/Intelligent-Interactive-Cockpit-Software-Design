/********************************************************************************
** Form generated from reading UI file 'sjzl.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SJZL_H
#define UI_SJZL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qtcharts//qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_sjzl
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *sstable;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QTableWidget *lstable;
    QGroupBox *groupBox;
    QPushButton *choosebutton;
    QLineEdit *lsline;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label_2;
    QLineEdit *vline;
    QPushButton *vcxbutton;
    QTableWidget *tableWidget;
    QWidget *tab_4;
    QTableWidget *tableWidget_2;
    QLineEdit *fbline;
    QLabel *label_3;
    QPushButton *fbcxbutton;
    QWidget *tab_5;
    QTableWidget *tableWidget_3;
    QLineEdit *jjline;
    QLabel *label_4;
    QPushButton *jjcxbutton;
    QWidget *tab_6;
    QTableWidget *tableWidget_4;
    QLineEdit *wdline;
    QLabel *label_5;
    QPushButton *wdcxbutton;
    QWidget *tab_7;
    QTableWidget *tableWidget_5;
    QLineEdit *sdline;
    QLabel *label_6;
    QPushButton *sdcxbutton;
    QWidget *tab_8;
    QTableWidget *tableWidget_6;
    QLineEdit *ywline;
    QLabel *label_7;
    QPushButton *ywcxbutton;
    QWidget *tab_9;
    QTableWidget *tableWidget_7;
    QLineEdit *tyline;
    QLabel *label_8;
    QPushButton *tycxbutton;
    QWidget *tab_10;
    QTableWidget *tableWidget_8;
    QLineEdit *dline;
    QLabel *label_9;
    QPushButton *hcjcxbutton;
    QWidget *tab_11;
    QTableWidget *tableWidget_9;
    QLineEdit *ylline;
    QLabel *label_10;
    QPushButton *ylcxbutton;
    QWidget *tab_12;
    QGroupBox *groupBox_2;
    QPushButton *choosebutton_2;
    QLineEdit *ksline;
    QLineEdit *sensorline;
    QLabel *label_11;
    QChartView *chartView;

    void setupUi(QWidget *sjzl)
    {
        if (sjzl->objectName().isEmpty())
            sjzl->setObjectName(QString::fromUtf8("sjzl"));
        sjzl->resize(420, 400);
        sjzl->setMinimumSize(QSize(420, 400));
        sjzl->setMaximumSize(QSize(420, 400));
        label = new QLabel(sjzl);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 421, 16));
        tabWidget = new QTabWidget(sjzl);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 19, 418, 371));
        QFont font;
        font.setFamily(QString::fromUtf8("AcadEref"));
        font.setPointSize(8);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        sstable = new QTableWidget(tab);
        sstable->setObjectName(QString::fromUtf8("sstable"));
        sstable->setGeometry(QRect(10, 10, 396, 301));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(6);
        sstable->setFont(font1);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(165, 320, 71, 20));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 320, 91, 20));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 320, 91, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lstable = new QTableWidget(tab_2);
        lstable->setObjectName(QString::fromUtf8("lstable"));
        lstable->setGeometry(QRect(10, 40, 396, 201));
        lstable->setFont(font1);
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 396, 41));
        choosebutton = new QPushButton(groupBox);
        choosebutton->setObjectName(QString::fromUtf8("choosebutton"));
        choosebutton->setGeometry(QRect(330, 12, 55, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font2.setPointSize(8);
        choosebutton->setFont(font2);
        lsline = new QLineEdit(groupBox);
        lsline->setObjectName(QString::fromUtf8("lsline"));
        lsline->setGeometry(QRect(10, 12, 321, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        lsline->setFont(font3);
        lsline->raise();
        choosebutton->raise();
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 243, 396, 101));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font4.setPointSize(7);
        tabWidget_2->setFont(font4);
        tabWidget_2->setStyleSheet(QString::fromUtf8(""));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 31, 20));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(8);
        label_2->setFont(font5);
        vline = new QLineEdit(tab_3);
        vline->setObjectName(QString::fromUtf8("vline"));
        vline->setGeometry(QRect(40, 10, 61, 20));
        vcxbutton = new QPushButton(tab_3);
        vcxbutton->setObjectName(QString::fromUtf8("vcxbutton"));
        vcxbutton->setGeometry(QRect(10, 40, 91, 20));
        vcxbutton->setFont(font5);
        tableWidget = new QTableWidget(tab_3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(110, 7, 275, 65));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tableWidget_2 = new QTableWidget(tab_4);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(110, 7, 275, 65));
        fbline = new QLineEdit(tab_4);
        fbline->setObjectName(QString::fromUtf8("fbline"));
        fbline->setGeometry(QRect(40, 10, 61, 20));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 31, 20));
        label_3->setFont(font5);
        fbcxbutton = new QPushButton(tab_4);
        fbcxbutton->setObjectName(QString::fromUtf8("fbcxbutton"));
        fbcxbutton->setGeometry(QRect(10, 40, 91, 20));
        fbcxbutton->setFont(font5);
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tableWidget_3 = new QTableWidget(tab_5);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(110, 7, 275, 65));
        jjline = new QLineEdit(tab_5);
        jjline->setObjectName(QString::fromUtf8("jjline"));
        jjline->setGeometry(QRect(40, 10, 61, 20));
        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 31, 20));
        label_4->setFont(font5);
        jjcxbutton = new QPushButton(tab_5);
        jjcxbutton->setObjectName(QString::fromUtf8("jjcxbutton"));
        jjcxbutton->setGeometry(QRect(10, 40, 91, 20));
        jjcxbutton->setFont(font5);
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tableWidget_4 = new QTableWidget(tab_6);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(110, 7, 275, 65));
        wdline = new QLineEdit(tab_6);
        wdline->setObjectName(QString::fromUtf8("wdline"));
        wdline->setGeometry(QRect(40, 10, 61, 20));
        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 31, 20));
        label_5->setFont(font5);
        wdcxbutton = new QPushButton(tab_6);
        wdcxbutton->setObjectName(QString::fromUtf8("wdcxbutton"));
        wdcxbutton->setGeometry(QRect(10, 40, 91, 20));
        wdcxbutton->setFont(font5);
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tableWidget_5 = new QTableWidget(tab_7);
        tableWidget_5->setObjectName(QString::fromUtf8("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(110, 7, 275, 65));
        sdline = new QLineEdit(tab_7);
        sdline->setObjectName(QString::fromUtf8("sdline"));
        sdline->setGeometry(QRect(40, 10, 61, 20));
        label_6 = new QLabel(tab_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 31, 20));
        label_6->setFont(font5);
        sdcxbutton = new QPushButton(tab_7);
        sdcxbutton->setObjectName(QString::fromUtf8("sdcxbutton"));
        sdcxbutton->setGeometry(QRect(10, 40, 91, 20));
        sdcxbutton->setFont(font5);
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tableWidget_6 = new QTableWidget(tab_8);
        tableWidget_6->setObjectName(QString::fromUtf8("tableWidget_6"));
        tableWidget_6->setGeometry(QRect(110, 7, 275, 65));
        ywline = new QLineEdit(tab_8);
        ywline->setObjectName(QString::fromUtf8("ywline"));
        ywline->setGeometry(QRect(40, 10, 61, 20));
        label_7 = new QLabel(tab_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 31, 20));
        label_7->setFont(font5);
        ywcxbutton = new QPushButton(tab_8);
        ywcxbutton->setObjectName(QString::fromUtf8("ywcxbutton"));
        ywcxbutton->setGeometry(QRect(10, 40, 91, 20));
        ywcxbutton->setFont(font5);
        tabWidget_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tableWidget_7 = new QTableWidget(tab_9);
        tableWidget_7->setObjectName(QString::fromUtf8("tableWidget_7"));
        tableWidget_7->setGeometry(QRect(110, 7, 275, 65));
        tyline = new QLineEdit(tab_9);
        tyline->setObjectName(QString::fromUtf8("tyline"));
        tyline->setGeometry(QRect(40, 10, 61, 20));
        label_8 = new QLabel(tab_9);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 31, 20));
        label_8->setFont(font5);
        tycxbutton = new QPushButton(tab_9);
        tycxbutton->setObjectName(QString::fromUtf8("tycxbutton"));
        tycxbutton->setGeometry(QRect(10, 40, 91, 20));
        tycxbutton->setFont(font5);
        tabWidget_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        tableWidget_8 = new QTableWidget(tab_10);
        tableWidget_8->setObjectName(QString::fromUtf8("tableWidget_8"));
        tableWidget_8->setGeometry(QRect(110, 7, 275, 65));
        dline = new QLineEdit(tab_10);
        dline->setObjectName(QString::fromUtf8("dline"));
        dline->setGeometry(QRect(40, 10, 61, 20));
        label_9 = new QLabel(tab_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 10, 31, 20));
        label_9->setFont(font5);
        hcjcxbutton = new QPushButton(tab_10);
        hcjcxbutton->setObjectName(QString::fromUtf8("hcjcxbutton"));
        hcjcxbutton->setGeometry(QRect(10, 40, 91, 20));
        hcjcxbutton->setFont(font5);
        tabWidget_2->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        tableWidget_9 = new QTableWidget(tab_11);
        tableWidget_9->setObjectName(QString::fromUtf8("tableWidget_9"));
        tableWidget_9->setGeometry(QRect(110, 7, 275, 65));
        ylline = new QLineEdit(tab_11);
        ylline->setObjectName(QString::fromUtf8("ylline"));
        ylline->setGeometry(QRect(40, 10, 61, 20));
        label_10 = new QLabel(tab_11);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 10, 31, 20));
        label_10->setFont(font5);
        ylcxbutton = new QPushButton(tab_11);
        ylcxbutton->setObjectName(QString::fromUtf8("ylcxbutton"));
        ylcxbutton->setGeometry(QRect(10, 40, 91, 20));
        ylcxbutton->setFont(font5);
        tabWidget_2->addTab(tab_11, QString());
        tabWidget->addTab(tab_2, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        groupBox_2 = new QGroupBox(tab_12);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 0, 396, 41));
        choosebutton_2 = new QPushButton(groupBox_2);
        choosebutton_2->setObjectName(QString::fromUtf8("choosebutton_2"));
        choosebutton_2->setGeometry(QRect(174, 12, 41, 21));
        choosebutton_2->setFont(font2);
        ksline = new QLineEdit(groupBox_2);
        ksline->setObjectName(QString::fromUtf8("ksline"));
        ksline->setGeometry(QRect(10, 12, 161, 21));
        ksline->setFont(font2);
        sensorline = new QLineEdit(groupBox_2);
        sensorline->setObjectName(QString::fromUtf8("sensorline"));
        sensorline->setGeometry(QRect(260, 12, 125, 21));
        sensorline->setFont(font2);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(220, 10, 54, 21));
        ksline->raise();
        choosebutton_2->raise();
        sensorline->raise();
        label_11->raise();
        chartView = new QChartView(tab_12);
        chartView->setObjectName(QString::fromUtf8("chartView"));
        chartView->setGeometry(QRect(10, 50, 396, 291));
        tabWidget->addTab(tab_12, QString());

        retranslateUi(sjzl);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(sjzl);
    } // setupUi

    void retranslateUi(QWidget *sjzl)
    {
        sjzl->setWindowTitle(QCoreApplication::translate("sjzl", "Form", nullptr));
        label->setText(QCoreApplication::translate("sjzl", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\346\225\260\346\215\256\346\200\273\350\247\210\347\225\214\351\235\242</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("sjzl", "\346\270\205\347\251\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sjzl", "\345\274\200\345\220\257\345\256\236\346\227\266\346\200\273\350\247\210", nullptr));
        pushButton_3->setText(QCoreApplication::translate("sjzl", "\345\205\263\351\227\255\345\256\236\346\227\266\346\200\273\350\247\210", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("sjzl", "\345\256\236\346\227\266\346\225\260\346\215\256\346\200\273\350\247\210", nullptr));
        groupBox->setTitle(QCoreApplication::translate("sjzl", "\345\257\274\345\205\245\346\226\207\344\273\266", nullptr));
        choosebutton->setText(QCoreApplication::translate("sjzl", "\346\265\217\350\247\210", nullptr));
        label_2->setText(QCoreApplication::translate("sjzl", "\346\227\266\351\227\264\357\274\232", nullptr));
        vcxbutton->setText(QCoreApplication::translate("sjzl", "\346\237\245\350\257\242", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("sjzl", "\351\200\237\345\272\246", nullptr));
        label_3->setText(QCoreApplication::translate("sjzl", "\346\227\266\351\227\264\357\274\232", nullptr));
        fbcxbutton->setText(QCoreApplication::translate("sjzl", "\346\237\245\350\257\242", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("sjzl", "\345\210\206\350\264\235", nullptr));
        label_4->setText(QCoreApplication::translate("sjzl", "\346\227\266\351\227\264\357\274\232", nullptr));
        jjcxbutton->setText(QCoreApplication::translate("sjzl", "\346\237\245\350\257\242", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("sjzl", "\351\205\222\347\262\276", nullptr));
        label_5->setText(QCoreApplication::translate("sjzl", "\346\227\266\351\227\264\357\274\232", nullptr));
        wdcxbutton->setText(QCoreApplication::translate("sjzl", "\346\237\245\350\257\242", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("sjzl", "\346\270\251\345\272\246", nullptr));
        label_6->setText(QCoreApplication::translate("sjzl", "\346\227\266\351\227\264\357\274\232", nullptr));
        sdcxbutton->setText(QCoreApplication::translate("sjzl", "\346\237\245\350\257\242", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("sjzl", "\346\271\277\345\272\246", nullptr));
        label_7->setText(QCoreApplication::translate("sjzl", "\346\227\266\351\227\264\357\274\232", nullptr));
        ywcxbutton->setText(QCoreApplication::translate("sjzl", "\346\237\245\350\257\242", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("sjzl", "\347\203\237\351\233\276", nullptr));
        label_8->setText(QCoreApplication::translate("sjzl", "\346\227\266\351\227\264\357\274\232", nullptr));
        tycxbutton->setText(QCoreApplication::translate("sjzl", "\346\237\245\350\257\242", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QCoreApplication::translate("sjzl", "\350\203\216\345\216\213", nullptr));
        label_9->setText(QCoreApplication::translate("sjzl", "\346\227\266\351\227\264\357\274\232", nullptr));
        hcjcxbutton->setText(QCoreApplication::translate("sjzl", "\346\237\245\350\257\242", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QCoreApplication::translate("sjzl", "\345\220\216\350\275\246\350\267\235", nullptr));
        label_10->setText(QCoreApplication::translate("sjzl", "\346\227\266\351\227\264\357\274\232", nullptr));
        ylcxbutton->setText(QCoreApplication::translate("sjzl", "\346\237\245\350\257\242", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QCoreApplication::translate("sjzl", "\346\262\271\351\207\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("sjzl", "\345\216\206\345\217\262\346\225\260\346\215\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("sjzl", "\345\257\274\345\205\245\346\226\207\344\273\266", nullptr));
        choosebutton_2->setText(QCoreApplication::translate("sjzl", "\346\265\217\350\247\210", nullptr));
        label_11->setText(QCoreApplication::translate("sjzl", "\344\274\240\346\204\237\345\231\250\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_12), QCoreApplication::translate("sjzl", "\346\225\260\346\215\256\345\217\257\350\247\206\345\214\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sjzl: public Ui_sjzl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SJZL_H
