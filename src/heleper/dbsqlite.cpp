#include "dbsqlite.h"

#include <qDebug>
#include <QDir>
#include <QSqlError>
#include <QSqlRecord>


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
        throw QString::fromUtf8("连接失败");
    }
}

QSqlQuery DbSqlite::exec(const QString &sql)
{
    QSqlQuery query;
    if(!query.exec(sql))
    {
        throw QString::fromUtf8("执行sql失败：%1 %2").arg(sql,query.lastError().text());
    }
    return query;
}

bool DbSqlite::exists(const QString &sql)
{
    QSqlQuery query = exec(sql);
    return query.next();
}

QList<QMap<QString, QVariant> > DbSqlite::select(const QString &sql)
{
    QList<RECORD> retList;
    QSqlQuery query = exec(sql);

    while(query.next())
    {
        RECORD ret;

        //QSqlRecord 相当于数据库中的一行记录
        QSqlRecord record = query.record();
        for(int i = 0 ; i < record.count() ; ++ i)
        {
            QString name = record.fieldName(i);
            QVariant value = record.value(i);
            ret[name] = value;
        }
        qDebug() << QString::fromUtf8("查询出结果:") << ret;
        retList.append(ret);
    }
    return retList;
}
