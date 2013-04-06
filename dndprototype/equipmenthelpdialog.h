#ifndef EQUIPMENTHELPDIALOG_H
#define EQUIPMENTHELPDIALOG_H

#include <QDialog>

namespace Ui {
class EquipmentHelpDialog;
}

class EquipmentHelpDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit EquipmentHelpDialog(QWidget *parent = 0);
    ~EquipmentHelpDialog();
    
private slots:
    void on_btnOk_clicked();

private:
    Ui::EquipmentHelpDialog *ui;
};

#endif // EQUIPMENTHELPDIALOG_H
