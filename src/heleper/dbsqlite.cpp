#include "dbsqlite.h"
#include "qdebug.h"
#include <QDir>
#include <QSqlError>

DbSqlite::DbSqlite() {
    m_db = QSqlDatabase::addDatabase("QSQLITE");
}

DbSqlite::~DbSqlite()
{
    if(m_db.isOpen())
    {
        m_db.close();
    }
}

void DbSqlite::connect(const QString &dbPath)
{
    m_db.setDatabaseName(dbPath);
    if(!m_db.open())
    {
        throw QString::fromUtf8("打开数据库失败： %1 %2").arg(dbPath,m_db.lastError().text());
    }
}
