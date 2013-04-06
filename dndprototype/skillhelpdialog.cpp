#include "skillhelpdialog.h"
#include "ui_skillhelpdialog.h"

SkillHelpDialog::SkillHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SkillHelpDialog)
{
    ui->setupUi(this);
}

SkillHelpDialog::~SkillHelpDialog()
{
    delete ui;
}

void SkillHelpDialog::on_btnOk_clicked()
{
    delete this;
}
