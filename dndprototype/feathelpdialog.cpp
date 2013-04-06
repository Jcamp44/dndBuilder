#include "feathelpdialog.h"
#include "ui_feathelpdialog.h"

FeatHelpDialog::FeatHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FeatHelpDialog)
{
    ui->setupUi(this);
}

FeatHelpDialog::~FeatHelpDialog()
{
    delete ui;
}

void FeatHelpDialog::on_btnOk_clicked()
{
    delete this;
}
