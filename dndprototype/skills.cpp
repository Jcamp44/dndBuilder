#include "skills.h"
#include "ui_skills.h"
#include "abilities.h"
#include "feats.h"
#include "skillhelpdialog.h"

Skills::Skills(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Skills)
{
    ui->setupUi(this);
}

Skills::~Skills()
{
    delete ui;
}

void Skills::on_btnBack_clicked()
{
    Abilities* a = new Abilities();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);
}

void Skills::on_btnNext_clicked()
{
    Feats* a = new Feats();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);
}

void Skills::setMainWindow(MainWindow* window){
    _main = window;
}

void Skills::on_btnAboutClasses_clicked()
{
    SkillHelpDialog* Dialog = new SkillHelpDialog();
    Dialog->show();
}

