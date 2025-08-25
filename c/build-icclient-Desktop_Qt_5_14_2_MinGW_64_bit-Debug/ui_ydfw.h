/********************************************************************************
** Form generated from reading UI file 'ydfw.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YDFW_H
#define UI_YDFW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ydfw
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *ipline;
    QLineEdit *portline;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *xxline;
    QTextEdit *text;
    QLabel *label_3;
    QLineEdit *nameline;
    QPushButton *pushButton_5;

    void setupUi(QWidget *ydfw)
    {
        if (ydfw->objectName().isEmpty())
            ydfw->setObjectName(QString::fromUtf8("ydfw"));
        ydfw->resize(420, 400);
        ydfw->setMinimumSize(QSize(420, 400));
        ydfw->setMaximumSize(QSize(420, 400));
        label = new QLabel(ydfw);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, -1, 111, 16));
        groupBox = new QGroupBox(ydfw);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 415, 151));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 120, 80, 20));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 120, 80, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 40, 51, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 70, 51, 21));
        ipline = new QLineEdit(groupBox);
        ipline->setObjectName(QString::fromUtf8("ipline"));
        ipline->setGeometry(QRect(160, 40, 141, 20));
        portline = new QLineEdit(groupBox);
        portline->setObjectName(QString::fromUtf8("portline"));
        portline->setGeometry(QRect(160, 70, 141, 20));
        groupBox_2 = new QGroupBox(ydfw);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 170, 415, 221));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 190, 81, 20));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 190, 81, 21));
        xxline = new QLineEdit(groupBox_2);
        xxline->setObjectName(QString::fromUtf8("xxline"));
        xxline->setGeometry(QRect(114, 149, 291, 31));
        xxline->setLayoutDirection(Qt::LeftToRight);
        text = new QTextEdit(groupBox_2);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(10, 30, 395, 111));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 54, 31));
        nameline = new QLineEdit(groupBox_2);
        nameline->setObjectName(QString::fromUtf8("nameline"));
        nameline->setGeometry(QRect(30, 149, 81, 31));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 190, 80, 20));

        retranslateUi(ydfw);

        QMetaObject::connectSlotsByName(ydfw);
    } // setupUi

    void retranslateUi(QWidget *ydfw)
    {
        ydfw->setWindowTitle(QCoreApplication::translate("ydfw", "Form", nullptr));
        label->setText(QCoreApplication::translate("ydfw", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\344\272\221\347\253\257\346\234\215\345\212\241\347\225\214\351\235\242</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ydfw", "\350\257\267\350\277\236\346\216\245\346\231\272\350\203\275\344\272\221\347\253\257\346\234\215\345\212\241\344\270\255\345\277\203\344\273\245\350\216\267\345\217\226\346\233\264\345\244\232\346\234\215\345\212\241", nullptr));
        pushButton->setText(QCoreApplication::translate("ydfw", "\350\277\236\346\216\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ydfw", "\346\226\255\345\274\200", nullptr));
        label_2->setText(QCoreApplication::translate("ydfw", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("ydfw", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ydfw", "\344\277\241\346\201\257\344\272\222\345\212\250\345\214\272\345\237\237", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ydfw", "\345\217\221\351\200\201", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ydfw", "\346\270\205\347\251\272", nullptr));
        label_3->setText(QCoreApplication::translate("ydfw", "To:", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ydfw", "\346\270\205\351\231\244\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ydfw: public Ui_ydfw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YDFW_H
