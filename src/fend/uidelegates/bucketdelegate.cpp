#include "bucketdelegate.h"

#include <QComboBox>

BucketDelegate::BucketDelegate(QObject *parent)
    : QStyledItemDelegate{parent}
{}

QWidget *BucketDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
        QComboBox *box = new QComboBox(parent);
        box->addItem("ap-beijing");
        box->addItem("ap-luohe");
        box->addItem("ap-zz");
        box->setFrame(false);
        return box;
}

void BucketDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    if(index.isValid() == 1){
        QComboBox *box = static_cast<QComboBox*>(editor);
        box->setCurrentText(index.data(Qt::EditRole).toString());
    }
    else{
        QStyledItemDelegate::setEditorData(editor,index);
    }
}

void BucketDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if(index.isValid() == 1){
        QComboBox *box = static_cast<QComboBox*>(editor);
        model->setData(index,box->currentText());
    }
    else{
        QStyledItemDelegate::setModelData(editor,model,index);
    }
}
