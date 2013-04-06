#ifndef ABILITIES_H
#define ABILITIES_H

#include <QWidget>
#include "mainwindow.h"
#include <QTime>

namespace Ui {
class Abilities;
}

class Abilities : public QWidget
{
    Q_OBJECT
    
public:
    explicit Abilities(QWidget *parent = 0);
    ~Abilities();

    void setMainWindow(MainWindow* window);
    
private slots:

    void on_btnAboutClasses_clicked();

    void on_btnBack_clicked();

    void on_btnNext_clicked();

    void on_btnRoll_clicked();

private:
    Ui::Abilities *ui;
    MainWindow* _main;
};

#endif // ABILITIES_H
