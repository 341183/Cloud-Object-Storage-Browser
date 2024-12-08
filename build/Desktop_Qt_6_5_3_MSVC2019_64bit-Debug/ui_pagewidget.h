/********************************************************************************
** Form generated from reading UI file 'pagewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEWIDGET_H
#define UI_PAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QComboBox *comboBox_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *PageWidget)
    {
        if (PageWidget->objectName().isEmpty())
            PageWidget->setObjectName("PageWidget");
        PageWidget->resize(505, 41);
        horizontalLayout = new QHBoxLayout(PageWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(273, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(PageWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(PageWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(PageWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(25, 16777215));

        horizontalLayout->addWidget(pushButton);

        comboBox_2 = new QComboBox(PageWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout->addWidget(comboBox_2);

        pushButton_2 = new QPushButton(PageWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(25, 16777215));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(PageWidget);

        QMetaObject::connectSlotsByName(PageWidget);
    } // setupUi

    void retranslateUi(QWidget *PageWidget)
    {
        PageWidget->setWindowTitle(QCoreApplication::translate("PageWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("PageWidget", "\346\257\217\351\241\265\346\230\276\347\244\272\350\241\214\346\225\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("PageWidget", "10", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("PageWidget", "20", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("PageWidget", "50", nullptr));

        pushButton->setText(QCoreApplication::translate("PageWidget", "<", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("PageWidget", "1", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("PageWidget", "2", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("PageWidget", "3", nullptr));

        pushButton_2->setText(QCoreApplication::translate("PageWidget", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageWidget: public Ui_PageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEWIDGET_H
