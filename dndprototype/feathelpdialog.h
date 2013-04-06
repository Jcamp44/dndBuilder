#ifndef FEATHELPDIALOG_H
#define FEATHELPDIALOG_H

#include <QDialog>

namespace Ui {
class FeatHelpDialog;
}

class FeatHelpDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit FeatHelpDialog(QWidget *parent = 0);
    ~FeatHelpDialog();
    
private slots:
    void on_btnOk_clicked();

private:
    Ui::FeatHelpDialog *ui;
};

#endif // FEATHELPDIALOG_H
