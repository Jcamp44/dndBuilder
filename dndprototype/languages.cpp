#include "languages.h"
#include "ui_languages.h"
#include "equipment.h"
#include "spells.h"
#include "languagehelpdialog.h"
#include "feats.h"

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

    Feats* a = new Feats();
    _main->setCentralWidget(a);
    a->show();
    a->setMainWindow(_main);
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

void Languages::on_tableWidget_5_cellClicked(int row, int column)
{
    switch (row){
    case 0: ui->textBrowser->setText("Characters who know Abyssal have the ability to speak with and understand Demons.");
        break;
    case 1: ui->textBrowser->setText("Common is the most widely spoken language in most campaigns. The ability to speak Common will allow you character to communicate in many situations.");
        break;
    case 2: ui->textBrowser->setText("Characters who know Giant have the ability to speak with and understand Giants.");
        break;
    case 3: ui->textBrowser->setText("Characters who know Orc have the ability to speak with and understand Orcs, and many other races as Orc is a widespread dialect.");
        break;
    default: ui->textBrowser->setText("");
    }

}
