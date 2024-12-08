#include "uimain.h"
#include "ui_uimain.h"

#include <src/fend/uilogin/logindialog.h>

#include <QFileDialog>


UiMain::UiMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiMain)
{
    ui->setupUi(this);
    ui->splitter->setStretchFactor(0,1);
    ui->splitter->setStretchFactor(1,4);

    connect(ui->WidgetBar,&ToolBarWidget::buttonClicked,this,&UiMain::onbuttonclicked);
}

UiMain::~UiMain()
{
    delete ui;
    if(m_logindialog != nullptr)
    {
        delete m_logindialog;
    }
}

void UiMain::showLoginDialog()
{
    if(m_logindialog == nullptr)
    {
        m_logindialog = new LoginDialog();
        //m_logindialog->show();
        connect(m_logindialog,&LoginDialog::accepted,this,&UiMain::show);
        //connect(ui->WidgetBar,&ToolBarWidget::QuitLogin,this,&UiMain::showLoginDialog);
        connect(m_logindialog,&LoginDialog::touimain,this,&UiMain::onclikedchange);
    }

    hide();
    m_logindialog->show();
}

void UiMain::onclikedchange()
{
    emit UiMain::chanegStyle();
}

void UiMain::onbuttonclicked(const QString &text)
{
    qDebug() << text;
    if(text == "退出登录")
    {
        showLoginDialog();
    }
    else if(text == "下载")
    {
        downloadclicked();
    }
}

void UiMain::downloadclicked()
{
    //下载
    QString path = QFileDialog::getSaveFileName(this,QString::fromUtf8("下载"),"./");
    qDebug() << path;
}


