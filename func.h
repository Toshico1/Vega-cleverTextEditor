#ifndef FUNC_H
#define FUNC_H
#include <QString>
#include <QMainWindow>

class func
{
public:
    func();
private slots:

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_actionNew_file_triggered();

    void on_actionImport_file_triggered();

    void on_actionSave_file_triggered();

    void on_actionO_triggered();

    void on_action_2_triggered();

    void on_pushButton_2_clicked();

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_comboBox_bg_currentTextChanged(const QString &arg1);

    void on_comboBox_sl_currentTextChanged(const QString &arg1);

    void on_comboBox_tx_currentTextChanged(const QString &arg1);
};

#endif // FUNC_H
