#ifndef FILEHELEPER_H
#define FILEHELEPER_H

#include <QString>
#include <QVariant>


class FileHeleper
{
public:
    FileHeleper();
    static QString readAllTxt(const QString& Path);
    static QVariant readAllJsom(const QString &filepath);

    static QString joinPath(const QString &path1,const QString &path2);
    static bool mkPath(const QString &path);
};

#endif // FILEHELEPER_H
