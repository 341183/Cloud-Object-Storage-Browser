/********************************************************************************
** Form generated from reading UI file 'bucketswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUCKETSWIDGET_H
#define UI_BUCKETSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BucketsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QListView *listView;

    void setupUi(QWidget *BucketsWidget)
    {
        if (BucketsWidget->objectName().isEmpty())
            BucketsWidget->setObjectName("BucketsWidget");
        BucketsWidget->resize(297, 300);
        verticalLayout = new QVBoxLayout(BucketsWidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(BucketsWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(BucketsWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        listView = new QListView(BucketsWidget);
        listView->setObjectName("listView");

        verticalLayout->addWidget(listView);


        retranslateUi(BucketsWidget);

        QMetaObject::connectSlotsByName(BucketsWidget);
    } // setupUi

    void retranslateUi(QWidget *BucketsWidget)
    {
        BucketsWidget->setWindowTitle(QCoreApplication::translate("BucketsWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("BucketsWidget", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BucketsWidget: public Ui_BucketsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUCKETSWIDGET_H
