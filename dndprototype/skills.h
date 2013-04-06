#ifndef SKILLS_H
#define SKILLS_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Skills;
}

class Skills : public QWidget
{
    Q_OBJECT
    
public:
    explicit Skills(QWidget *parent = 0);
    ~Skills();

    void setMainWindow(MainWindow* window);
    
private slots:
    void on_btnBack_clicked();

    void on_btnNext_clicked();

    void on_btnAboutClasses_clicked();

private:
    Ui::Skills *ui;
    MainWindow* _main;
};

#endif // SKILLS_H
