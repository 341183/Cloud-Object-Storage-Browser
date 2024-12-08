/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *Body_Frame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_logo;
    QLabel *label_name;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_change;
    QPushButton *btn_close;
    QFrame *frame_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_13;
    QLabel *label_yhm;
    QLineEdit *lineEdit_yhm;
    QSpacerItem *verticalSpacer_11;
    QLabel *label_mm;
    QLineEdit *lineEdit_mm;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_12;
    QPushButton *btn_login;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(442, 496);
        LoginDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(LoginDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        Body_Frame = new QFrame(LoginDialog);
        Body_Frame->setObjectName("Body_Frame");
        Body_Frame->setFrameShape(QFrame::StyledPanel);
        Body_Frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(Body_Frame);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_logo = new QLabel(Body_Frame);
        label_logo->setObjectName("label_logo");
        label_logo->setMaximumSize(QSize(25, 25));
        label_logo->setSizeIncrement(QSize(25, 25));

        horizontalLayout_3->addWidget(label_logo);

        label_name = new QLabel(Body_Frame);
        label_name->setObjectName("label_name");

        horizontalLayout_3->addWidget(label_name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_change = new QPushButton(Body_Frame);
        btn_change->setObjectName("btn_change");
        btn_change->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(btn_change);

        btn_close = new QPushButton(Body_Frame);
        btn_close->setObjectName("btn_close");
        btn_close->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(btn_close);


        verticalLayout_4->addWidget(Body_Frame);

        frame_2 = new QFrame(LoginDialog);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(frame_2);

        frame = new QFrame(LoginDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_13);

        label_yhm = new QLabel(frame);
        label_yhm->setObjectName("label_yhm");

        verticalLayout_3->addWidget(label_yhm);

        lineEdit_yhm = new QLineEdit(frame);
        lineEdit_yhm->setObjectName("lineEdit_yhm");

        verticalLayout_3->addWidget(lineEdit_yhm);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_11);

        label_mm = new QLabel(frame);
        label_mm->setObjectName("label_mm");

        verticalLayout_3->addWidget(label_mm);

        lineEdit_mm = new QLineEdit(frame);
        lineEdit_mm->setObjectName("lineEdit_mm");
        lineEdit_mm->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_mm);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_14);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_15);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_12);

        btn_login = new QPushButton(frame);
        btn_login->setObjectName("btn_login");

        verticalLayout_3->addWidget(btn_login);


        verticalLayout_4->addWidget(frame);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(2, 100);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        label_logo->setText(QString());
        label_name->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        btn_change->setText(QCoreApplication::translate("LoginDialog", "C", nullptr));
        btn_close->setText(QCoreApplication::translate("LoginDialog", "\303\227", nullptr));
        label_yhm->setText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_mm->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201", nullptr));
        btn_login->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
