#include "rowdatadialog.h"
#include "ui_rowdatadialog.h"


RowDataDialog::RowDataDialog(QWidget *parent, bool mode, DbAdapter* pa) :
    QDialog(parent),
    ui(new Ui::RowDataDialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(executeQuery()));
    queryModeAdd = mode;
    if(!queryModeAdd)
        setWindowTitle("Изменение записи");
    configureLineEdits();
    adapter = new DbAdapter(pa);
}

RowDataDialog::~RowDataDialog()
{
    delete ui;
}

void RowDataDialog::executeQuery()
{
    QSqlQuery query;
       query.exec("INSERT INTO Repair (id_repair, name_, price) "
                  "VALUES (5,'1001', 'hard repair', 650)");


//    query.prepare("INSERT INTO addressbook (number, name, description_, email)"
//    "VALUES(:number, :name, :phone, :email);");
//    query.bindValue(":number", 1);
//    query.bindValue(":name", "Piggy");
//    query.bindValue(":phone", "+49 631322187");
//    query.bindValue(":email", "piggy@mega.de");



//    QSqlDatabase db; //Подключаем базу данных
//         db = QSqlDatabase::addDatabase("QODBC");
//         db.setDatabaseName("DRIVER={SQL Server};SERVER=(local); DATABASE=TSS");
//         db.open();
    if(queryModeAdd) {
        adapter->executeQuery(QString("INSERT INTO Repair id_repair = %1").arg(ui->lineEditId->text().toInt()) +

                              QString(", name_ = %1").arg(ui->lineEditTitle->text()) +
                              QString(", description_ = %1").arg(ui->lineEditAuthor->text()) +
                              QString(", price = %1").arg(ui->lineEditIsbn->text().toInt()));
    }
    else
    {
        adapter->executeQuery(QString("UPDATE Repair SET id_repair = %1").arg(ui->lineEditLibraryId->text().toInt()) +
                              QString(", name_ = %1").arg(ui->lineEditTitle->text()) +
                              QString(", description_ = %1").arg(ui->lineEditAuthor->text()) +
                              QString(", price = %1").arg(ui->lineEditIsbn->text().toInt()) +
                              QString("WHERE id_repair = %1").arg(ui->lineEditId->text().toInt()));
    }
}

void RowDataDialog::configureLineEdits()
{
    ui->lineEditId->setWhatsThis("Поля для ввода идентификатора печатного издания");
    ui->lineEditLibraryId->setWhatsThis("Поля для ввода идентификатора библиотеки");
    ui->lineEditAuthor->setWhatsThis("Поля для ввода ФИО автора печатного издания");
    ui->lineEditRemNumber->setWhatsThis("Поля для ввода количества єкземпляров печатного издания");
    ui->lineEditIsbn->setWhatsThis("Поле для ввода глобального кода ISBN");
}

