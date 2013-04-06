#ifndef SKILLHELPDIALOG_H
#define SKILLHELPDIALOG_H

#include <QDialog>

namespace Ui {
class SkillHelpDialog;
}

class SkillHelpDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SkillHelpDialog(QWidget *parent = 0);
    ~SkillHelpDialog();
    
private slots:
    void on_btnOk_clicked();

private:
    Ui::SkillHelpDialog *ui;
};

#endif // SKILLHELPDIALOG_H
