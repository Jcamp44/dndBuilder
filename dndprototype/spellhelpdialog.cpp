#include "spellhelpdialog.h"
#include "ui_spellhelpdialog.h"

SpellHelpDialog::SpellHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpellHelpDialog)
{
    ui->setupUi(this);
}

SpellHelpDialog::~SpellHelpDialog()
{
    delete ui;
}

void SpellHelpDialog::on_btnOk_clicked()
{
    delete this;
}
