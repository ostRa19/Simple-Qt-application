#include "dbconnect.h"

DbAdapter::DbAdapter()
{
    db = QSqlDatabase::addDatabase("QODBC3");//QMYSQL
}

DbAdapter::~DbAdapter()
{
}

DbAdapter::DbAdapter(QString adapterType)
{
    db = QSqlDatabase::addDatabase(adapterType);
}

DbAdapter::DbAdapter(DbAdapter* adapter)
{
    this->db = adapter->db;
}

bool DbAdapter::createConnection()
{
    if (db.isOpen()) return true;
    else if(db.open()) return true;
    db.setDatabaseName("DRIVER={SQL Server};SERVER=LAPTOP-LNO34RK6;Trusted_Connection=Yes; DATABASE=TSS;");
    if (!db.open())
    {
        qDebug() << "Cannot open database:" << db.lastError();
        return false;
    }
    else
    {
        QSqlQuery* query = new QSqlQuery(db);
        query->exec("SELECT name FROM master.dbo.sysdatabases");
        qDebug() << "Connected to server" << db.hostName() << " with databases:";
        while(query->next())
            qDebug() << query->value(0).toString();
        query->clear();
        delete query;
        return true;
    }
}

bool DbAdapter::executeQuery(QString sqlCode)
{
    if (db.isOpen())
    {
        QSqlQuery* query = new QSqlQuery(db);
        if(query->exec(sqlCode))
        {
            return true;
        }
        else
            qDebug() << "Query error:" << db.lastError();

    }
    else
    {
        db.open();
        return executeQuery(sqlCode);
    }
    return false;
}

bool DbAdapter::fillTable(QTableView* table, QString selectQuery)
{
    if (db.isOpen())
    {
        model.setQuery(selectQuery);
        if(model.lastError().isValid())
        {
            qDebug() << "Model error: " << model.lastError();
            return false;
        }
        table->setModel(&model);
        //db.close();
        return true;
    }
    else
    {
        db.open();
        return fillTable(table, selectQuery);
    }
}
