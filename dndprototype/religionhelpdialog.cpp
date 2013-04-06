#include "religionhelpdialog.h"
#include "ui_religionhelpdialog.h"

ReligionHelpDialog::ReligionHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReligionHelpDialog)
{
    ui->setupUi(this);
}

ReligionHelpDialog::~ReligionHelpDialog()
{
    delete ui;
}

void ReligionHelpDialog::on_btnOk_clicked()
{
    delete this;
}
