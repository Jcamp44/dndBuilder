#include "abilitieshelpdialog.h"
#include "ui_abilitieshelpdialog.h"

AbilitiesHelpDialog::AbilitiesHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AbilitiesHelpDialog)
{
    ui->setupUi(this);
}

AbilitiesHelpDialog::~AbilitiesHelpDialog()
{
    delete ui;
}

void AbilitiesHelpDialog::on_btnOk_clicked()
{
    delete this;
}
