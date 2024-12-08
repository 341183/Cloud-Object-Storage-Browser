#include "objectswidget.h"
#include "src/bend/man/manbuckets.h"
#include "ui_objectswidget.h"

#include <src/fend/uidelegates/bucketdelegate.h>

ObjectsWidget::ObjectsWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ObjectsWidget)
{
    ui->setupUi(this);
    ui->tableView->setModel(MB->model());
    //ui->tableView->setItemDelegate(new BucketDelegate);
    ui->tableView->setItemDelegateForColumn(1,new BucketDelegate);

    QStandardItemModel *model = MB->model();
    QStringList labels;
    labels << QString::fromUtf8("桶名称")
           << QString::fromUtf8("地区")
           << QString::fromUtf8("创建日期");
    model->setColumnCount(labels.count());
    model->setHorizontalHeaderLabels(labels);

    //设置水平宽度
    ui->tableView->setColumnWidth(0,200);
    ui->tableView->setColumnWidth(1,120);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    //隐藏垂直标题
    ui->tableView->verticalHeader()->setHidden(true);

    //设置鼠标点击排序
    ui->tableView->setSortingEnabled(true);
}

ObjectsWidget::~ObjectsWidget()
{
    delete ui;
}
