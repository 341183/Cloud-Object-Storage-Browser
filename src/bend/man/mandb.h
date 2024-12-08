#ifndef MANDB_H
#define MANDB_H

#include <QObject>

#include <src/heleper/dbsqlite.h>
#define MDB ManDb::instance()

class ManDb : public QObject
{
    Q_OBJECT
public:
    explicit ManDb(QObject *parent = nullptr);

     static ManDb *instance();

    void init();
signals:

 private:
    void connect();

    DbSqlite m_db;
};

#endif // MANDB_H
