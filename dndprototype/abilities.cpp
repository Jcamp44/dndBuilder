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
    AlginmentReligion* ar = new AlginmentReligion();
    _main->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(_main);
}

void Abilities::on_btnNext_clicked()
{
    Skills* s = new Skills();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}

void Abilities::setMainWindow(MainWindow* window){
    _main = window;
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
