#ifndef TOOLBARWIDGET_H
#define TOOLBARWIDGET_H

#include <QWidget>

namespace Ui {
class ToolBarWidget;
}

class ToolBarWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ToolBarWidget(QWidget *parent = nullptr);
    ~ToolBarWidget();

signals:
    //void QuitLogin();
    void buttonClicked(const QString& text);

// private slots:
//     void on_btndownload_clicked();

//     void on_btnUpload_clicked();

private:
    Ui::ToolBarWidget *ui;
};

#endif // TOOLBARWIDGET_H
