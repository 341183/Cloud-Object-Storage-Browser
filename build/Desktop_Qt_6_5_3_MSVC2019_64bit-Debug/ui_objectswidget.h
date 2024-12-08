/********************************************************************************
** Form generated from reading UI file 'objectswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTSWIDGET_H
#define UI_OBJECTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjectsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QWidget *ObjectsWidget)
    {
        if (ObjectsWidget->objectName().isEmpty())
            ObjectsWidget->setObjectName("ObjectsWidget");
        ObjectsWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(ObjectsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(ObjectsWidget);
        tableView->setObjectName("tableView");
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableView);


        retranslateUi(ObjectsWidget);

        QMetaObject::connectSlotsByName(ObjectsWidget);
    } // setupUi

    void retranslateUi(QWidget *ObjectsWidget)
    {
        ObjectsWidget->setWindowTitle(QCoreApplication::translate("ObjectsWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ObjectsWidget: public Ui_ObjectsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTSWIDGET_H
