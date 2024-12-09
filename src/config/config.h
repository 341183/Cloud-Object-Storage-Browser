#ifndef CONFIG_H
#define CONFIG_H

#include <QString>
#include <QDir>
#include "src/heleper/fileheleper.h"

namespace CONF{
namespace PATH{
static const QString WORK = QDir::currentPath();
static const QString TMP = FileHeleper::joinPath(WORK,"tmp");
};

namespace SQLITE
{
static const QString NAME = FileHeleper::joinPath(PATH::TMP,"cos.db");
};

namespace SQL
{
static const QString LOGIN_INFO_TABLE = ":/static/sql/login_info.sql";
};

namespace TABLES
{
static const QString LOGIN_INFO = "login_info";
};


static bool init(){return FileHeleper::mkPath(PATH::TMP);}
static bool OK = init();
}

#endif // CONFIG_H
