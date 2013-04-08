#ifndef INTROSCREEN_H
#define INTROSCREEN_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class IntroScreen;
}

class IntroScreen : public QWidget
{
    Q_OBJECT
    
public:
    explicit IntroScreen(QWidget *parent = 0);
    ~IntroScreen();

    void setMainWindow(MainWindow* window);
    
private slots:
    void on_btnNew_clicked();
    void on_btnLoad_clicked();

private:
    Ui::IntroScreen *ui;
    MainWindow* _main;
};

#endif // INTROSCREEN_H
