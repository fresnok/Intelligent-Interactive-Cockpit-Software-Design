/********************************************************************************
** Form generated from reading UI file 'sjframe.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SJFRAME_H
#define UI_SJFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sjframe
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLineEdit *portline;
    QLabel *label_2;
    QLineEdit *ipline;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QLineEdit *minjj;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *maxjj;
    QLineEdit *minfb;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *maxfb;
    QLineEdit *minv;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *maxv;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QTextEdit *textEdit;
    QGroupBox *groupBox_6;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_7;
    QTableWidget *usertable;

    void setupUi(QWidget *sjframe)
    {
        if (sjframe->objectName().isEmpty())
            sjframe->setObjectName(QString::fromUtf8("sjframe"));
        sjframe->resize(400, 515);
        sjframe->setMinimumSize(QSize(400, 515));
        sjframe->setMaximumSize(QSize(16777215, 16777215));
        groupBox = new QGroupBox(sjframe);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 400, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 9, 400, 21));
        groupBox_2 = new QGroupBox(sjframe);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(-1, 30, 201, 211));
        portline = new QLineEdit(groupBox_2);
        portline->setObjectName(QString::fromUtf8("portline"));
        portline->setGeometry(QRect(70, 120, 101, 20));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 51, 21));
        ipline = new QLineEdit(groupBox_2);
        ipline->setObjectName(QString::fromUtf8("ipline"));
        ipline->setGeometry(QRect(70, 50, 101, 20));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 120, 51, 21));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 170, 80, 20));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 10, 201, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(10);
        label_3->setFont(font);
        groupBox_3 = new QGroupBox(sjframe);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(200, 30, 200, 211));
        minjj = new QLineEdit(groupBox_3);
        minjj->setObjectName(QString::fromUtf8("minjj"));
        minjj->setGeometry(QRect(20, 30, 61, 20));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 30, 41, 20));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 10, 81, 16));
        maxjj = new QLineEdit(groupBox_3);
        maxjj->setObjectName(QString::fromUtf8("maxjj"));
        maxjj->setGeometry(QRect(120, 30, 61, 20));
        minfb = new QLineEdit(groupBox_3);
        minfb->setObjectName(QString::fromUtf8("minfb"));
        minfb->setGeometry(QRect(20, 80, 61, 20));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 80, 41, 20));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 60, 81, 16));
        maxfb = new QLineEdit(groupBox_3);
        maxfb->setObjectName(QString::fromUtf8("maxfb"));
        maxfb->setGeometry(QRect(120, 80, 61, 20));
        minv = new QLineEdit(groupBox_3);
        minv->setObjectName(QString::fromUtf8("minv"));
        minv->setGeometry(QRect(20, 130, 61, 20));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 130, 41, 20));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 110, 81, 16));
        maxv = new QLineEdit(groupBox_3);
        maxv->setObjectName(QString::fromUtf8("maxv"));
        maxv->setGeometry(QRect(120, 130, 61, 20));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 170, 61, 21));
        groupBox_4 = new QGroupBox(sjframe);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 240, 400, 271));
        groupBox_4->setMaximumSize(QSize(16777215, 16777215));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(9, 190, 381, 71));
        textEdit = new QTextEdit(groupBox_5);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 14, 361, 51));
        textEdit->setMinimumSize(QSize(0, 0));
        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 100, 381, 91));
        tableWidget = new QTableWidget(groupBox_6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 14, 361, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(6);
        tableWidget->setFont(font1);
        groupBox_7 = new QGroupBox(groupBox_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 381, 91));
        usertable = new QTableWidget(groupBox_7);
        usertable->setObjectName(QString::fromUtf8("usertable"));
        usertable->setGeometry(QRect(10, 14, 361, 71));
        usertable->setFont(font1);

        retranslateUi(sjframe);

        QMetaObject::connectSlotsByName(sjframe);
    } // setupUi

    void retranslateUi(QWidget *sjframe)
    {
        sjframe->setWindowTitle(QCoreApplication::translate("sjframe", "\346\231\272\350\203\275\344\272\221\347\253\257\346\234\215\345\212\241\344\270\255\345\277\203|\342\200\234\345\256\235\342\200\235\351\251\276\342\200\234\344\272\222\342\200\235\350\210\252\342\200\224\342\200\224\346\231\272\350\203\275\344\272\244\344\272\222\351\251\276\351\251\266\350\210\261", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("sjframe", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\346\254\242\350\277\216\346\214\207\346\214\245\345\256\230\350\277\233\345\205\245\342\200\234\345\256\235\342\200\235\351\251\276\342\200\234\344\272\222\342\200\235\350\210\252\342\200\224\342\200\224\346\231\272\350\203\275\344\272\244\344\272\222\351\251\276\351\251\266\350\210\261\346\231\272\350\203\275\344\272\221\347\253\257\346\234\215\345\212\241\344\270\255\345\277\203</span></p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("sjframe", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("sjframe", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("sjframe", "\346\211\223\345\274\200\346\234\215\345\212\241\345\231\250", nullptr));
        label_3->setText(QCoreApplication::translate("sjframe", "<html><head/><body><p align=\"center\">\350\256\276\347\275\256IP\345\217\212\347\253\257\345\217\243</p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        label_6->setText(QCoreApplication::translate("sjframe", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\342\200\224\342\200\224</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("sjframe", "\351\205\222\347\262\276\346\255\243\345\270\270\350\214\203\345\233\264\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("sjframe", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\342\200\224\342\200\224</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("sjframe", "\345\210\206\350\264\235\346\255\243\345\270\270\350\214\203\345\233\264\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("sjframe", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\342\200\224\342\200\224</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("sjframe", "\351\200\237\345\272\246\346\255\243\345\270\270\350\214\203\345\233\264\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sjframe", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        groupBox_4->setTitle(QString());
        groupBox_5->setTitle(QCoreApplication::translate("sjframe", "\344\277\241\346\201\257\346\230\276\347\244\272", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("sjframe", "\350\277\236\346\216\245\350\256\260\345\275\225", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("sjframe", "\347\263\273\347\273\237\346\263\250\345\206\214\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sjframe: public Ui_sjframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SJFRAME_H
