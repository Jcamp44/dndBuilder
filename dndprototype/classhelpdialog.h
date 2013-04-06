#ifndef CLASSHELPDIALOG_H
#define CLASSHELPDIALOG_H

#include <QDialog>

namespace Ui {
class ClassHelpDialog;
}

class ClassHelpDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ClassHelpDialog(QWidget *parent = 0);
    ~ClassHelpDialog();
    
private slots:
    void on_btnOk_clicked();

private:
    Ui::ClassHelpDialog *ui;
};

#endif // CLASSHELPDIALOG_H
