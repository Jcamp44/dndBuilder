#include "charactersheet.h"
#include "ui_charactersheet.h"
#include "spells.h"

CharacterSheet::CharacterSheet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CharacterSheet)
{
    ui->setupUi(this);
}

CharacterSheet::~CharacterSheet()
{
    delete ui;
}

void CharacterSheet::setMainWindow(MainWindow* window){
    _main = window;

    ui->name->setText(_main->newChar->getName());
    ui->race->setText(_main->newChar->getRace());
    ui->alignment->setText(_main->newChar->getAlignment());
    ui->religion->setText(_main->newChar->getReligion());

    ui->Barblvl->setText(QString::number(_main->newChar->getBarbarian()));
    ui->Wizlvl->setText(QString::number(_main->newChar->getWizard()));
    ui->Pallvl->setText(QString::number(_main->newChar->getPaladin()));

    ui->str->setText(QString::number(_main->newChar->getStr()));
    ui->dex->setText(QString::number(_main->newChar->getDex()));
    ui->intel->setText(QString::number(_main->newChar->getIntel()));
    ui->con->setText(QString::number(_main->newChar->getCon()));
    ui->wis->setText(QString::number(_main->newChar->getWis()));
    ui->cha->setText(QString::number(_main->newChar->getCha()));

    QString temp;
    temp = "Appraise: " + QString::number(_main->newChar->getAppraise());
    ui->skills->append(temp);
    temp = "Balance: " + QString::number(_main->newChar->getBalance());
    ui->skills->append(temp);
    temp = "Bluff: " + QString::number(_main->newChar->getBluff());
    ui->skills->append(temp);
    temp = "Climb: " + QString::number(_main->newChar->getClimb());
    ui->skills->append(temp);
    temp = "Craft: " + QString::number(_main->newChar->getCraft());
    ui->skills->append(temp);
    temp = "Forgery: " + QString::number(_main->newChar->getForgery());
    ui->skills->append(temp);

    temp = "Jump: " + QString::number(_main->newChar->getJump());
    ui->spells->append(temp);
    temp = "Alarm: " + QString::number(_main->newChar->getAlarm());
    ui->spells->append(temp);
    temp = "Shield: " + QString::number(_main->newChar->getShield());
    ui->spells->append(temp);
    temp = "Grease: " + QString::number(_main->newChar->getGrease());
    ui->spells->append(temp);
    temp = "Sleep: " + QString::number(_main->newChar->getSleep());
    ui->spells->append(temp);
    temp = "Silent Image: " + QString::number(_main->newChar->getSilent());
    ui->spells->append(temp);
    temp = "Chill Touch: " + QString::number(_main->newChar->getChilltouch());
    ui->spells->append(temp);

    temp = "Agile: " + QString::number(_main->newChar->getAgile());
    ui->feats->append(temp);
    temp = "Alertness: " + QString::number(_main->newChar->getAlertness());
    ui->feats->append(temp);
    temp = "Athletic: " + QString::number(_main->newChar->getAthletic());
    ui->feats->append(temp);
    temp = "Cleave: " + QString::number(_main->newChar->getCleave());
    ui->feats->append(temp);
    temp = "Diehard: " + QString::number(_main->newChar->getDiehard());
    ui->feats->append(temp);
    temp = "Dodge: " + QString::number(_main->newChar->getDodge());
    ui->feats->append(temp);

    if (_main->newChar->getAbyssal()){
        ui->languages->append("Abyssal");
    }
    if (_main->newChar->getCommon()){
        ui->languages->append("Common");
    }
    if (_main->newChar->getGiant()){
        ui->languages->append("Giant");
    }
    if (_main->newChar->getOrc()){
        ui->languages->append("Orc");
    }
}

void CharacterSheet::on_btnBack_clicked()
{
    Spells* s = new Spells();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}

void CharacterSheet::on_loadBtn_clicked()
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

void CharacterSheet::on_clearBtn_clicked()
{
    _main->newChar->setName("");
    _main->newChar->setRace("");
    _main->newChar->setAlignment("");
    _main->newChar->setReligion("");
    _main->newChar->setBarbarian(0);
    _main->newChar->setWizard(0);
    _main->newChar->setPaladin(0);
    _main->newChar->setStr(0);
    _main->newChar->setDex(0);
    _main->newChar->setIntel(0);
    _main->newChar->setCon(0);
    _main->newChar->setWis(0);
    _main->newChar->setCha(0);
    _main->newChar->setOrc(false);
    _main->newChar->setGiant(false);
    _main->newChar->setCommon(false);
    _main->newChar->setAbyssal(false);
    _main->newChar->setClimb(0);
    _main->newChar->setCraft(0);
    _main->newChar->setAgile(0);
    _main->newChar->setAlarm(0);
    _main->newChar->setAlertness(0);
    _main->newChar->setAppraise(0);
    _main->newChar->setBalance(0);
    _main->newChar->setBluff(0);
    _main->newChar->setChilltouch(false);
    _main->newChar->setDiehard(0);
    _main->newChar->setForgery(0);
    _main->newChar->setGrease(false);
    _main->newChar->setJump(false);
    _main->newChar->setShield(false);
    _main->newChar->setSilent(false);
    _main->newChar->setSleep(false);
    _main->newChar->setCleave(0);
    _main->newChar->setAthletic(0);
    _main->newChar->setDodge(0);

    CharacterSheet* _characterSheet = new CharacterSheet();
    _main->setCentralWidget(_characterSheet);
    _characterSheet->show();
    _characterSheet->setMainWindow(_main);
}
