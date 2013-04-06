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
    Equipment* s = new Equipment();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}

void Languages::on_btnNext_clicked()
{
    Spells* s = new Spells();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}

void Languages::setMainWindow(MainWindow* window){
    _main = window;
}

void Languages::on_btnAboutClasses_clicked()
{
    LanguageHelpDialog* Dialog = new LanguageHelpDialog();
    Dialog->show();
}
