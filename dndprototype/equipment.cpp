#include "equipment.h"
#include "ui_equipment.h"
#include "feats.h"
#include "languages.h"
#include "equipmenthelpdialog.h"

Equipment::Equipment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Equipment)
{
    ui->setupUi(this);
}

Equipment::~Equipment()
{
    delete ui;
}

void Equipment::on_btnBack_clicked()
{
    Feats* a = new Feats();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);
}

void Equipment::on_btnNext_clicked()
{
    Languages* a = new Languages();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);
}

void Equipment::setMainWindow(MainWindow* window){
    _main = window;
}

void Equipment::on_btnAboutClasses_clicked()
{
    EquipmentHelpDialog* Dialog = new EquipmentHelpDialog();
    Dialog->show();
}
