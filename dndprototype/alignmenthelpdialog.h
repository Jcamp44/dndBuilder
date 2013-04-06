#ifndef ALIGNMENTHELPDIALOG_H
#define ALIGNMENTHELPDIALOG_H

#include <QDialog>

namespace Ui {
class AlignmentHelpDialog;
}

class AlignmentHelpDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit AlignmentHelpDialog(QWidget *parent = 0);
    ~AlignmentHelpDialog();
    
private slots:
    void on_btnOk_clicked();

private:
    Ui::AlignmentHelpDialog *ui;
};

#endif // ALIGNMENTHELPDIALOG_H
