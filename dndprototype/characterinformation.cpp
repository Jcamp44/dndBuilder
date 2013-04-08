#include "characterinformation.h"
#include "ui_characterinformation.h"
#include "racehelpdialog.h"
#include "mainwindow.h"
#include "classselect.h"
#include <QString>

CharacterInformation::CharacterInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CharacterInformation)
{
    ui->setupUi(this);
    ui->cmbRace->addItem("Human");
    ui->cmbRace->addItem("Half-Orc");

}

CharacterInformation::~CharacterInformation()
{
    delete ui;
}

void CharacterInformation::on_btnCompare_clicked()
{
    RaceHelpDialog* Dialog = new RaceHelpDialog();
    Dialog->show();
}

void CharacterInformation::on_cmbRace_currentIndexChanged(const QString &arg1)
{
    if (arg1.compare("Human")==0){
        ui->RaceInformation->setText("Can be any class.  Medium size, with 30' movement per round. Standard vision. 1 extra feat at 1st level, 4 extra skill points at 1st level, and 1 extra skill point in following levels.");
    }
    else if (arg1.compare("Half-Orc")==0){
        ui->RaceInformation->setText("+2 strength, -2 intelligence, -2 charisma.  Favour the Barbarian class.  Medium size, 30' movement per round. Can use 'orc-only' items.  Darkvision up to 60'.");
    }
    else {
        ui->RaceInformation->setText("");
    }
}

void CharacterInformation::setMainWindow(MainWindow* window){
    _main = window;

    ui->lineName->setText(_main->newChar->getName());
    if (_main->newChar->getRace()=="Human"){
        ui->cmbRace->setCurrentIndex(0);
    } else if (_main->newChar->getRace()=="Half-Orc"){
        ui->cmbRace->setCurrentIndex(1);
    }
}

void CharacterInformation::on_btnNext_clicked()
{
    _main->newChar->setName(ui->lineName->text());
    _main->newChar->setRace(ui->cmbRace->currentText());

    ClassSelect* select = new ClassSelect();
    _main->setCentralWidget(select);
    select->show();
    select->setMainWindow(_main);
}
