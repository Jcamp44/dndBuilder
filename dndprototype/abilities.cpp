#include "abilities.h"
#include "ui_abilities.h"
#include "abilitieshelpdialog.h"
#include "alginmentreligion.h"
#include "skills.h"

Abilities::Abilities(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Abilities)
{
    ui->setupUi(this);
}

Abilities::~Abilities()
{
    delete ui;
}

void Abilities::on_btnAboutClasses_clicked()
{
    AbilitiesHelpDialog* help = new AbilitiesHelpDialog();
    help->show();
}

void Abilities::on_btnBack_clicked()
{
    _main->newChar->setStr(ui->spinStr->text().toInt());
    _main->newChar->setIntel(ui->spinInt->text().toInt());
    _main->newChar->setDex(ui->spinDex->text().toInt());
    _main->newChar->setWis(ui->spinWiz->text().toInt());
    _main->newChar->setCon(ui->spinCon->text().toInt());
    _main->newChar->setCha(ui->spinCha->text().toInt());

    AlginmentReligion* ar = new AlginmentReligion();
    _main->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(_main);
}

void Abilities::on_btnNext_clicked()
{
    _main->newChar->setStr(ui->spinStr->text().toInt());
    _main->newChar->setIntel(ui->spinInt->text().toInt());
    _main->newChar->setDex(ui->spinDex->text().toInt());
    _main->newChar->setWis(ui->spinWiz->text().toInt());
    _main->newChar->setCon(ui->spinCon->text().toInt());
    _main->newChar->setCha(ui->spinCha->text().toInt());

    Skills* s = new Skills();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}

void Abilities::setMainWindow(MainWindow* window){
    _main = window;

    ui->spinStr->setValue(_main->newChar->getStr());
    ui->spinDex->setValue(_main->newChar->getDex());
    ui->spinInt->setValue(_main->newChar->getIntel());
    ui->spinCon->setValue(_main->newChar->getCon());
    ui->spinCha->setValue(_main->newChar->getCha());
    ui->spinWiz->setValue(_main->newChar->getWis());
}

void Abilities::on_btnRoll_clicked(){
    int str = 10 + (qrand() % ((8 + 1) - 1) + 1);
    int intel = 10 + (qrand() % ((8 + 1) - 1) + 1);
    int dex = 10 + (qrand() % ((8 + 1) - 1) + 1);
    int wis = 10 + (qrand() % ((8 + 1) - 1) + 1);
    int con = 10 + (qrand() % ((8 + 1) - 1) + 1);
    int cha = 10 + (qrand() % ((8 + 1) - 1) + 1);


    ui->spinStr->setValue(str);
    ui->spinInt->setValue(intel);
    ui->spinDex->setValue(dex);
    ui->spinWiz->setValue(wis);
    ui->spinCha->setValue(cha);
    ui->spinCon->setValue(con);
}
