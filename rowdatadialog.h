#ifndef ROWDATADIALOG_H
#define ROWDATADIALOG_H

#include "dbconnect.h"
#include <QDialog>

namespace Ui {
class RowDataDialog;
}

class RowDataDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RowDataDialog(QWidget* parent, bool queryMode /*(insert/update)*/, DbAdapter* adapter);
    ~RowDataDialog();

private:
    Ui::RowDataDialog *ui;
    bool queryModeAdd;
    DbAdapter* adapter;
    void configureLineEdits();

private slots:
    void executeQuery();
};

#endif // ROWDATADIALOG_H
