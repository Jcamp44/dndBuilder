#ifndef RELIGIONHELPDIALOG_H
#define RELIGIONHELPDIALOG_H

#include <QDialog>

namespace Ui {
class ReligionHelpDialog;
}

class ReligionHelpDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ReligionHelpDialog(QWidget *parent = 0);
    ~ReligionHelpDialog();
    
private slots:
    void on_btnOk_clicked();

private:
    Ui::ReligionHelpDialog *ui;
};

#endif // RELIGIONHELPDIALOG_H
