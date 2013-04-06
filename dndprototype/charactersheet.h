#ifndef CHARACTERSHEET_H
#define CHARACTERSHEET_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class CharacterSheet;
}

class CharacterSheet : public QWidget
{
    Q_OBJECT
    
public:
    explicit CharacterSheet(QWidget *parent = 0);
    ~CharacterSheet();

    void setMainWindow(MainWindow* window);
    
private slots:
    void on_btnBack_clicked();

private:
    Ui::CharacterSheet *ui;
    MainWindow* _main;
};

#endif // CHARACTERSHEET_H
