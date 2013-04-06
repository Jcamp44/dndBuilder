#include "classselect.h"
#include "ui_classselect.h"
#include "characterinformation.h"
#include "classhelpdialog.h"
#include "alginmentreligion.h"

ClassSelect::ClassSelect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClassSelect)
{
    ui->setupUi(this);
}

ClassSelect::~ClassSelect()
{
    delete ui;
}

void ClassSelect::setMainWindow(MainWindow* window){
    _main = window;
}

void ClassSelect::on_btnBack_clicked()
{
    CharacterInformation* _characterInformation = new CharacterInformation();
    _main->setCentralWidget(_characterInformation);
    _characterInformation->show();
    _characterInformation->setMainWindow(_main);
}

void ClassSelect::on_btnNext_clicked()
{
    AlginmentReligion* ar = new AlginmentReligion();
    _main->setCentralWidget(ar);
    ar->show();
    ar->setMainWindow(_main);
}

void ClassSelect::on_btnAboutClasses_clicked()
{
    ClassHelpDialog* Dialog = new ClassHelpDialog();
    Dialog->show();
}
