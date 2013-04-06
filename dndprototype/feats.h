#ifndef FEATS_H
#define FEATS_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Feats;
}

class Feats : public QWidget
{
    Q_OBJECT
    
public:
    explicit Feats(QWidget *parent = 0);
    ~Feats();

    void setMainWindow(MainWindow* window);
    
private slots:
    void on_btnBack_clicked();

    void on_btnNext_clicked();

    void on_btnAboutClasses_clicked();

private:
    Ui::Feats *ui;
    MainWindow* _main;
};

#endif // FEATS_H
