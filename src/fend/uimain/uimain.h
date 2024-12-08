#ifndef UIMAIN_H
#define UIMAIN_H

#include <QWidget>

namespace Ui {
class UiMain;
}

class LoginDialog;

class UiMain : public QWidget
{
    Q_OBJECT

public:
    explicit UiMain(QWidget *parent = nullptr);
    ~UiMain();

    void showLoginDialog();
    void onclikedchange();

private:
    Ui::UiMain *ui;
    LoginDialog *m_logindialog = nullptr;

    // enum btn_name {
    //     download = 1,
    //     upload,
    //     quit
    // };

    void downloadclicked();
protected slots:
    void onbuttonclicked(const QString &text);

signals:
    void chanegStyle();
};

#endif // UIMAIN_H
