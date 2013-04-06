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
}

void CharacterSheet::on_btnBack_clicked()
{
    Spells* s = new Spells();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}
