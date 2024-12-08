#ifndef MANBUCKETS_H
#define MANBUCKETS_H

#include <QObject>
#include <QStandardItemModel>
#define MB ManBuckets::instance()

class ManBuckets : public QObject
{
    Q_OBJECT
public:
    explicit ManBuckets(QObject *parent = nullptr);

    static ManBuckets *instance();

    void setBuckets();

    QStandardItemModel *model() const;

private:
    QStandardItemModel *m_model = nullptr;

signals:
};

#endif // MANBUCKETS_H
