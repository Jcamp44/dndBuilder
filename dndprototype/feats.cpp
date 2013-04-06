#include "feats.h"
#include "ui_feats.h"
#include "skills.h"
#include "equipment.h"
#include "feathelpdialog.h"

Feats::Feats(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Feats)
{
    ui->setupUi(this);
}

Feats::~Feats()
{
    delete ui;
}

void Feats::on_btnBack_clicked()
{
    Skills* s = new Skills();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}

void Feats::on_btnNext_clicked()
{
    Equipment* s = new Equipment();
    _main->setCentralWidget(s);
    s->show();
    s->setMainWindow(_main);
}

void Feats::setMainWindow(MainWindow* window){
    _main = window;
}

void Feats::on_btnAboutClasses_clicked()
{
    FeatHelpDialog* Dialog = new FeatHelpDialog();
    Dialog->show();
}
