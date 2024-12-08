/********************************************************************************
** Form generated from reading UI file 'toolbarwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBARWIDGET_H
#define UI_TOOLBARWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolBarWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *btnUpload;
    QPushButton *btndownload;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnquit;
    QPushButton *pushButton_6;

    void setupUi(QWidget *ToolBarWidget)
    {
        if (ToolBarWidget->objectName().isEmpty())
            ToolBarWidget->setObjectName("ToolBarWidget");
        ToolBarWidget->resize(528, 50);
        horizontalLayout = new QHBoxLayout(ToolBarWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(ToolBarWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton);

        btnUpload = new QPushButton(ToolBarWidget);
        btnUpload->setObjectName("btnUpload");
        btnUpload->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(btnUpload);

        btndownload = new QPushButton(ToolBarWidget);
        btndownload->setObjectName("btndownload");
        btndownload->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(btndownload);

        pushButton_5 = new QPushButton(ToolBarWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnquit = new QPushButton(ToolBarWidget);
        btnquit->setObjectName("btnquit");
        btnquit->setMaximumSize(QSize(60, 60));

        horizontalLayout->addWidget(btnquit);

        pushButton_6 = new QPushButton(ToolBarWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMaximumSize(QSize(60, 60));

        horizontalLayout->addWidget(pushButton_6);


        retranslateUi(ToolBarWidget);

        QMetaObject::connectSlotsByName(ToolBarWidget);
    } // setupUi

    void retranslateUi(QWidget *ToolBarWidget)
    {
        ToolBarWidget->setWindowTitle(QCoreApplication::translate("ToolBarWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ToolBarWidget", "\345\210\233\345\273\272\346\241\266", nullptr));
        btnUpload->setText(QCoreApplication::translate("ToolBarWidget", "\344\270\212\344\274\240", nullptr));
        btndownload->setText(QCoreApplication::translate("ToolBarWidget", "\344\270\213\350\275\275", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ToolBarWidget", "\345\210\267\346\226\260", nullptr));
        btnquit->setText(QCoreApplication::translate("ToolBarWidget", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ToolBarWidget", "\344\274\240\350\276\223\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToolBarWidget: public Ui_ToolBarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBARWIDGET_H
