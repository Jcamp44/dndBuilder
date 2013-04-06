#ifndef RACEHELPDIALOG_H
#define RACEHELPDIALOG_H

#include <QDialog>

namespace Ui {
class RaceHelpDialog;
}

class RaceHelpDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit RaceHelpDialog(QWidget *parent = 0);
    ~RaceHelpDialog();
    
private slots:
    void on_btnOk_clicked();

private:
    Ui::RaceHelpDialog *ui;
};

#endif // RACEHELPDIALOG_H
