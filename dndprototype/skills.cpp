#include "skills.h"
#include "ui_skills.h"
#include "abilities.h"
#include "feats.h"
#include "skillhelpdialog.h"

Skills::Skills(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Skills)
{
    ui->setupUi(this);
}

Skills::~Skills()
{
    delete ui;
}

void Skills::on_btnBack_clicked()
{    
    _main->newChar->setAppraise(ui->spinStr->text().toInt());
    _main->newChar->setBalance(ui->spinDex->text().toInt());
    _main->newChar->setBluff(ui->spinCon->text().toInt());
    _main->newChar->setClimb(ui->spinInt->text().toInt());
    _main->newChar->setCraft(ui->spinWiz->text().toInt());
    _main->newChar->setForgery(ui->spinCha->text().toInt());

    Abilities* a = new Abilities();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);
}

void Skills::on_btnNext_clicked()
{
    _main->newChar->setAppraise(ui->spinStr->text().toInt());
    _main->newChar->setBalance(ui->spinDex->text().toInt());
    _main->newChar->setBluff(ui->spinCon->text().toInt());
    _main->newChar->setClimb(ui->spinInt->text().toInt());
    _main->newChar->setCraft(ui->spinWiz->text().toInt());
    _main->newChar->setForgery(ui->spinCha->text().toInt());

    Feats* a = new Feats();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);
}

void Skills::setMainWindow(MainWindow* window){
    _main = window;

    ui->spinStr->setValue(_main->newChar->getAppraise());
    ui->spinDex->setValue(_main->newChar->getBalance());
    ui->spinCon->setValue(_main->newChar->getBluff());
    ui->spinInt->setValue(_main->newChar->getClimb());
    ui->spinWiz->setValue(_main->newChar->getCraft());
    ui->spinCha->setValue(_main->newChar->getForgery());
}

void Skills::on_btnAboutClasses_clicked()
{
    SkillHelpDialog* Dialog = new SkillHelpDialog();
    Dialog->show();
}

