#include "fileheleper.h"

#include <QFile>
#include <QJsonDocument>

FileHeleper::FileHeleper() {}

QString FileHeleper::readAllTxt(const QString &Path)
{
    QFile file(Path);
    if(file.exists() && file.open(QIODevice::ReadOnly))
    {
        QString data = file.readAll();
        file.close();
        return data;
    }
    throw "读取文件失败";
}

QVariant FileHeleper::readAllJsom(const QString &filepath)
{
    QString data = readAllTxt(filepath);
    QJsonDocument doc = QJsonDocument::fromJson(data.toUtf8().data());
    return doc.toVariant();
}
