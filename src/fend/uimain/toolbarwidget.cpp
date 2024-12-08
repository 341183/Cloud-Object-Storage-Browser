#include "toolbarwidget.h"
#include "ui_toolbarwidget.h"

#include <QFileDialog>
#include <QSignalMapper>

ToolBarWidget::ToolBarWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ToolBarWidget)
{
    ui->setupUi(this);
    //connect(ui->btnquit,&QPushButton::clicked,this,&ToolBarWidget::QuitLogin);
    QSignalMapper *mapper = new QSignalMapper(this);
    QList<QPushButton*> buttonlist = findChildren<QPushButton*>();
    for(auto btn : buttonlist)
    {
        connect(btn,SIGNAL(clicked()),mapper,SLOT(map()));
        mapper->setMapping(btn,btn->text());
    }
    connect(mapper,&QSignalMapper::mappedString,this,&ToolBarWidget::buttonClicked);
}

ToolBarWidget::~ToolBarWidget()
{
    delete ui;
}



// void ToolBarWidget::on_btndownload_clicked()
// {
//     //下载
//     QString path = QFileDialog::getSaveFileName(this,QString::fromUtf8("下载"),"./");
//     qDebug() << path;
// }


// void ToolBarWidget::on_btnUpload_clicked()
// {
//     //上传单个文件
//     // QString path = QFileDialog::getOpenFileName(this,QString::fromUtf8("上传"),"./");
//     // qDebug(path.toUtf8().data());

//     //上传多个文件
//     //QStringList path = QFileDialog::getOpenFileNames(this,QString::fromUtf8("上传"),"./");

//     //上传多个文件  指定类型
//     // QStringList path = QFileDialog::getOpenFileNames(this,QString::fromUtf8("上传"),"./","hpp(*.h *.cpp);;M(*.Release *.Debug )");
//     // qDebug() << path;

//     //上传文件夹
//     QString path = QFileDialog::getExistingDirectory(this,QString::fromUtf8("上传"),"./");
//     qDebug() << path;


// }



