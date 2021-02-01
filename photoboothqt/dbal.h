#ifndef DBAL_H
#define DBAL_H

#include <QtSql>

class DBAL
{
public:
    DBAL();

private:
    QSqlDatabase* db;
    QSqlError err;
    QString success;
    void connectionBDD();
};

#endif // DBAL_H
