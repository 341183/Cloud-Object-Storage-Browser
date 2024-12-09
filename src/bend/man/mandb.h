#ifndef MANDB_H
#define MANDB_H

#include <QObject>

#include <src/heleper/dbsqlite.h>
#include <src/bend/dao/daologinfo.h>

#define MDB ManDb::instance()

class ManDb : public QObject
{
    Q_OBJECT
public:
    explicit ManDb(QObject *parent = nullptr);

    static ManDb *instance();

    void init();

    void saveLoginInfo(const QString &name,const QString &id,const QString &key,const QString &remark);
    void removeLogInfo(const QString &id);

    int indexOfLoginInfo(const QString &secretId);

    LoginInfo loginInfoByName(const QString &name);

    QStringList loginNameList();
 private:
    DaoLoginfo m_daologinfo;
    QList<LoginInfo> m_loginInfoList;
};

#endif // MANDB_H
