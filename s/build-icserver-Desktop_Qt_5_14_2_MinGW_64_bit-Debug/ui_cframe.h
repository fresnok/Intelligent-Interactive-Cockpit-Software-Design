/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QGroupBox *groupBox_2;
    QLCDNumber *vlcd;
    QLabel *car1label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QLabel *car2label;
    QFrame *line_10;
    QFrame *line_11;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *zfblabel;
    QLabel *zjjlabel;
    QLabel *zwdlabel;
    QLabel *zsdlabel;
    QLabel *zywlabel;
    QLabel *zqcjlabel;
    QLabel *zhcjlabel;
    QLabel *ztylabel;
    QLabel *label_9;
    QLabel *label;
    QLabel *namelabel;
    QLineEdit *line;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;

    void setupUi(QWidget *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName(QString::fromUtf8("cframe"));
        cframe->resize(271, 514);
        groupBox_2 = new QGroupBox(cframe);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 271, 511));
        vlcd = new QLCDNumber(groupBox_2);
        vlcd->setObjectName(QString::fromUtf8("vlcd"));
        vlcd->setGeometry(QRect(70, 29, 81, 51));
        vlcd->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border:none;"));
        vlcd->setDigitCount(3);
        car1label = new QLabel(groupBox_2);
        car1label->setObjectName(QString::fromUtf8("car1label"));
        car1label->setGeometry(QRect(80, 89, 110, 213));
        car1label->setMinimumSize(QSize(110, 213));
        car1label->setMaximumSize(QSize(110, 213));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 99, 31, 31));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 259, 31, 31));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 259, 31, 31));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(190, 99, 31, 31));
        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 90, 41, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(220, 280, 41, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(groupBox_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(10, 280, 41, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(groupBox_2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(220, 90, 41, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(groupBox_2);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(10, 189, 71, 21));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(groupBox_2);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(190, 189, 71, 21));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        car2label = new QLabel(groupBox_2);
        car2label->setObjectName(QString::fromUtf8("car2label"));
        car2label->setGeometry(QRect(30, 370, 200, 66));
        line_10 = new QFrame(groupBox_2);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(220, 350, 41, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(groupBox_2);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(10, 350, 41, 20));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(190, 360, 31, 31));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 360, 16, 31));
        zfblabel = new QLabel(groupBox_2);
        zfblabel->setObjectName(QString::fromUtf8("zfblabel"));
        zfblabel->setGeometry(QRect(10, 80, 41, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(8);
        zfblabel->setFont(font);
        zfblabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zjjlabel = new QLabel(groupBox_2);
        zjjlabel->setObjectName(QString::fromUtf8("zjjlabel"));
        zjjlabel->setGeometry(QRect(220, 80, 41, 16));
        zjjlabel->setFont(font);
        zjjlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zwdlabel = new QLabel(groupBox_2);
        zwdlabel->setObjectName(QString::fromUtf8("zwdlabel"));
        zwdlabel->setGeometry(QRect(10, 180, 41, 16));
        zwdlabel->setFont(font);
        zwdlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zsdlabel = new QLabel(groupBox_2);
        zsdlabel->setObjectName(QString::fromUtf8("zsdlabel"));
        zsdlabel->setGeometry(QRect(220, 180, 41, 16));
        zsdlabel->setFont(font);
        zsdlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zywlabel = new QLabel(groupBox_2);
        zywlabel->setObjectName(QString::fromUtf8("zywlabel"));
        zywlabel->setGeometry(QRect(10, 270, 41, 16));
        zywlabel->setFont(font);
        zywlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zqcjlabel = new QLabel(groupBox_2);
        zqcjlabel->setObjectName(QString::fromUtf8("zqcjlabel"));
        zqcjlabel->setGeometry(QRect(220, 270, 41, 16));
        zqcjlabel->setFont(font);
        zqcjlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zhcjlabel = new QLabel(groupBox_2);
        zhcjlabel->setObjectName(QString::fromUtf8("zhcjlabel"));
        zhcjlabel->setGeometry(QRect(10, 340, 41, 16));
        zhcjlabel->setFont(font);
        zhcjlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        ztylabel = new QLabel(groupBox_2);
        ztylabel->setObjectName(QString::fromUtf8("ztylabel"));
        ztylabel->setGeometry(QRect(220, 340, 41, 16));
        ztylabel->setFont(font);
        ztylabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(163, 39, 71, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AcadEref"));
        font1.setPointSize(20);
        label_9->setFont(font1);
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 31, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font2.setPointSize(10);
        label->setFont(font2);
        namelabel = new QLabel(groupBox_2);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(40, 10, 71, 16));
        namelabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line = new QLineEdit(groupBox_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(2, 450, 265, 21));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 480, 80, 20));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 480, 80, 20));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 31, 21));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(240, 100, 31, 21));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(240, 360, 31, 21));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 200, 31, 21));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 360, 31, 21));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(240, 200, 31, 21));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 290, 31, 21));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(240, 290, 31, 21));
        vlcd->raise();
        car1label->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_5->raise();
        label_6->raise();
        line_6->raise();
        line_7->raise();
        car2label->raise();
        line_10->raise();
        line_11->raise();
        label_7->raise();
        label_8->raise();
        zfblabel->raise();
        zjjlabel->raise();
        zwdlabel->raise();
        zsdlabel->raise();
        zywlabel->raise();
        zqcjlabel->raise();
        zhcjlabel->raise();
        ztylabel->raise();
        label_9->raise();
        label->raise();
        namelabel->raise();
        line->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_2->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();

        retranslateUi(cframe);

        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QWidget *cframe)
    {
        cframe->setWindowTitle(QCoreApplication::translate("cframe", "Form", nullptr));
        groupBox_2->setTitle(QString());
        car1label->setText(QCoreApplication::translate("cframe", "<html><head/><body><p align=\"center\">car1label</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("cframe", "<html><head/><body><p><img src=\":/image/image/yinxian1.png\"/></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("cframe", "<html><head/><body><p><img src=\":/image/image/yinxian1.png\"/></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("cframe", "<html><head/><body><p><img src=\":/image/image/yinxian2.png\"/></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("cframe", "<html><head/><body><p><img src=\":/image/image/yinxian2.png\"/></p></body></html>", nullptr));
        car2label->setText(QCoreApplication::translate("cframe", "<html><head/><body><p align=\"center\">car2label</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("cframe", "<html><head/><body><p><img src=\":/image/image/yinxian2.png\"/></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("cframe", "<html><head/><body><p><img src=\":/image/image/yinxian1.png\"/></p></body></html>", nullptr));
        zfblabel->setText(QCoreApplication::translate("cframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zjjlabel->setText(QCoreApplication::translate("cframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zwdlabel->setText(QCoreApplication::translate("cframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zsdlabel->setText(QCoreApplication::translate("cframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zywlabel->setText(QCoreApplication::translate("cframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zqcjlabel->setText(QCoreApplication::translate("cframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zhcjlabel->setText(QCoreApplication::translate("cframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        ztylabel->setText(QCoreApplication::translate("cframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("cframe", "<html><head/><body><p><span style=\" font-weight:600;\">Km/h</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("cframe", "user:", nullptr));
        namelabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("cframe", "\346\270\205\347\251\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cframe", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("cframe", "\345\210\206\350\264\235", nullptr));
        label_10->setText(QCoreApplication::translate("cframe", "\351\205\222\347\262\276", nullptr));
        label_11->setText(QCoreApplication::translate("cframe", "\350\203\216\345\216\213", nullptr));
        label_12->setText(QCoreApplication::translate("cframe", "\346\270\251\345\272\246", nullptr));
        label_13->setText(QCoreApplication::translate("cframe", "\350\275\246\350\267\235", nullptr));
        label_14->setText(QCoreApplication::translate("cframe", "\346\271\277\345\272\246", nullptr));
        label_15->setText(QCoreApplication::translate("cframe", "\347\203\237\351\233\276", nullptr));
        label_16->setText(QCoreApplication::translate("cframe", "\346\262\271\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
