#include "classhelpdialog.h"
#include "ui_classhelpdialog.h"

ClassHelpDialog::ClassHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClassHelpDialog)
{
    ui->setupUi(this);
}

ClassHelpDialog::~ClassHelpDialog()
{
    delete ui;
}

void ClassHelpDialog::on_btnOk_clicked()
{
    delete this;
}
