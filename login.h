#ifndef LOGINAPPDIALOG_H
#define LOGINAPPDIALOG_H

#include <QDialog>

namespace Ui {
class LogInAppDialog;
}

class LogInAppDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogInAppDialog(QWidget *parent = nullptr);
    ~LogInAppDialog();

private:
    Ui::LogInAppDialog *ui;

private slots:
    void validateAuthorization();
};

#endif // LOGINAPPDIALOG_H
