#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionCharacter_Information_triggered();

    void on_actionClass_Select_triggered();

    void on_actionAlignment_Religion_triggered();

    void on_actionSkills_triggered();

    void on_actionFeats_triggered();

    void on_actionEquipment_triggered();

    void on_actionLanguage_triggered();

    void on_actionSpells_triggered();

    void on_actionCharacter_Sheet_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
