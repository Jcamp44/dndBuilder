#include "alginmentreligion.h"
#include "ui_alginmentreligion.h"
#include "classselect.h"
#include "alignmenthelpdialog.h"
#include "religionhelpdialog.h"
#include "abilities.h"

AlginmentReligion::AlginmentReligion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AlginmentReligion)
{
    ui->setupUi(this);

    ui->cboxAlignment->addItem("Chaotic Evil");
    ui->cboxAlignment->addItem("Lawful Evil");
    ui->cboxAlignment->addItem("Neutral Evil");
    ui->cboxAlignment->addItem("Lawful Neutral");
    ui->cboxAlignment->addItem("True Neutral");
    ui->cboxAlignment->addItem("Chaotic Neutral");
    ui->cboxAlignment->addItem("Neutral Good");
    ui->cboxAlignment->addItem("Lawful Good");
    ui->cboxAlignment->addItem("Chaotic Good");

    ui->cboxReligion->addItem("Gruumsh");
    ui->cboxReligion->addItem("Heironeus");
    ui->cboxReligion->addItem("Fharlanghn");
    ui->cboxReligion->addItem("Garl Glittergold");
    ui->cboxReligion->addItem("Nerull");
}

AlginmentReligion::~AlginmentReligion()
{
    delete ui;
}

void AlginmentReligion::setMainWindow(MainWindow* window){
    _main = window;
}



void AlginmentReligion::on_btnback_clicked()
{
    ClassSelect* select = new ClassSelect();
    _main->setCentralWidget(select);
    select->show();
    select->setMainWindow(_main);
}

void AlginmentReligion::on_btnNext_clicked()
{
    Abilities* a = new Abilities();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);
}

void AlginmentReligion::on_btnAboutReligion_clicked()
{
    ReligionHelpDialog* a = new ReligionHelpDialog();
    a->show();
}

void AlginmentReligion::on_btnAboutAlignment_clicked()
{
    AlignmentHelpDialog* a = new AlignmentHelpDialog();
    a->show();
}

void AlginmentReligion::on_cboxAlignment_currentIndexChanged(const QString &arg1)
{
    if(arg1.compare("Chaotic Evil")==0){
        ui->textAlignment->setText("Evil for evil’s sake.  There is no overreaching plan, no regard for rules or customs.  You just want to destroy, consume, and kill. ");
    }
    else if(arg1.compare("Lawful Evil")==0){
        ui->textAlignment->setText("Your desires to destroy and kill are kept in check by the law.  You resort to manipulation and loopholes to deprive others of a good life, or to commit acts normally considered atrocious, but technically legal.");
    }
    else if(arg1.compare("Neutral Evil")==0){
        ui->textAlignment->setText("You don’t go out of your way to be bad, but when all is said and done, if someone’s in a weakened state and needs your aid, maybe they have some gold left on them.");
    }
    else if(arg1.compare("Lawful Neutral")==0){
        ui->textAlignment->setText("You are orderly.  You don’t like to disturb anything, and you try to keep in line with the rules of your society.  However, while still following the rules, you may perform acts considered either good or evil.");
    }
    else if(arg1.compare("True Neutral")==0){
        ui->textAlignment->setText("You’re not looking to take sides.  You consider yourself more of an opportunist; you will take the offer that makes the most sense to you.  Your motivations are your own, and you have no stake in the consideration of good or evil.  Only what you want to do as it relates to your personal values.");
    }
    else if(arg1.compare("Chaotic Neutral")==0){
        ui->textAlignment->setText("You’re going to do whatever you want.  Rules be damned.");
    }
    else if(arg1.compare("Neutral Good")==0){
        ui->textAlignment->setText("You don’t go out of your way to do good deeds, but should the chance come across you, you’ll help out someone in need.");
    }
    else if(arg1.compare("Lawful Good")==0){
        ui->textAlignment->setText("Laws exist for a reason, and following them is the most guaranteed way to procure a good, just, and fulfilling life.  You will always do well by the rule of law, and helping others is your absolute goal.");
    }
    else if(arg1.compare("Chaotic Good")==0){
        ui->textAlignment->setText("Justice will always be done.  Laws are useful, but when they are not enforced by others, you will ensure they are – even if that means breaking the laws yourself.  Nothing gets in the way of justice.");
    }
    else {
        ui->textAlignment->setText("");
    }
}

void AlginmentReligion::on_cboxReligion_currentIndexChanged(const QString &arg1)
{
    if(arg1.compare("Gruumsh")==0){
        ui->textReligion->setText("God of Orcs and bloodlust.  Chaotic Evil. ");
    }
    else if(arg1.compare("Heironeus")==0){
        ui->textReligion->setText("God of Valour and Justice.  Lawful Good.");
    }
    else if(arg1.compare("Fharlanghn")==0){
        ui->textReligion->setText("God of the Roads and travel.  Neutral.");
    }
    else if(arg1.compare("Garl Glittergold")==0){
        ui->textReligion->setText("God of the Gnomes.  Neutral Good.");
    }
    else if(arg1.compare("Nerull")==0){
        ui->textReligion->setText("God of Death.  Neutral Evil.");
    }
    else{
        ui->textReligion->setText("");
    }
}
