#ifndef CLASSSELECT_H
#define CLASSSELECT_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class ClassSelect;
}

class ClassSelect : public QWidget
{
    Q_OBJECT
    
public:
    explicit ClassSelect(QWidget *parent = 0);
    ~ClassSelect();

    void setMainWindow(MainWindow* window);
    
private slots:
    void on_btnBack_clicked();

    void on_btnNext_clicked();

    void on_btnAboutClasses_clicked();

private:
    Ui::ClassSelect *ui;
    MainWindow* _main;
};

#endif // CLASSSELECT_H
