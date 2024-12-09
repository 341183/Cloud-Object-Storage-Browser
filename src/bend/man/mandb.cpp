#include "mandb.h"
#include <QDateTime>


Q_GLOBAL_STATIC(ManDb,ins)

ManDb::ManDb(QObject *parent)
    : QObject{parent}
{}

ManDb *ManDb::instance()
{
    return ins();
}

void ManDb::init()
{
    m_daologinfo.connect();
    m_daologinfo.CreateTable();
    m_loginInfoList = m_daologinfo.select();
}

void ManDb::saveLoginInfo(const QString &name, const QString &id, const QString &key, const QString &remark)
{
    LoginInfo info;
    info.name = (name == "" ? id : name);
    info.secret_id = id.trimmed();
    info.secret_key = key.trimmed();
    info.remark = remark.trimmed();
    info.timestamp = QDateTime::currentDateTimeUtc().toSecsSinceEpoch();
    if(m_daologinfo.exists(info.secret_id))
    {
        m_daologinfo.update(info);
        m_loginInfoList[indexOfLoginInfo(info.secret_id)] = info;
    }
    else
    {
        m_daologinfo.insert(info);
        m_loginInfoList.append(info);
    }
}

void ManDb::removeLogInfo(const QString &id)
{
    if(m_daologinfo.exists(id))
    {
        m_daologinfo.remove(id);
        m_loginInfoList.removeAt(indexOfLoginInfo(id));
    }
}

int ManDb::indexOfLoginInfo(const QString &secretId)
{
    for(int i = 0 ; i < m_loginInfoList.size(); ++ i)
    {
        if(m_loginInfoList[i].secret_id == secretId)
        {
            return i;
        }
    }

    throw QString::fromUtf8("获取登录信息索引失败 %1").arg(secretId);
}

LoginInfo ManDb::loginInfoByName(const QString &name)
{
    for(int i = 0 ; i < m_loginInfoList.size() ; ++ i)
    {
        if(m_loginInfoList[i].name == name)
        {
            return m_loginInfoList[i];
        }
    }
    throw QString::fromUtf8("获取登录信息失败");
}

QStringList ManDb::loginNameList()
{
    QStringList retList;
    for(int i = 0 ; i < m_loginInfoList.size() ; ++ i)
    {
        retList.append(m_loginInfoList[i].name);
        qDebug() << m_loginInfoList[i].name;
    }
    return retList;
}

