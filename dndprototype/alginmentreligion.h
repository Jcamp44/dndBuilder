#ifndef ALGINMENTRELIGION_H
#define ALGINMENTRELIGION_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class AlginmentReligion;
}

class AlginmentReligion : public QWidget
{
    Q_OBJECT
    
public:
    explicit AlginmentReligion(QWidget *parent = 0);
    ~AlginmentReligion();

    void setMainWindow(MainWindow* window);
    
private slots:
    void on_btnback_clicked();

    void on_btnNext_clicked();

    void on_btnAboutReligion_clicked();

    void on_btnAboutAlignment_clicked();

    void on_cboxAlignment_currentIndexChanged(const QString &arg1);

    void on_cboxReligion_currentIndexChanged(const QString &arg1);

private:
    Ui::AlginmentReligion *ui;
    MainWindow* _main;
};

#endif // ALGINMENTRELIGION_H
