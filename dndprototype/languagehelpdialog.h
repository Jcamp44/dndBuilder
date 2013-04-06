#ifndef LANGUAGEHELPDIALOG_H
#define LANGUAGEHELPDIALOG_H

#include <QDialog>

namespace Ui {
class LanguageHelpDialog;
}

class LanguageHelpDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LanguageHelpDialog(QWidget *parent = 0);
    ~LanguageHelpDialog();
    
private slots:
    void on_btnOk_clicked();

private:
    Ui::LanguageHelpDialog *ui;
};

#endif // LANGUAGEHELPDIALOG_H
