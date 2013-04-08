#include "languages.h"
#include "ui_languages.h"
#include "equipment.h"
#include "spells.h"
#include "languagehelpdialog.h"

Languages::Languages(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Languages)
{
    ui->setupUi(this);
}

Languages::~Languages()
{
    delete ui;
}

void Languages::on_tableWidget_5_clicked(const QModelIndex &index)
{

}

void Languages::on_btnBack_clicked()
{
    if(ui->tableWidget_5->item(0,1)->checkState()==2){
        _main->newChar->setAbyssal(true);
    }
    if(ui->tableWidget_5->item(1,1)->checkState()==2){
        _main->newChar->setCommon(true);
    }
    if(ui->tableWidget_5->item(2,1)->checkState()==2){
        _main->newChar->setGiant(true);
    }
    if(ui->tableWidget_5->item(3,1)->checkState()==2){
        _main->newChar->setOrc(true);
    }

    Equipment* s = new Equipment();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}

void Languages::on_btnNext_clicked()
{
    if(ui->tableWidget_5->item(0,1)->checkState()==2){
        _main->newChar->setAbyssal(true);
    } else {
       _main->newChar->setAbyssal(false);
    }
    if(ui->tableWidget_5->item(1,1)->checkState()==2){
        _main->newChar->setCommon(true);
    } else {
        _main->newChar->setCommon(false);
    }
    if(ui->tableWidget_5->item(2,1)->checkState()==2){
        _main->newChar->setGiant(true);
    } else {
        _main->newChar->setGiant(false);
    }
    if(ui->tableWidget_5->item(3,1)->checkState()==2){
        _main->newChar->setOrc(true);
    } else {
        _main->newChar->setOrc(false);
    }

    Spells* s = new Spells();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}

void Languages::setMainWindow(MainWindow* window){
    _main = window;

    if(_main->newChar->getAbyssal()){
        ui->tableWidget_5->item(0,1)->setCheckState(Qt::Checked);
    }
    if(_main->newChar->getCommon()){
        ui->tableWidget_5->item(1,1)->setCheckState(Qt::Checked);
    }
    if(_main->newChar->getGiant()){
        ui->tableWidget_5->item(2,1)->setCheckState(Qt::Checked);
    }
    if(_main->newChar->getOrc()){
        ui->tableWidget_5->item(3,1)->setCheckState(Qt::Checked);
    }
}

void Languages::on_btnAboutClasses_clicked()
{
    LanguageHelpDialog* Dialog = new LanguageHelpDialog();
    Dialog->show();
}
