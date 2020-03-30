#ifndef UI_ROWDATADIALOG_H
#define UI_ROWDATADIALOG_H

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

class Ui_RowDataDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditId;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditLibraryId;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEditTitle;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEditAuthor;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEditIsbn;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *lineEditRemNumber;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RowDataDialog)
    {
        if (RowDataDialog->objectName().isEmpty())
            RowDataDialog->setObjectName(QString::fromUtf8("RowDataDialog"));
        RowDataDialog->resize(400, 275);
        RowDataDialog->setMaximumSize(QSize(500, 16777215));
        verticalLayout_2 = new QVBoxLayout(RowDataDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(RowDataDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEditId = new QLineEdit(RowDataDialog);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));
        lineEditId->setMinimumSize(QSize(256, 20));

        horizontalLayout->addWidget(lineEditId);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(RowDataDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEditLibraryId = new QLineEdit(RowDataDialog);
        lineEditLibraryId->setObjectName(QString::fromUtf8("lineEditLibraryId"));
        lineEditLibraryId->setMinimumSize(QSize(256, 20));

        horizontalLayout_2->addWidget(lineEditLibraryId);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(RowDataDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        lineEditTitle = new QLineEdit(RowDataDialog);
        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));
        lineEditTitle->setMinimumSize(QSize(256, 20));

        horizontalLayout_5->addWidget(lineEditTitle);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(RowDataDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        lineEditAuthor = new QLineEdit(RowDataDialog);
        lineEditAuthor->setObjectName(QString::fromUtf8("lineEditAuthor"));
        lineEditAuthor->setMinimumSize(QSize(256, 20));

        horizontalLayout_6->addWidget(lineEditAuthor);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(RowDataDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        lineEditIsbn = new QLineEdit(RowDataDialog);
        lineEditIsbn->setObjectName(QString::fromUtf8("lineEditIsbn"));
        lineEditIsbn->setMinimumSize(QSize(256, 20));

        horizontalLayout_7->addWidget(lineEditIsbn);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(RowDataDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        lineEditRemNumber = new QLineEdit(RowDataDialog);
        lineEditRemNumber->setObjectName(QString::fromUtf8("lineEditRemNumber"));
        lineEditRemNumber->setMinimumSize(QSize(256, 20));

        horizontalLayout_8->addWidget(lineEditRemNumber);


        verticalLayout_2->addLayout(horizontalLayout_8);

        buttonBox = new QDialogButtonBox(RowDataDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(RowDataDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RowDataDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RowDataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RowDataDialog);
    } // setupUi

    void retranslateUi(QDialog *RowDataDialog)
    {
        RowDataDialog->setWindowTitle(QApplication::translate("RowDataDialog", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        label->setText(QApplication::translate("RowDataDialog", "Id:", nullptr));
        label_2->setText(QApplication::translate("RowDataDialog", "Id \320\261\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\270:", nullptr));
        label_5->setText(QApplication::translate("RowDataDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\270\320\267\320\264\320\260\320\275\320\270\321\217:", nullptr));
        label_6->setText(QApplication::translate("RowDataDialog", "\320\244\320\230\320\236 \320\260\320\262\321\202\320\276\321\200\320\260:", nullptr));
        label_7->setText(QApplication::translate("RowDataDialog", "ISBN:", nullptr));
        label_9->setText(QApplication::translate("RowDataDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\215\320\272\320\267.:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RowDataDialog: public Ui_RowDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROWDATADIALOG_H
