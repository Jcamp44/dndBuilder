#include "equipmenthelpdialog.h"
#include "ui_equipmenthelpdialog.h"

EquipmentHelpDialog::EquipmentHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EquipmentHelpDialog)
{
    ui->setupUi(this);
}

EquipmentHelpDialog::~EquipmentHelpDialog()
{
    delete ui;
}

void EquipmentHelpDialog::on_btnOk_clicked()
{
    delete this;
}
