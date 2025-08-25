/********************************************************************************
** Form generated from reading UI file 'opensxt.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENSXT_H
#define UI_OPENSXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opensxt
{
public:
    QLabel *label;
    QProgressBar *progressBar;

    void setupUi(QWidget *opensxt)
    {
        if (opensxt->objectName().isEmpty())
            opensxt->setObjectName(QString::fromUtf8("opensxt"));
        opensxt->resize(450, 80);
        opensxt->setMinimumSize(QSize(450, 80));
        opensxt->setMaximumSize(QSize(450, 80));
        label = new QLabel(opensxt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1, 11, 451, 20));
        progressBar = new QProgressBar(opensxt);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(11, 40, 461, 20));
        progressBar->setMaximum(0);
        progressBar->setValue(-1);

        retranslateUi(opensxt);

        QMetaObject::connectSlotsByName(opensxt);
    } // setupUi

    void retranslateUi(QWidget *opensxt)
    {
        opensxt->setWindowTitle(QCoreApplication::translate("opensxt", "\345\212\240\350\275\275\344\270\255", nullptr));
        label->setText(QCoreApplication::translate("opensxt", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\346\255\243\345\234\250\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264\357\274\214\350\257\267\347\250\215\345\220\216...</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opensxt: public Ui_opensxt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENSXT_H
