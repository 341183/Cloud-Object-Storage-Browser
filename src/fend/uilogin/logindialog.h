#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

    void updateLoginInfo();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    bool eventFilter(QObject *watched, QEvent *event);
private slots:
    void on_btn_login_clicked();

    void on_btn_close_clicked();

    void onbtnchangeclicked();

signals:
    void touimain();

private:
    Ui::LoginDialog *ui;
    QPoint m_start;
};

#endif // LOGINDIALOG_H
