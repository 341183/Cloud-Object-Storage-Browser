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
};

#endif // FILEHELEPER_H
