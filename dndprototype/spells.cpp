#include "spells.h"
#include "ui_spells.h"
#include "languages.h"
#include "spellhelpdialog.h"
#include "charactersheet.h"

Spells::Spells(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Spells)
{
    ui->setupUi(this);
}

Spells::~Spells()
{
    delete ui;
}

void Spells::on_btnBack_clicked()
{

    if (ui->tableWidget->item(0,1)->checkState()==2){
        _main->newChar->setJump(true);
    }
    if (ui->tableWidget_2->item(0,1)->checkState()==2){
        _main->newChar->setAlarm(true);
    }
    if (ui->tableWidget_3->item(0,1)->checkState()==2){
        _main->newChar->setShield(true);
    }
    if (ui->tableWidget_4->item(0,1)->checkState()==2){
        _main->newChar->setGrease(true);
    }
    if (ui->tableWidget_5->item(0,1)->checkState()==2){
        _main->newChar->setSleep(true);
    }
    if (ui->tableWidget_6->item(0,1)->checkState()==2){
        _main->newChar->setSilent(true);
    }
    if (ui->tableWidget_7->item(0,1)->checkState()==2){
        _main->newChar->setChilltouch(true);
    }

    Languages* a = new Languages();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);
}

void Spells::on_btnNext_clicked()
{
    if (ui->tableWidget->item(0,1)->checkState()==2){
        _main->newChar->setJump(true);
    } else {
        _main->newChar->setJump(false);
    }
    if (ui->tableWidget_2->item(0,1)->checkState()==2){
        _main->newChar->setAlarm(true);
    } else {
        _main->newChar->setAlarm(false);
    }
    if (ui->tableWidget_3->item(0,1)->checkState()==2){
        _main->newChar->setShield(true);
    } else {
        _main->newChar->setShield(false);
    }
    if (ui->tableWidget_4->item(0,1)->checkState()==2){
        _main->newChar->setGrease(true);
    } else {
        _main->newChar->setGrease(false);
    }
    if (ui->tableWidget_5->item(0,1)->checkState()==2){
        _main->newChar->setSleep(true);
    } else {
        _main->newChar->setSleep(false);
    }
    if (ui->tableWidget_6->item(0,1)->checkState()==2){
        _main->newChar->setSilent(true);
    } else {
        _main->newChar->setSilent(false);
    }
    if (ui->tableWidget_7->item(0,1)->checkState()==2){
        _main->newChar->setChilltouch(true);
    } else {
        _main->newChar->setChilltouch(false);
    }

    CharacterSheet* a = new CharacterSheet();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);

}

void Spells::setMainWindow(MainWindow* window){
    _main = window;

    if (_main->newChar->getJump()){
        ui->tableWidget->item(0,1)->setCheckState(Qt::Checked);
    }
    if (_main->newChar->getAlarm()){
        ui->tableWidget_2->item(0,1)->setCheckState(Qt::Checked);
    }
    if (_main->newChar->getShield()){
        ui->tableWidget_3->item(0,1)->setCheckState(Qt::Checked);
    }
    if (_main->newChar->getGrease()){
        ui->tableWidget_4->item(0,1)->setCheckState(Qt::Checked);
    }
    if (_main->newChar->getSleep()){
        ui->tableWidget_5->item(0,1)->setCheckState(Qt::Checked);
    }
    if (_main->newChar->getSilent()){
        ui->tableWidget_6->item(0,1)->setCheckState(Qt::Checked);
    }
    if (_main->newChar->getChilltouch()){
        ui->tableWidget_7->item(0,1)->setCheckState(Qt::Checked);
    }
}

void Spells::on_btnAboutClasses_clicked()
{
    SpellHelpDialog* Dialog = new SpellHelpDialog();
    Dialog->show();
}
