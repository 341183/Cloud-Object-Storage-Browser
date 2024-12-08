/********************************************************************************
** Form generated from reading UI file 'uimain.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIMAIN_H
#define UI_UIMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/fend/uicomm/breadwidget.h"
#include "src/fend/uicomm/pagewidget.h"
#include "src/fend/uimain/bucketswidget.h"
#include "src/fend/uimain/objectswidget.h"
#include "src/fend/uimain/toolbarwidget.h"

QT_BEGIN_NAMESPACE

class Ui_UiMain
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    BucketsWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    ToolBarWidget *WidgetBar;
    BreadWidget *bread;
    ObjectsWidget *Objects;
    PageWidget *page;

    void setupUi(QWidget *UiMain)
    {
        if (UiMain->objectName().isEmpty())
            UiMain->setObjectName("UiMain");
        UiMain->resize(778, 447);
        horizontalLayout = new QHBoxLayout(UiMain);
        horizontalLayout->setObjectName("horizontalLayout");
        splitter = new QSplitter(UiMain);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        widget = new BucketsWidget(splitter);
        widget->setObjectName("widget");
        splitter->addWidget(widget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        WidgetBar = new ToolBarWidget(layoutWidget);
        WidgetBar->setObjectName("WidgetBar");

        verticalLayout->addWidget(WidgetBar);

        bread = new BreadWidget(layoutWidget);
        bread->setObjectName("bread");

        verticalLayout->addWidget(bread);

        Objects = new ObjectsWidget(layoutWidget);
        Objects->setObjectName("Objects");

        verticalLayout->addWidget(Objects);

        page = new PageWidget(layoutWidget);
        page->setObjectName("page");

        verticalLayout->addWidget(page);

        splitter->addWidget(layoutWidget);

        horizontalLayout->addWidget(splitter);


        retranslateUi(UiMain);

        QMetaObject::connectSlotsByName(UiMain);
    } // setupUi

    void retranslateUi(QWidget *UiMain)
    {
        UiMain->setWindowTitle(QCoreApplication::translate("UiMain", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiMain: public Ui_UiMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMAIN_H
