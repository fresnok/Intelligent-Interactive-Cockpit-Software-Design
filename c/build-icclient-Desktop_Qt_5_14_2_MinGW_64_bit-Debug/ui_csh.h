/********************************************************************************
** Form generated from reading UI file 'csh.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSH_H
#define UI_CSH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_csh
{
public:
    QProgressBar *progressBar;
    QLabel *label;

    void setupUi(QWidget *csh)
    {
        if (csh->objectName().isEmpty())
            csh->setObjectName(QString::fromUtf8("csh"));
        csh->resize(400, 81);
        progressBar = new QProgressBar(csh);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 42, 381, 21));
        progressBar->setValue(24);
        label = new QLabel(csh);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 401, 21));

        retranslateUi(csh);

        QMetaObject::connectSlotsByName(csh);
    } // setupUi

    void retranslateUi(QWidget *csh)
    {
        csh->setWindowTitle(QCoreApplication::translate("csh", "\344\274\240\346\204\237\345\231\250\346\217\220\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("csh", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\344\274\240\346\204\237\345\231\250\345\210\235\345\247\213\345\214\226\344\270\255...</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class csh: public Ui_csh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSH_H
