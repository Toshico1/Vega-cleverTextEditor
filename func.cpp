#include "func.h"
#include "mainwindow.h"
func::func(){


}

void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f)
{
    QFont font;
    font.setFamily(ui->fontComboBox->currentText());
    font.setPointSize(ui->comboBox->currentText().toInt());
    ui->plainTextEdit->setFont(font);
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QFont font;
    font.setFamily(ui->fontComboBox->currentText());
    font.setPointSize(ui->comboBox->currentText().toInt());
    ui->plainTextEdit->setFont(font);
}

void MainWindow::on_actionNew_file_triggered()
{
    QFile file("some.txt");
    file.open(QIODevice::WriteOnly);
    file.close();
    ui->label_info->setText("New file created");
}

void MainWindow::on_actionImport_file_triggered()
{
    QString file_path = QFileDialog::getOpenFileName(0, "Open file", "", "*.txt *.cpp *.h *.py");
    QFile file(file_path);
    file.open(QIODevice::ReadWrite);
    QString file_data = file.readAll();
    ui->plainTextEdit->setPlainText(file_data);
    ui->label_info->setText("File impt");
}

void MainWindow::on_actionSave_file_triggered()
{
    QString data = ui->plainTextEdit->toPlainText();
    QString path = QFileDialog::getSaveFileName(0, "Path of new file", "");
    QFile file(path);
    file.open(QIODevice::WriteOnly);
    QTextStream steam(&file);
    steam << data;
    file.close();
    ui->label_info->setText("File saved");
}

void MainWindow::on_actionO_triggered()
{
    Dialog dialog;
    dialog.show();

}

void MainWindow::on_action_2_triggered()
{
    about_prog a;
    a.show();
}

void MainWindow::on_pushButton_2_clicked(){

   if(ui->combo_hotkey->currentText() == "New file"){
       ui->actionNew_file->setShortcut(QKeySequence(ui->lineEdit->text()));
       ui->label_info->setText(" ");
   }

   if(ui->combo_hotkey->currentText() == "Imp file"){
       ui->actionImport_file->setShortcut(QKeySequence(ui->lineEdit->text()));
       ui->label_info->setText(" ");
    }

   if(ui->combo_hotkey->currentText() == "Save file"){
       ui->actionSave_file->setShortcut(QKeySequence(ui->lineEdit->text()));
       ui->label_info->setText(" ");
    }
}

void MainWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{
//
}

void MainWindow::on_comboBox_bg_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->setStyleSheet("color: " + ui->comboBox_tx->currentText()
                                    + ";" "background-color: " + ui->comboBox_bg->currentText() + ";"
                                    + "selection-color: " + ui->comboBox_tx ->currentText() + ";"
                                     "selection-background-color: " + ui->comboBox_sl->currentText() + ";");
}

void MainWindow::on_comboBox_sl_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->setStyleSheet("color: " + ui->comboBox_tx->currentText()
                                    + ";" "background-color: " + ui->comboBox_bg->currentText() + ";"
                                    + "selection-color: " + ui->comboBox_tx ->currentText() + ";"
                                     "selection-background-color: " + ui->comboBox_sl->currentText() + ";");
}

void MainWindow::on_comboBox_tx_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->setStyleSheet("color: " + ui->comboBox_tx->currentText()
                                    + ";" "background-color: " + ui->comboBox_bg->currentText() + ";"
                                    + "selection-color: " + ui->comboBox_tx ->currentText() + ";"
                                     "selection-background-color: " + ui->comboBox_sl->currentText() + ";");
}
