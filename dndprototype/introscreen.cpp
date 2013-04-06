#include "introscreen.h"
#include "ui_introscreen.h"
#include "characterinformation.h"

IntroScreen::IntroScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IntroScreen)
{
    ui->setupUi(this);
}

IntroScreen::~IntroScreen()
{
    delete ui;
}

void IntroScreen::on_btnNew_clicked()
{
    CharacterInformation* _characterInformation = new CharacterInformation();
    _main->setCentralWidget(_characterInformation);
    _characterInformation->show();
    _characterInformation->setMainWindow(_main);
}

void IntroScreen::setMainWindow(MainWindow* window){
    _main = window;
}
