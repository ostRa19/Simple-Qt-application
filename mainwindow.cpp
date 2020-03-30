#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rowdatadialog.h"
#include "helpbrowser.h"
#include <QMessageBox>
#include <QtEvents>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    configureActions();
    configureToolBars();
    tableFilled = false;
    setWhatsThis("<i>Рабочая область приложения.</i>\nВ ней можно совершать CRUD операции с базой данных.");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::configureToolBars()
{
    ui->mainToolBar->addAction(ui->actionAddRow);
    ui->mainToolBar->addAction(ui->actionUpdateRow);
    ui->mainToolBar->addAction(ui->actionDeleteRow);
}

void MainWindow::configureActions()
{
    ui->actionExit->setIcon(QIcon("C:\\Users\\User\\Documents\\BigLaba\\images\\icons\\exit.png"));
    ui->actionExit->setShortcuts(QKeySequence::Quit);
    ui->actionExit->setToolTip("Exit");
    ui->actionExit->setStatusTip(tr("Exit this application"));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(exitApp()));

    ui->actionAddRow->setIcon(QIcon("C:\\Users\\User\\Documents\\BigLaba\\images\\icons\\add.png"));
    ui->actionAddRow->setShortcuts(QKeySequence::New);
    ui->actionAddRow->setToolTip("Add row to current table");
    ui->actionAddRow->setStatusTip(tr("Add row to current table"));
    connect(ui->actionAddRow, SIGNAL(triggered()), this, SLOT(addRow()));

    ui->actionDeleteRow->setIcon(QIcon("C:\\Users\\User\\Documents\\BigLaba\\images\\icons\\delete.png"));
    ui->actionDeleteRow->setShortcut(Qt::Key_Delete);
    ui->actionDeleteRow->setToolTip("Delete selected row from current table");
    ui->actionDeleteRow->setStatusTip(tr("Delete selected row from current table"));
    connect(ui->actionDeleteRow, SIGNAL(triggered()), this, SLOT(deleteRow()));

    ui->actionUpdateRow->setIcon(QIcon("C:\\Users\\User\\Documents\\BigLaba\\images\\icons\\update.png"));
    ui->actionUpdateRow->setShortcut(Qt::CTRL+Qt::Key_U);
    ui->actionUpdateRow->setToolTip("Update selected row in current table");
    ui->actionUpdateRow->setStatusTip(tr("Update selected row in current table"));
    connect(ui->actionUpdateRow, SIGNAL(triggered()), this, SLOT(updateRow()));

    ui->actionOpenRepair->setToolTip("Open table Repair");
    ui->actionOpenRepair->setStatusTip(tr("Open table Repair"));
    connect(ui->actionOpenRepair, SIGNAL(triggered()), this, SLOT(openRepair()));

    ui->actionOpenStaff->setToolTip("Open table Staff");
    ui->actionOpenStaff->setStatusTip(tr("Open table Staff"));
    connect(ui->actionOpenStaff, SIGNAL(triggered()), this, SLOT(openStaff()));

    ui->actionHelpBrowser->setIcon(QIcon("C:\\Users\\User\\Documents\\BigLaba\\images\\icons\\about.png"));
    ui->actionHelpBrowser->setToolTip("Open help browser");
    ui->actionHelpBrowser->setStatusTip(tr("Open browser"));
    connect(ui->actionHelpBrowser, SIGNAL(triggered()), this, SLOT(showHelpBrowser())); //about
}

void MainWindow::exitApp()
{
    this->close();
}

void MainWindow::openRepair()
{
    if(adapter == nullptr)
        adapter = new DbAdapter();
    if(adapter->createConnection())
    {
        tableFilled = adapter->fillTable(ui->tableViewMain, "SELECT * FROM Repair");
        if(tableFilled)
            ui->labelTableState->setText("Таблица Repair.");
    }
    else
    {
        QMessageBox::critical(this, "Ошибка", "Не удалось подключиться к БД!");
        tableFilled = false;
    }
}

void MainWindow::openStaff()
{
    if(adapter == nullptr)
        adapter = new DbAdapter();
    if(adapter->createConnection())
    {
        tableFilled = adapter->fillTable(ui->tableViewMain, "SELECT * FROM Staff");
        if(tableFilled)
            ui->labelTableState->setText("Таблица Staff.");
    }
    else
    {
        QMessageBox::critical(this, "Ошибка", "Не удалось подключиться к БД!");
        tableFilled = false;
    }

}
void MainWindow::openDelivery(){}
void MainWindow::openEmployee(){}
void MainWindow::openGoods(){}
void MainWindow::openMainten_serv(){}
void MainWindow::openOn_storage(){}
void MainWindow::openOrder_(){}
void MainWindow::openPosition(){}
void MainWindow::openSchedule(){}
void MainWindow::openSold_good(){}
void MainWindow::openSupplier(){}

void MainWindow::addRow()
{
    if(tableFilled)
    {
        if(adapter == nullptr)
            adapter = new DbAdapter();
        if(adapter->createConnection())
        {
       QSqlQuery query;
        QString strF =
              "INSERT INTO  Repair (  name_,description_, price) "
              "VALUES( '%2', '%3', '%4');";
      QString   str ;
        str = strF
                  .arg("1006")
                  .arg("замена руля")
                  .arg("650");
        if (!query.exec(str)) {
            qDebug() << "Unable to make insert operation";
        }
        }
        else
        {
            QMessageBox::critical(this, "Ошибка", "Не удалось подключиться к БД!");
            tableFilled = false;
        }
    }
    else
        QMessageBox::information(this, "Подсказка", "Сначала выберите таблицу в меню Overview");
}

void MainWindow::updateRow()
{
    if(tableFilled)
    {
        if(adapter == nullptr)
            adapter = new DbAdapter();
        if(adapter->createConnection())
        {
       QSqlQuery query;
        QString strF =
              "Update Repair SET price='6400' "
              "WHERE description_=( '%2');";
      QString   str ;
        str = strF
                  .arg("hard repair");
           if (!query.exec(str)) {
            qDebug() << "Unable to make insert operation";
        }
        }
        else
        {
            QMessageBox::critical(this, "Ошибка", "Не удалось подключиться к БД!");
            tableFilled = false;
        }
    }
    else
        QMessageBox::information(this, "Подсказка", "Сначала выберите таблицу в меню Overview");
}

void MainWindow::deleteRow()
{
    if(tableFilled)
    {
        if(adapter == nullptr)
            adapter = new DbAdapter();
        if(adapter->createConnection())
        {
       QSqlQuery query;
        QString strF =
              "DELETE Repair WHERE price=( '%2') ";
      QString   str ;
        str = strF
                  .arg("650");
           if (!query.exec(str)) {
            qDebug() << "Unable to make insert operation";
        }
        }
        else
        {
            QMessageBox::critical(this, "Ошибка", "Не удалось подключиться к БД!");
            tableFilled = false;
        }
    }
    else
        QMessageBox::information(this, "Подсказка", "Сначала выберите таблицу в меню Overview");
}

void MainWindow::showHelpBrowser()
{
    HelpBrowser *brwsr = new HelpBrowser("C:\\Users\\User\\Documents\\BigLaba\\doc", "index.htm");
    brwsr->resize(400, 300);
    brwsr->show();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (QMessageBox::question(this, tr("Подтверждение выхода"), tr("Подтвердить выход из приложения?"), QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
        event->accept();
    else
        event->ignore();
}

