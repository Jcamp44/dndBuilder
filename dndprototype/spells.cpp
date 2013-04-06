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
    Languages* a = new Languages();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);
}

void Spells::on_btnNext_clicked()
{

    CharacterSheet* a = new CharacterSheet();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);

}

void Spells::setMainWindow(MainWindow* window){
    _main = window;
}

void Spells::on_btnAboutClasses_clicked()
{
    SpellHelpDialog* Dialog = new SpellHelpDialog();
    Dialog->show();
}
