#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "introscreen.h"
#include "characterinformation.h"
#include "classselect.h"
#include "alginmentreligion.h"
#include "skills.h"
#include "feats.h"
#include "equipment.h"
#include "languages.h"
#include "spells.h"
#include "charactersheet.h"

IntroScreen* _introScreen;
CharacterInformation* _characterInformation;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    newChar = new character();

    this->setWindowTitle("Dungeon and Dragons Character Builder");

    _introScreen = new IntroScreen();
    this->setCentralWidget(_introScreen);
    _introScreen->show();
    _introScreen->setMainWindow(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionCharacter_Information_triggered()
{
    _characterInformation = new CharacterInformation(this);
    this->setCentralWidget(_characterInformation);
    _characterInformation->show();
    _characterInformation->setMainWindow(this);
}

void MainWindow::on_actionClass_Select_triggered()
{
    ClassSelect* select = new ClassSelect();
    this->setCentralWidget(select);
    select->show();
    select->setMainWindow(this);
}

void MainWindow::on_actionAlignment_Religion_triggered()
{
    AlginmentReligion* ar = new AlginmentReligion();
    this->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(this);
}

void MainWindow::on_actionSkills_triggered()
{
    Skills* ar = new Skills();
    this->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(this);
}

void MainWindow::on_actionFeats_triggered()
{
    Feats* ar = new Feats();
    this->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(this);
}

void MainWindow::on_actionEquipment_triggered()
{
    Equipment* ar = new Equipment();
    this->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(this);
}

void MainWindow::on_actionLanguage_triggered()
{
    Languages* ar = new Languages();
    this->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(this);
}

void MainWindow::on_actionSpells_triggered()
{
    Spells* ar = new Spells();
    this->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(this);
}

void MainWindow::on_actionCharacter_Sheet_triggered()
{

    CharacterSheet* ar = new CharacterSheet();
    this->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(this);

}
