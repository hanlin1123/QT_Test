#ifndef COLLATIONMANAGER_H
#define COLLATIONMANAGER_H


#include "common/global.h"
#include <QList>
#include <QSharedPointer>
#include <QObject>
#include <QStringList>

class Db;

class CollationManager : public QObject
{
    Q_OBJECT

    public:
        struct Collation
        {
            QString name;
            QString lang;
            QString code;
            QStringList databases;
            bool allDatabases = true;
        };

        typedef QSharedPointer<Collation> CollationPtr;

        virtual void setCollations(const QList<CollationPtr>& newCollations) = 0;
        virtual QList<CollationPtr> getAllCollations() const = 0;
        virtual QList<CollationPtr> getCollationsForDatabase(const QString& dbName) const = 0;
        virtual int evaluate(const QString& name, const QString& value1, const QString& value2) = 0;
        virtual int evaluateDefault(const QString& value1, const QString& value2) = 0;

    signals:
        void collationListChanged();
};

#define COLLATIONS SQLITESTUDIO->getCollationManager()

#endif // COLLATIONMANAGER_H
