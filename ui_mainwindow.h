/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAddRow;
    QAction *actionDeleteRow;
    QAction *actionUpdateRow;
    QAction *actionOpenRepair;
    QAction *actionHelpBrowser;
    QAction *actionOpenStaff;

    QAction *actionOpenDelivery;
    QAction *actionOpenEmployee;
    QAction *actionOpenGoods;
    QAction *actionOpenMainten_serv;
    QAction *actionOpenOn_storage;
    QAction *actionOpenOrder_;
    QAction *actionOpenPosition;
    QAction *actionOpenSchedule;
    QAction *actionOpenSold_good;
    QAction *actionOpenSupplier;


    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTableState;
    QSpacerItem *horizontalSpacer;
    QTableView *tableViewMain;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_3;
    QMenu *menu_2;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 548);
        MainWindow->setMinimumSize(QSize(200, 200));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:\\Users\\User\\Documents\\BigLaba\\images\\logo-screen.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAddRow = new QAction(MainWindow);
        actionAddRow->setObjectName(QString::fromUtf8("actionAddRow"));
        actionDeleteRow = new QAction(MainWindow);
        actionDeleteRow->setObjectName(QString::fromUtf8("actionDeleteRow"));
        actionUpdateRow = new QAction(MainWindow);
        actionUpdateRow->setObjectName(QString::fromUtf8("actionUpdateRow"));
        actionOpenRepair = new QAction(MainWindow);
        actionOpenRepair->setObjectName(QString::fromUtf8("actionOpenRepair"));
        actionHelpBrowser = new QAction(MainWindow);
        actionHelpBrowser->setObjectName(QString::fromUtf8("actionHelpBrowser"));
        actionOpenStaff = new QAction(MainWindow);
        actionOpenStaff->setObjectName(QString::fromUtf8("actionOpenStaff"));

        actionOpenDelivery = new QAction(MainWindow);
        actionOpenDelivery->setObjectName(QString::fromUtf8("actionOpenDelivery"));
        actionOpenEmployee = new QAction(MainWindow);
        actionOpenEmployee->setObjectName(QString::fromUtf8("actionOpenEmployee"));
        actionOpenGoods = new QAction(MainWindow);
        actionOpenGoods->setObjectName(QString::fromUtf8("actionOpenGoods"));
        actionOpenMainten_serv = new QAction(MainWindow);
        actionOpenMainten_serv->setObjectName(QString::fromUtf8("actionOpenMainten_serv"));
        actionOpenOn_storage = new QAction(MainWindow);
        actionOpenOn_storage->setObjectName(QString::fromUtf8("actionOpenOn_storage"));
        actionOpenOrder_ = new QAction(MainWindow);
        actionOpenOrder_->setObjectName(QString::fromUtf8("actionOpenOrder_"));
        actionOpenPosition = new QAction(MainWindow);
        actionOpenPosition->setObjectName(QString::fromUtf8("actionOpenPosition"));
        actionOpenSchedule = new QAction(MainWindow);
        actionOpenSchedule->setObjectName(QString::fromUtf8("actionOpenSchedule"));
        actionOpenSold_good = new QAction(MainWindow);
        actionOpenSold_good->setObjectName(QString::fromUtf8("actionOpenSold_good"));
        actionOpenSupplier = new QAction(MainWindow);
        actionOpenSupplier->setObjectName(QString::fromUtf8("actionOpenSupplier"));

        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelTableState = new QLabel(centralWidget);
        labelTableState->setObjectName(QString::fromUtf8("labelTableState"));
        horizontalLayout->addWidget(labelTableState);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
        horizontalLayout->addItem(horizontalSpacer);
        verticalLayout->addLayout(horizontalLayout);
        tableViewMain = new QTableView(centralWidget);
        tableViewMain->setObjectName(QString::fromUtf8("tableViewMain"));
        verticalLayout->addWidget(tableViewMain);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_3 = new QMenu(menu);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menu->addAction(menu_3->menuAction());
        menu->addSeparator();
        menu->addAction(actionExit);
        menu_3->addAction(actionOpenRepair);
        menu_3->addAction(actionOpenStaff);
        menu_3->addAction(actionOpenDelivery);
        menu_3->addAction(actionOpenEmployee);
        menu_3->addAction(actionOpenDelivery);
        menu_3->addAction(actionOpenGoods);
        menu_3->addAction(actionOpenMainten_serv);
        menu_3->addAction(actionOpenOn_storage);
        menu_3->addAction(actionOpenOrder_);
        menu_3->addAction(actionOpenPosition);
        menu_3->addAction(actionOpenSchedule);
        menu_3->addAction(actionOpenSupplier);

        menu_2->addAction(actionAddRow);
        menu_2->addAction(actionUpdateRow);
        menu_2->addAction(actionDeleteRow);
        menu_4->addAction(actionHelpBrowser);
        retranslateUi(MainWindow);
        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Service Station", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        actionAddRow->setText(QApplication::translate("MainWindow", "Insert", nullptr));
        actionDeleteRow->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        actionUpdateRow->setText(QApplication::translate("MainWindow", "Update", nullptr));

        actionOpenDelivery->setText(QApplication::translate("MainWindow", "Delivery", nullptr));
        actionOpenEmployee->setText(QApplication::translate("MainWindow", "Employee", nullptr));
        actionOpenGoods->setText(QApplication::translate("MainWindow", "Goods", nullptr));
        actionOpenMainten_serv->setText(QApplication::translate("MainWindow", "Mainten_serv", nullptr));
        actionOpenOn_storage->setText(QApplication::translate("MainWindow", "On_storage", nullptr));
        actionOpenOrder_->setText(QApplication::translate("MainWindow", "Order_", nullptr));
        actionOpenPosition->setText(QApplication::translate("MainWindow", "Position", nullptr));
        actionOpenRepair->setText(QApplication::translate("MainWindow", "Repair", nullptr));
        actionOpenSchedule->setText(QApplication::translate("MainWindow", "Schedule", nullptr));
        actionOpenSold_good->setText(QApplication::translate("MainWindow", "Sold_good", nullptr));
        actionOpenSupplier->setText(QApplication::translate("MainWindow", "Supplier", nullptr));
        actionOpenRepair->setText(QApplication::translate("MainWindow", "Repair", nullptr));
        actionOpenStaff->setText(QApplication::translate("MainWindow", "Staff", nullptr));

        actionHelpBrowser->setText(QApplication::translate("MainWindow", "About program", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "Overview", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "Get data from", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menu_4->setTitle(QApplication::translate("MainWindow", "About", nullptr));
#ifndef QT_NO_STATUSTIP
        statusBar->setStatusTip(QApplication::translate("MainWindow", "Status bar", nullptr));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
