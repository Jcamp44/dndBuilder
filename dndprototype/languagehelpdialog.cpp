#include "languagehelpdialog.h"
#include "ui_languagehelpdialog.h"

LanguageHelpDialog::LanguageHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LanguageHelpDialog)
{
    ui->setupUi(this);
}

LanguageHelpDialog::~LanguageHelpDialog()
{
    delete ui;
}

void LanguageHelpDialog::on_btnOk_clicked()
{
    delete this;
}
