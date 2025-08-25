/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *loginphoto;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mimalabel;
    QLineEdit *mimaedit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginbutton;
    QFrame *line;
    QPushButton *singupbutton;
    QFrame *line_2;
    QPushButton *rlsbbutton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *zhanghaolabel;
    QLineEdit *zhanghaoedit;
    QPushButton *sureButton;
    QFrame *line_3;
    QFrame *line_4;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(470, 310);
        login->setMinimumSize(QSize(470, 310));
        login->setMaximumSize(QSize(470, 310));
        loginphoto = new QLabel(login);
        loginphoto->setObjectName(QString::fromUtf8("loginphoto"));
        loginphoto->setGeometry(QRect(-10, -10, 491, 331));
        loginphoto->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 170, 211, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        mimalabel = new QLabel(layoutWidget);
        mimalabel->setObjectName(QString::fromUtf8("mimalabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        mimalabel->setFont(font);
        mimalabel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(mimalabel);

        mimaedit = new QLineEdit(layoutWidget);
        mimaedit->setObjectName(QString::fromUtf8("mimaedit"));
        mimaedit->setFont(font);
        mimaedit->setLayoutDirection(Qt::LeftToRight);
        mimaedit->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: white;\n"
"border-width: 0.1px;"));
        mimaedit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(mimaedit);

        layoutWidget1 = new QWidget(login);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 40, 272, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loginbutton = new QPushButton(layoutWidget1);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(8);
        font1.setUnderline(false);
        loginbutton->setFont(font1);
        loginbutton->setMouseTracking(false);
        loginbutton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        loginbutton->setFlat(true);

        horizontalLayout->addWidget(loginbutton);

        line = new QFrame(layoutWidget1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        singupbutton = new QPushButton(layoutWidget1);
        singupbutton->setObjectName(QString::fromUtf8("singupbutton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(8);
        singupbutton->setFont(font2);
        singupbutton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        singupbutton->setFlat(true);

        horizontalLayout->addWidget(singupbutton);

        line_2 = new QFrame(layoutWidget1);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        rlsbbutton = new QPushButton(layoutWidget1);
        rlsbbutton->setObjectName(QString::fromUtf8("rlsbbutton"));
        rlsbbutton->setFont(font2);
        rlsbbutton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        rlsbbutton->setFlat(true);

        horizontalLayout->addWidget(rlsbbutton);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(3, 1);
        layoutWidget2 = new QWidget(login);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(130, 120, 211, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        zhanghaolabel = new QLabel(layoutWidget2);
        zhanghaolabel->setObjectName(QString::fromUtf8("zhanghaolabel"));
        zhanghaolabel->setFont(font);
        zhanghaolabel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(zhanghaolabel);

        zhanghaoedit = new QLineEdit(layoutWidget2);
        zhanghaoedit->setObjectName(QString::fromUtf8("zhanghaoedit"));
        zhanghaoedit->setFont(font);
        zhanghaoedit->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: white;\n"
"border-width: 0.1px;"));
        zhanghaoedit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(zhanghaoedit);

        sureButton = new QPushButton(login);
        sureButton->setObjectName(QString::fromUtf8("sureButton"));
        sureButton->setGeometry(QRect(190, 250, 91, 20));
        sureButton->setFont(font);
        sureButton->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        sureButton->setFlat(true);
        line_3 = new QFrame(login);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(170, 250, 20, 21));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(login);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(280, 250, 20, 21));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "\347\231\273\345\275\225\347\225\214\351\235\242|\342\200\234\345\256\235\342\200\235\351\251\276\342\200\234\344\272\222\342\200\235\350\210\252\342\200\224\342\200\224\346\231\272\350\203\275\344\272\244\344\272\222\351\251\276\351\251\266\350\210\261", nullptr));
        loginphoto->setText(QString());
        mimalabel->setText(QCoreApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        mimaedit->setPlaceholderText(QCoreApplication::translate("login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        loginbutton->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        singupbutton->setText(QCoreApplication::translate("login", "\346\263\250\345\206\214", nullptr));
        rlsbbutton->setText(QCoreApplication::translate("login", "\351\235\242\345\256\271\350\247\243\351\224\201", nullptr));
        zhanghaolabel->setText(QCoreApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">\350\264\246\345\217\267\357\274\232</span></p></body></html>", nullptr));
        zhanghaoedit->setPlaceholderText(QCoreApplication::translate("login", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267\344\275\234\344\270\272\347\224\250\346\210\267\345\220\215", nullptr));
        sureButton->setText(QCoreApplication::translate("login", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
