#ifndef SPELLHELPDIALOG_H
#define SPELLHELPDIALOG_H

#include <QDialog>

namespace Ui {
class SpellHelpDialog;
}

class SpellHelpDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SpellHelpDialog(QWidget *parent = 0);
    ~SpellHelpDialog();
    
private slots:
    void on_btnOk_clicked();

private:
    Ui::SpellHelpDialog *ui;
};

#endif // SPELLHELPDIALOG_H
