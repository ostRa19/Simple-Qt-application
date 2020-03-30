/********************************************************************************
** Form generated from reading UI file 'loginappdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINAPPDIALOG_H
#define UI_LOGINAPPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogInAppDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditLogin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditPassword;
    QLabel *labeLoginState;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LogInAppDialog)
    {
        if (LogInAppDialog->objectName().isEmpty())
            LogInAppDialog->setObjectName(QString::fromUtf8("LogInAppDialog"));
        LogInAppDialog->setEnabled(true);
        LogInAppDialog->resize(310, 135);
        LogInAppDialog->setMinimumSize(QSize(310, 135));
        LogInAppDialog->setModal(false);
        verticalLayout = new QVBoxLayout(LogInAppDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(LogInAppDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEditLogin = new QLineEdit(LogInAppDialog);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setMinimumSize(QSize(200, 25));

        horizontalLayout->addWidget(lineEditLogin);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(LogInAppDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(28, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEditPassword = new QLineEdit(LogInAppDialog);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setMinimumSize(QSize(200, 25));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEditPassword);


        verticalLayout->addLayout(horizontalLayout_2);

        labeLoginState = new QLabel(LogInAppDialog);
        labeLoginState->setObjectName(QString::fromUtf8("labeLoginState"));

        verticalLayout->addWidget(labeLoginState);

        buttonBox = new QDialogButtonBox(LogInAppDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(false);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LogInAppDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LogInAppDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LogInAppDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LogInAppDialog);
    } // setupUi

    void retranslateUi(QDialog *LogInAppDialog)
    {
        LogInAppDialog->setWindowTitle(QApplication::translate("LogInAppDialog", "Authorization", nullptr));
        label->setText(QApplication::translate("LogInAppDialog", "Login:", nullptr));
        label_2->setText(QApplication::translate("LogInAppDialog", "Password:", nullptr));
        labeLoginState->setText(QApplication::translate("LogInAppDialog", "Enter login ang password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogInAppDialog: public Ui_LogInAppDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINAPPDIALOG_H
