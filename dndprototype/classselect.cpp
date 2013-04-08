#include "classselect.h"
#include "ui_classselect.h"
#include "characterinformation.h"
#include "classhelpdialog.h"
#include "alginmentreligion.h"

ClassSelect::ClassSelect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClassSelect)
{
    ui->setupUi(this);
}

ClassSelect::~ClassSelect()
{
    delete ui;
}

void ClassSelect::setMainWindow(MainWindow* window){
    _main = window;

    ui->spinBar->setValue(_main->newChar->getBarbarian());
    ui->spinWiz->setValue(_main->newChar->getWizard());
    ui->spinPal->setValue(_main->newChar->getPaladin());
}

void ClassSelect::on_btnBack_clicked()
{
    _main->newChar->setBarbarian(ui->spinBar->text().toInt());
    _main->newChar->setWizard(ui->spinWiz->text().toInt());
    _main->newChar->setPaladin(ui->spinPal->text().toInt());

    CharacterInformation* _characterInformation = new CharacterInformation();
    _main->setCentralWidget(_characterInformation);
    _characterInformation->show();
    _characterInformation->setMainWindow(_main);
}

void ClassSelect::on_btnNext_clicked()
{
    _main->newChar->setBarbarian(ui->spinBar->text().toInt());
    _main->newChar->setWizard(ui->spinWiz->text().toInt());
    _main->newChar->setPaladin(ui->spinPal->text().toInt());

    AlginmentReligion* ar = new AlginmentReligion();
    _main->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(_main);
}

void ClassSelect::on_btnAboutClasses_clicked()
{
    ClassHelpDialog* Dialog = new ClassHelpDialog();
    Dialog->show();
}
