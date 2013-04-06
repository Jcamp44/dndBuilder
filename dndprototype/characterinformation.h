#ifndef CHARACTERINFORMATION_H
#define CHARACTERINFORMATION_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class CharacterInformation;
}

class CharacterInformation : public QWidget
{
    Q_OBJECT
    
public:
    explicit CharacterInformation(QWidget *parent = 0);
    ~CharacterInformation();

    void setMainWindow(MainWindow* window);
    
private slots:
    void on_btnCompare_clicked();

    void on_cmbRace_currentIndexChanged(const QString &arg1);

    void on_btnNext_clicked();

private:
    Ui::CharacterInformation *ui;
    MainWindow* _main;
};

#endif // CHARACTERINFORMATION_H
