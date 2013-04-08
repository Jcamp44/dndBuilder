#include "introscreen.h"
#include "ui_introscreen.h"
#include "characterinformation.h"
#include "charactersheet.h"

IntroScreen::IntroScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IntroScreen)
{
    ui->setupUi(this);
}

IntroScreen::~IntroScreen()
{
    delete ui;
}

void IntroScreen::on_btnNew_clicked()
{
    CharacterInformation* _characterInformation = new CharacterInformation();
    _main->setCentralWidget(_characterInformation);
    _characterInformation->show();
    _characterInformation->setMainWindow(_main);
}

void IntroScreen::setMainWindow(MainWindow* window){
    _main = window;
}

void IntroScreen::on_btnLoad_clicked()
{
    _main->newChar->setName("Gorgorash");
    _main->newChar->setRace("Half-Orc");
    _main->newChar->setAlignment("Chaotic Evil");
    _main->newChar->setReligion("Gruumsh");
    _main->newChar->setBarbarian(1);
    _main->newChar->setStr(14);
    _main->newChar->setDex(12);
    _main->newChar->setIntel(8);
    _main->newChar->setCon(11);
    _main->newChar->setWis(9);
    _main->newChar->setCha(10);
    _main->newChar->setOrc(true);
    _main->newChar->setGiant(true);
    _main->newChar->setClimb(2);
    _main->newChar->setCraft(1);
    _main->newChar->setCleave(2);
    _main->newChar->setAthletic(2);
    _main->newChar->setDodge(1);

    CharacterSheet* _characterSheet = new CharacterSheet();
    _main->setCentralWidget(_characterSheet);
    _characterSheet->show();
    _characterSheet->setMainWindow(_main);
}
