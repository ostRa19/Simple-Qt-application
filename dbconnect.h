#ifndef DBADAPTER_H
#define DBADAPTER_H
#include <QtSql>
#include <QTableView>
#include <QSqlDatabase>
class DbAdapter
{
public:
    DbAdapter();
    ~DbAdapter();
    DbAdapter(QString adapterType);
    DbAdapter(DbAdapter* adapter);
    bool createConnection();
    bool executeQuery(QString sqlCode);
    bool fillTable(QTableView* table, QString selectQuery);

public:
    QSqlDatabase db;
    QSqlQueryModel model;
};

#endif // DBADAPTER_H
