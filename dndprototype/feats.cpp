#include "feats.h"
#include "ui_feats.h"
#include "skills.h"
#include "equipment.h"
#include "feathelpdialog.h"
#include "languages.h"

Feats::Feats(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Feats)
{
    ui->setupUi(this);
}

Feats::~Feats()
{
    delete ui;
}

void Feats::on_btnBack_clicked()
{
    _main->newChar->setAgile(ui->spinStr->text().toInt());
    _main->newChar->setAlertness(ui->spinDex->text().toInt());
    _main->newChar->setAthletic(ui->spinCon->text().toInt());
    _main->newChar->setCleave(ui->spinInt->text().toInt());
    _main->newChar->setDiehard(ui->spinWiz->text().toInt());
    _main->newChar->setDodge(ui->spinCha->text().toInt());

    Skills* s = new Skills();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}

void Feats::on_btnNext_clicked()
{
    _main->newChar->setAgile(ui->spinStr->text().toInt());
    _main->newChar->setAlertness(ui->spinDex->text().toInt());
    _main->newChar->setAthletic(ui->spinCon->text().toInt());
    _main->newChar->setCleave(ui->spinInt->text().toInt());
    _main->newChar->setDiehard(ui->spinWiz->text().toInt());
    _main->newChar->setDodge(ui->spinCha->text().toInt());

    Languages* a = new Languages();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);
}

void Feats::setMainWindow(MainWindow* window){
    _main = window;

    ui->spinStr->setValue(_main->newChar->getAgile());
    ui->spinDex->setValue(_main->newChar->getAlertness());
    ui->spinCon->setValue(_main->newChar->getAthletic());
    ui->spinInt->setValue(_main->newChar->getCleave());
    ui->spinWiz->setValue(_main->newChar->getDiehard());
    ui->spinCha->setValue(_main->newChar->getDodge());
}

void Feats::on_btnAboutClasses_clicked()
{
    FeatHelpDialog* Dialog = new FeatHelpDialog();
    Dialog->show();
}
