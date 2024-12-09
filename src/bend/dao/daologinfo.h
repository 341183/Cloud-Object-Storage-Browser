#ifndef DAOLOGINFO_H
#define DAOLOGINFO_H

#include <src/heleper/dbsqlite.h>

#include <src/bend/models/dbmodels.h>

class DaoLoginfo
{
public:
    DaoLoginfo();

    bool exists(const QString &secretld);
    void insert(const LoginInfo& info);
    void update(const LoginInfo &info);
    void remove(const QString &secretld);

    void connect();
    void CreateTable();

    QList<LoginInfo> select();
private:
    DbSqlite m_db;
};

#endif // DAOLOGINFO_H
