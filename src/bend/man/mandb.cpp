#include "mandb.h"

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
    connect();
}

void ManDb::connect()
{
    m_db.connect("./tmp/cos.db");
}
