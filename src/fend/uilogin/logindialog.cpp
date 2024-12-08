#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMouseEvent>
#include <QMessageBox>

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
    ui->lineEdit_mm->installEventFilter(this);

    //代码改变样式
    //ui->btn_login->setStyleSheet(QString("QPushButton{font-size : 20pt; background-color : red;}"));

    ui->label_name->setProperty("style","h3");
    ui->label_yhm->setProperty("style","h4");
    ui->label_mm->setProperty("style","h4");
    ui->btn_close->setProperty("style","h4");
    ui->btn_login->setProperty("style","h4");

    //点击变换主题样式按钮 发送信号clicked到logindialog的槽函数  logindialog的槽函数发送信号到uimain 再由uimain发送信号到QApplication
    connect(ui->btn_change,&QPushButton::clicked,this,&LoginDialog::onbtnchangeclicked);
}

LoginDialog::~LoginDialog()
{
    delete ui;
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
    if(watched == ui->lineEdit_mm)
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
    if(ui->lineEdit_yhm->text().trimmed() == "jnea" && ui->lineEdit_mm->text() == "341183")
    {
        accept();
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
