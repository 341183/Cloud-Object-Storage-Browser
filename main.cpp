#include "qdir.h"
#include "src/fend/uimain/uimain.h"

#include <QApplication>
#include <QJsonDocument>
#include <QJsonObject>
#include "src/heleper/fileheleper.h"

#include "src/bend/man/manbuckets.h"

QJsonObject read(const QString &path){
    QFile file(path);
    file.open(QIODevice::ReadOnly);
    //if(file.isOpen()) qDebug() << "111";
    QByteArray data = file.readAll();
    file.close();

    //qDebug() << data;
    QJsonDocument doc = QJsonDocument::fromJson(data);
    return doc.object();
}

void write(const QJsonObject &object,const QString &path)
{
    QFile file(path);
    file.open(QIODevice::WriteOnly);
    QJsonDocument doc(object);
    file.write(doc.toJson());
    file.close();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //读取qss样式表文件
    QString qssStr = FileHeleper::readAllTxt(":/static/qss/default.qss");
    QString qssstr2 = FileHeleper::readAllTxt(":/static/qss/change.qss");
    //设置样式表
    a.setStyleSheet(qssStr);
    //记录当前样式表id
    bool stylest = true;

    UiMain w;
    //显示登录界面
    //w.showLoginDialog();
    w.show();

    //绑定槽  实现切换样式表
    QAction::connect(&w,&UiMain::chanegStyle,&a,[&](){
        if(stylest) a.setStyleSheet(qssstr2);
        else a.setStyleSheet(qssStr);
        stylest = !stylest;
    });

    MB->setBuckets();

    //测试文件系统及QString
 //    QString rootpath = QDir::currentPath();
 //    QString time = QTime::currentTime().toString("hh-mm-ss AP");
 //    QString filepath = QString("%1/logs/%2.log").arg(rootpath,time).replace("-",":");
    // qDebug() << filepath;


    //json文件的读取、使用与修改
    // QJsonObject object = read("F:/download/mksz688-Qt 全流程实战企业级项目 – 云对象存储浏览器（完结）/资料/资料/qtlessons-master/qtlessons/13/13-4/read.json");
    // qDebug() << object;

    // object["object"] = "zpj521..";
    // write(object,QDir::currentPath() + "/write.json");

    //样式表设置
    // a.setStyleSheet(QString("QPushButton{\
    //     font-size : 20pt;\
    //     color : red;\
    //     background-color : green;\
    // }"));
    return a.exec();
}
