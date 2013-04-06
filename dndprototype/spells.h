#ifndef SPELLS_H
#define SPELLS_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Spells;
}

class Spells : public QWidget
{
    Q_OBJECT
    
public:
    explicit Spells(QWidget *parent = 0);
    ~Spells();

    void setMainWindow(MainWindow* window);
    
private slots:
    void on_btnBack_clicked();

    void on_btnNext_clicked();

    void on_btnAboutClasses_clicked();

private:
    Ui::Spells *ui;
    MainWindow* _main;
};

#endif // SPELLS_H
