#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Equipment;
}

class Equipment : public QWidget
{
    Q_OBJECT
    
public:
    explicit Equipment(QWidget *parent = 0);
    ~Equipment();

    void setMainWindow(MainWindow* window);
    
private slots:
    void on_btnBack_clicked();

    void on_btnNext_clicked();

    void on_btnAboutClasses_clicked();

private:
    Ui::Equipment *ui;
    MainWindow* _main;
};

#endif // EQUIPMENT_H
