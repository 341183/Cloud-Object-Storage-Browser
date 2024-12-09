#include "logindialog.h"
#include "src/bend/man/mandb.h"
#include "ui_logindialog.h"
#include <QMouseEvent>
#include <QMessageBox>
#include <QCompleter>

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    setWindowFlags(Qt::CustomizeWindowHint);

    //设置窗口图标
    //QPixmap pixmap("C:/Users/12527/Desktop/zpj.jpg");
    //ui->label_logo->setPixmap(pixmap.scaled(ui->label_logo->size()));

    //安装事件过滤器
    ui->lineEdit_key->installEventFilter(this);

    //代码改变样式
    //ui->btn_login->setStyleSheet(QString("QPushButton{font-size : 20pt; background-color : red;}"));

    ui->label_litle->setProperty("style","h3");
    ui->label_name->setProperty("style","h4");
    ui->label_id->setProperty("style","h4");
    ui->label_key->setProperty("style","h4");
    ui->label_remark->setProperty("style","h4");
    ui->btn_close->setProperty("style","h4");
    ui->btn_login->setProperty("style","h4");

    //点击变换主题样式按钮 发送信号clicked到logindialog的槽函数  logindialog的槽函数发送信号到uimain 再由uimain发送信号到QApplication
    connect(ui->btn_change,&QPushButton::clicked,this,&LoginDialog::onbtnchangeclicked);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::updateLoginInfo()
{
    QStringList words = MDB->loginNameList();;
    qDebug() << words;
    QCompleter *completer = new QCompleter(words);
    ui->lineEdit_name->setCompleter(completer);

    connect(completer, static_cast<void (QCompleter::*)(const QString &)>(&QCompleter::activated),this,
            [&](const QString &name){
                LoginInfo info = MDB->loginInfoByName(name);
                ui->lineEdit_id->setText(info.secret_id);
                ui->lineEdit_key->setText(info.secret_key);
                ui->lineEdit_remark->setText(info.remark);
                ui->checkSaveSection->setChecked(true);
    });
}

//拖动窗口功能
void LoginDialog::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_start = event->pos();
    }

    QDialog::mousePressEvent(event);
}

void LoginDialog::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() == 0x3) qDebug() << event->button();
    if(event->buttons() & Qt::LeftButton)
    {
        QPoint targetPos = event->pos() - m_start + pos();
        this->move(targetPos);
    }
    QDialog::mouseMoveEvent(event);
}

//事件过滤器
bool LoginDialog::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->lineEdit_key)
    {
        if(event->type() == QEvent::KeyPress)
        {
            QKeyEvent *KeyEvent = static_cast<QKeyEvent*>(event);
            if(KeyEvent->modifiers() == Qt::ControlModifier)
            {
                if(KeyEvent->key() == Qt::Key_C || KeyEvent->key() == Qt::Key_V)
                {
                    return true;
                }
            }
        }
    }

    return QDialog::eventFilter(watched,event);
}

void LoginDialog::on_btn_login_clicked()
{
    if(ui->lineEdit_id->text().trimmed() == "jnea" && ui->lineEdit_key->text() == "341183")
    {
        accept();
        if(ui->checkSaveSection->isChecked())
        {
            //保留登录信息
            MDB->saveLoginInfo(
                ui->lineEdit_name->text(),
                ui->lineEdit_id->text(),
                ui->lineEdit_key->text(),
                ui->lineEdit_remark->text());
        }
        else
        {
            //删除登录信息
            MDB->removeLogInfo(ui->lineEdit_id->text());
        }
        updateLoginInfo();
    }
    else
    {
        QMessageBox::warning(this,QString::fromUtf8("登录失败"),QString::fromUtf8("请检查用户名或密码是否正确"));
    }
}


void LoginDialog::on_btn_close_clicked()
{
    reject();
}

void LoginDialog::onbtnchangeclicked()
{
    emit LoginDialog::touimain();
}
