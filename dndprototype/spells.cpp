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

void Spells::on_tableWidget_cellClicked(int row, int column)
{
    ui->textBrowser->setText("Enables higher jumping. \n The subject gets a +10 enhancement bonus on Jump checks.");
}


void Spells::on_tableWidget_2_cellClicked(int row, int column)
{
    ui->textBrowser_2->setText("Let's the caster know when someone is near. \n Alarm sounds a mental or audible alarm each time a creature of Tiny or larger size enters the warded area or touches it.");
}

void Spells::on_tableWidget_3_cellClicked(int row, int column)
{
    ui->textBrowser_3->setText("Protects your from harm. \n Shield creates an invisible, tower shield-sized mobile disk of force that hovers in front of you.");
}

void Spells::on_tableWidget_4_cellClicked(int row, int column)
{
    ui->textBrowser_4->setText("Can make enemies lose their footing. \n A grease spell covers a solid surface with a layer of slippery grease.");
}

void Spells::on_tableWidget_5_cellClicked(int row, int column)
{
    ui->textBrowser_5->setText("Put your enemies into a slumber. \n A sleep spell causes a magical slumber to come upon 4 Hit Dice of creatures.");
}



void Spells::on_tableWidget_6_cellClicked(int row, int column)
{
    ui->textBrowser_6->setText("Generate anything you can think of. \n This spell creates the visual illusion of an object, creature, or force, as visualized by you.");
}

void Spells::on_tableWidget_7_cellClicked(int row, int column)
{
    ui->textBrowser_7->setText("Make your hands colder than ice. \n A touch from your hand, which glows with blue energy, disrupts the life force of living creatures.");
}
