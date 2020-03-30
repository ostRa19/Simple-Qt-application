#include "login.h"
#include "ui_login.h"

LogInAppDialog::LogInAppDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogInAppDialog)
{
    ui->setupUi(this);
    connect(ui->lineEditPassword, SIGNAL(editingFinished()), this, SLOT(validateAuthorization()));
    connect(ui->lineEditPassword, SIGNAL(returnPressed()), this, SLOT(validateAuthorization()));
}

LogInAppDialog::~LogInAppDialog()
{
    delete ui;
}

void LogInAppDialog::validateAuthorization()
{
    if(ui->lineEditLogin->text() != "" && ui->lineEditPassword->text() != "")
    {
        if(ui->lineEditLogin->text() == "11")
        {
            if(ui->lineEditPassword->text() == "11")
            {
                ui->labeLoginState->setText("<b>Подверждено. Нажмите \"ОК\"</b>");
                ui->buttonBox->setEnabled(true);
            }
            else
            {
                ui->labeLoginState->setText("<b>Неверный логин или пароль!</b>");
            }
        }
        else
        {
            ui->labeLoginState->setText("<b>Неверный логин или пароль!</b>");
        }
    }
    else
    {
        ui->labeLoginState->setText("<b>Введены неверные данные!</b>");
    }
}
