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

    void on_tableWidget_cellClicked(int row, int column);

    void on_tableWidget_2_cellClicked(int row, int column);

    void on_tableWidget_3_cellClicked(int row, int column);

    void on_tableWidget_4_cellClicked(int row, int column);

    void on_tableWidget_5_cellClicked(int row, int column);

    void on_tableWidget_6_cellClicked(int row, int column);

    void on_tableWidget_7_cellClicked(int row, int column);

private:
    Ui::Spells *ui;
    MainWindow* _main;
};

#endif // SPELLS_H
