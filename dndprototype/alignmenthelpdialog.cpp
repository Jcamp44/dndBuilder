#include "alignmenthelpdialog.h"
#include "ui_alignmenthelpdialog.h"

AlignmentHelpDialog::AlignmentHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlignmentHelpDialog)
{
    ui->setupUi(this);
}

AlignmentHelpDialog::~AlignmentHelpDialog()
{
    delete ui;
}

void AlignmentHelpDialog::on_btnOk_clicked()
{
    delete this;
}
