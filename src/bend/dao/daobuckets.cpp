#include "daobuckets.h"

#include <src/heleper/fileheleper.h>

#include <QJsonArray>

DaoBuckets::DaoBuckets() {}

QList<MyBucket> DaoBuckets::bucketsFromMock(const QString &path)
{
    QList<MyBucket> res;
    QVariant var = FileHeleper::readAllJsom(path);
    QJsonArray arr = var.toJsonArray();
    for(int i = 0 ; i < arr.count() ; ++ i)
    {
        QJsonValue v = arr[i];
        MyBucket bucket;
        bucket.name = v["name"].toString();
        bucket.location = v["location"].toString();
        bucket.createDate = v["create_date"].toString();

        //qDebug() << bucket.name << bucket.location << bucket.createDate;
        res.append(bucket);
    }

    return res;
}
