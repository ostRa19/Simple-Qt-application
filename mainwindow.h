#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "dbconnect.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    DbAdapter *adapter = nullptr;
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void configureToolBars();
    void configureActions();

protected:
    virtual void closeEvent(QCloseEvent*);

private:
    Ui::MainWindow *ui;
    bool tableFilled;

private slots:
    void exitApp();
    void openRepair();
    void openStaff();
    void openDelivery();
    void openEmployee();
    void openGoods();
    void openMainten_serv();
    void openOn_storage();
    void openOrder_();
    void openPosition();
    void openSchedule();
    void openSold_good();
    void openSupplier();
    void addRow();
    void deleteRow();
    void updateRow();
    void showHelpBrowser();
};

#endif // MAINWINDOW_H
