/********************************************************************************
** Form generated from reading UI file 'jframe.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JFRAME_H
#define UI_JFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <gnkz.h>
#include <sjzl.h>
#include <ydfw.h>

QT_BEGIN_NAMESPACE

class Ui_jframe
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *usernamelabel;
    QLabel *label_2;
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
    QLabel *ztmlabel;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_11;
    QLabel *label_17;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QFrame *line_8;
    QPushButton *pushButton_2;
    QFrame *line_9;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_4;
    QStackedWidget *stackedWidget;
    gnkz *page;
    sjzl *page_3;
    ydfw *page_2;
    QGroupBox *xxxs;
    QTextEdit *text;

    void setupUi(QWidget *jframe)
    {
        if (jframe->objectName().isEmpty())
            jframe->setObjectName(QString::fromUtf8("jframe"));
        jframe->resize(761, 600);
        jframe->setMinimumSize(QSize(761, 600));
        jframe->setStyleSheet(QString::fromUtf8("border-image:url(E:\\C++ks\\qtic\\c\\background1.jpg);"));
        groupBox = new QGroupBox(jframe);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 741, 31));
        groupBox->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 7, 51, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(8);
        label->setFont(font);
        usernamelabel = new QLabel(groupBox);
        usernamelabel->setObjectName(QString::fromUtf8("usernamelabel"));
        usernamelabel->setGeometry(QRect(68, 8, 111, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(8);
        usernamelabel->setFont(font1);
        usernamelabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 8, 561, 16));
        label_2->setFont(font);
        groupBox_2 = new QGroupBox(jframe);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(450, 40, 301, 451));
        vlcd = new QLCDNumber(groupBox_2);
        vlcd->setObjectName(QString::fromUtf8("vlcd"));
        vlcd->setGeometry(QRect(90, 29, 81, 51));
        vlcd->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border:none;"));
        vlcd->setDigitCount(3);
        car1label = new QLabel(groupBox_2);
        car1label->setObjectName(QString::fromUtf8("car1label"));
        car1label->setGeometry(QRect(100, 89, 110, 213));
        car1label->setMinimumSize(QSize(110, 213));
        car1label->setMaximumSize(QSize(110, 213));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 99, 31, 31));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 259, 31, 31));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 259, 31, 31));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 99, 31, 31));
        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(30, 90, 41, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(240, 280, 41, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(groupBox_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(30, 280, 41, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(groupBox_2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(240, 90, 41, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(groupBox_2);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(30, 189, 71, 21));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(groupBox_2);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(210, 189, 71, 21));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        car2label = new QLabel(groupBox_2);
        car2label->setObjectName(QString::fromUtf8("car2label"));
        car2label->setGeometry(QRect(50, 370, 200, 66));
        line_10 = new QFrame(groupBox_2);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(240, 350, 41, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(groupBox_2);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(30, 350, 41, 20));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 360, 31, 31));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 360, 16, 31));
        zfblabel = new QLabel(groupBox_2);
        zfblabel->setObjectName(QString::fromUtf8("zfblabel"));
        zfblabel->setGeometry(QRect(30, 80, 41, 16));
        zfblabel->setFont(font1);
        zfblabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zjjlabel = new QLabel(groupBox_2);
        zjjlabel->setObjectName(QString::fromUtf8("zjjlabel"));
        zjjlabel->setGeometry(QRect(240, 80, 41, 16));
        zjjlabel->setFont(font1);
        zjjlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zwdlabel = new QLabel(groupBox_2);
        zwdlabel->setObjectName(QString::fromUtf8("zwdlabel"));
        zwdlabel->setGeometry(QRect(30, 180, 41, 16));
        zwdlabel->setFont(font1);
        zwdlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zsdlabel = new QLabel(groupBox_2);
        zsdlabel->setObjectName(QString::fromUtf8("zsdlabel"));
        zsdlabel->setGeometry(QRect(240, 180, 41, 16));
        zsdlabel->setFont(font1);
        zsdlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zywlabel = new QLabel(groupBox_2);
        zywlabel->setObjectName(QString::fromUtf8("zywlabel"));
        zywlabel->setGeometry(QRect(30, 270, 41, 16));
        zywlabel->setFont(font1);
        zywlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zqcjlabel = new QLabel(groupBox_2);
        zqcjlabel->setObjectName(QString::fromUtf8("zqcjlabel"));
        zqcjlabel->setGeometry(QRect(240, 270, 41, 16));
        zqcjlabel->setFont(font1);
        zqcjlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        zhcjlabel = new QLabel(groupBox_2);
        zhcjlabel->setObjectName(QString::fromUtf8("zhcjlabel"));
        zhcjlabel->setGeometry(QRect(30, 340, 41, 16));
        zhcjlabel->setFont(font1);
        zhcjlabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        ztylabel = new QLabel(groupBox_2);
        ztylabel->setObjectName(QString::fromUtf8("ztylabel"));
        ztylabel->setGeometry(QRect(240, 340, 41, 16));
        ztylabel->setFont(font1);
        ztylabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        ztmlabel = new QLabel(groupBox_2);
        ztmlabel->setObjectName(QString::fromUtf8("ztmlabel"));
        ztmlabel->setGeometry(QRect(10, 10, 131, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("AcadEref"));
        font2.setPointSize(6);
        ztmlabel->setFont(font2);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(183, 39, 71, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("AcadEref"));
        font3.setPointSize(20);
        label_9->setFont(font3);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(260, 100, 31, 21));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 200, 31, 21));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 360, 31, 21));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(260, 200, 31, 21));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 290, 31, 21));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(260, 290, 31, 21));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 100, 31, 21));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(260, 360, 31, 21));
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
        ztmlabel->raise();
        label_9->raise();
        label_10->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        label_11->raise();
        label_17->raise();
        groupBox_3 = new QGroupBox(jframe);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 40, 431, 41));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 411, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font4.setPointSize(8);
        pushButton->setFont(font4);

        horizontalLayout->addWidget(pushButton);

        line_8 = new QFrame(layoutWidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_8);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font4);

        horizontalLayout->addWidget(pushButton_2);

        line_9 = new QFrame(layoutWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_9);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font4);

        horizontalLayout->addWidget(pushButton_3);

        groupBox_4 = new QGroupBox(jframe);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 80, 431, 411));
        stackedWidget = new QStackedWidget(groupBox_4);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(8, 9, 420, 400));
        stackedWidget->setMinimumSize(QSize(420, 400));
        stackedWidget->setMaximumSize(QSize(420, 400));
        page = new gnkz();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_3 = new sjzl();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        page_2 = new ydfw();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        xxxs = new QGroupBox(jframe);
        xxxs->setObjectName(QString::fromUtf8("xxxs"));
        xxxs->setGeometry(QRect(10, 500, 741, 91));
        text = new QTextEdit(xxxs);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(10, 13, 721, 71));

        retranslateUi(jframe);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(jframe);
    } // setupUi

    void retranslateUi(QWidget *jframe)
    {
        jframe->setWindowTitle(QCoreApplication::translate("jframe", "\344\270\273\347\225\214\351\235\242|\342\200\234\345\256\235\342\200\235\351\251\276\342\200\234\344\272\222\342\200\235\350\210\252\342\200\224\342\200\224\346\231\272\350\203\275\344\272\244\344\272\222\351\251\276\351\251\266\350\210\261", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("jframe", "\346\254\242\350\277\216\347\224\250\346\210\267\357\274\232", nullptr));
        usernamelabel->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\">\346\231\272\350\203\275\344\272\244\344\272\222\351\251\276\351\251\266\350\210\261\346\217\220\351\206\222\346\202\250\357\274\232\350\257\267\346\202\250\351\201\265\345\256\210\344\272\244\351\200\232\350\247\204\345\210\231\357\274\214\350\247\204\350\214\203\351\251\276\351\251\266\357\274\214\346\263\250\346\204\217\350\241\214\350\275\246\345\256\211\345\205\250\343\200\202\347\245\235\346\202\250\350\275\246\350\241\214\344\270\207\351\207\214\350\267\257\357\274\214\344\272\272\350\275\246\346\260\270\345\271\263\345\256\211\357\274\201</p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        car1label->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\">car1label</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("jframe", "<html><head/><body><p><img src=\":/image/image/yinxian1.png\"/></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("jframe", "<html><head/><body><p><img src=\":/image/image/yinxian1.png\"/></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("jframe", "<html><head/><body><p><img src=\":/image/image/yinxian2.png\"/></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("jframe", "<html><head/><body><p><img src=\":/image/image/yinxian2.png\"/></p></body></html>", nullptr));
        car2label->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\">car2label</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("jframe", "<html><head/><body><p><img src=\":/image/image/yinxian2.png\"/></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("jframe", "<html><head/><body><p><img src=\":/image/image/yinxian1.png\"/></p></body></html>", nullptr));
        zfblabel->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zjjlabel->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zwdlabel->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zsdlabel->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zywlabel->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zqcjlabel->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        zhcjlabel->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        ztylabel->setText(QCoreApplication::translate("jframe", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        ztmlabel->setText(QCoreApplication::translate("jframe", "\347\255\211\345\276\205\350\216\267\345\217\226\346\227\266\351\227\264\344\277\241\346\201\257", nullptr));
        label_9->setText(QCoreApplication::translate("jframe", "<html><head/><body><p><span style=\" font-weight:600;\">Km/h</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("jframe", "\351\205\222\347\262\276", nullptr));
        label_12->setText(QCoreApplication::translate("jframe", "\346\270\251\345\272\246", nullptr));
        label_13->setText(QCoreApplication::translate("jframe", "\350\275\246\350\267\235", nullptr));
        label_14->setText(QCoreApplication::translate("jframe", "\346\271\277\345\272\246", nullptr));
        label_15->setText(QCoreApplication::translate("jframe", "\347\203\237\351\233\276", nullptr));
        label_16->setText(QCoreApplication::translate("jframe", "\346\262\271\351\207\217", nullptr));
        label_11->setText(QCoreApplication::translate("jframe", "\345\210\206\350\264\235", nullptr));
        label_17->setText(QCoreApplication::translate("jframe", "\350\203\216\345\216\213", nullptr));
        groupBox_3->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("jframe", "\345\212\237\350\203\275\346\216\247\345\210\266", nullptr));
        pushButton_2->setText(QCoreApplication::translate("jframe", "\346\225\260\346\215\256\346\200\273\350\247\210", nullptr));
        pushButton_3->setText(QCoreApplication::translate("jframe", "\344\272\221\347\253\257\346\234\215\345\212\241", nullptr));
        groupBox_4->setTitle(QString());
        xxxs->setTitle(QCoreApplication::translate("jframe", "\344\277\241\346\201\257\346\230\276\347\244\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jframe: public Ui_jframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JFRAME_H
