#include "racehelpdialog.h"
#include "ui_racehelpdialog.h"

RaceHelpDialog::RaceHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RaceHelpDialog)
{
    ui->setupUi(this);
}

RaceHelpDialog::~RaceHelpDialog()
{
    delete ui;
}

void RaceHelpDialog::on_btnOk_clicked()
{
    delete this;
}
