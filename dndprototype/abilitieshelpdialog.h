#ifndef ABILITIESHELPDIALOG_H
#define ABILITIESHELPDIALOG_H

#include <QDialog>

namespace Ui {
class AbilitiesHelpDialog;
}

class AbilitiesHelpDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit AbilitiesHelpDialog(QWidget *parent = 0);
    ~AbilitiesHelpDialog();
    
private slots:
    void on_btnOk_clicked();

private:
    Ui::AbilitiesHelpDialog *ui;
};

#endif // ABILITIESHELPDIALOG_H
