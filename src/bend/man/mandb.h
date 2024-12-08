#ifndef MANDB_H
#define MANDB_H

#include <QObject>

class ManDb : public QObject
{
    Q_OBJECT
public:
    explicit ManDb(QObject *parent = nullptr);

signals:
};

#endif // MANDB_H
