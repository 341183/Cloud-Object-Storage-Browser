#include "fileheleper.h"

#include <QDir>
#include <QFile>
#include <QJsonDocument>
#include <QString>

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

QString FileHeleper::joinPath(const QString &path1, const QString &path2)
{
    QString path = path1 +'/'+ path2;
    QStringList pathlist = path.split("[/\\\\]",Qt::SkipEmptyParts);
    path = pathlist.join(("/"));
    return QDir::cleanPath(path);
}

bool FileHeleper::mkPath(const QString &path)
{
    QDir dir;
    return dir.mkdir(path);
}
