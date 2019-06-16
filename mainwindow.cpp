#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "about_prog.h"
#include <QDebug>
#include <QTextCharFormat>
#include <QFontDialog>
#include <QtGui>
#include <QApplication>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _liter = new Highlighter(ui->plainTextEdit->document());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_file_triggered()
{
    QString str = QFileDialog::getSaveFileName(0, "Path of new file", "");
    _fileManager.saveFile(str, " ");

    ui->label_info->setText("New file created");
}

void MainWindow::on_actionImport_file_triggered()
{
    QString file_path = QFileDialog::getOpenFileName(0, "Open file", "", "*.txt *.cpp *.h *.py");

    QString file_data = _fileManager.getFileData(file_path);

    ui->plainTextEdit->setPlainText(file_data);
    ui->label_info->setText("File impt");
}

void MainWindow::on_actionSave_file_triggered()
{
    QString data = ui->plainTextEdit->toPlainText();
    QString path = QFileDialog::getSaveFileName(0, "Path of new file", "");
    _fileManager.saveFile(path, data);
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

void MainWindow::on_comboBox_bg_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->setStyleSheet("color: " + ui->comboBox_tx->currentText()
                                    + ";" "background-color: " + ui->comboBox_bg->currentText() + ";"
                                    + "selection-color: " + ui->comboBox_tx->currentText() + ";"
                                     "selection-background-color: " + ui->comboBox_sl->currentText() + ";");
}

void MainWindow::on_comboBox_sl_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->setStyleSheet("color: " + ui->comboBox_tx->currentText()
                                    + ";" "background-color: " + ui->comboBox_bg->currentText() + ";"
                                    + "selection-color: " + ui->comboBox_tx->currentText() + ";"
                                     "selection-background-color: " + ui->comboBox_sl->currentText() + ";");
}

void MainWindow::on_comboBox_tx_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->setStyleSheet("color: " + ui->comboBox_tx->currentText()
                                    + ";" "background-color: " + ui->comboBox_bg->currentText() + ";"
                                    + "selection-color: " + ui->comboBox_tx->currentText() + ";"
                                     "selection-background-color: " + ui->comboBox_sl->currentText() + ";");
}


void MainWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{

    QTextCodec* codec = QTextCodec::codecForName(arg1.toLocal8Bit());               //подцепляем кодировку из comboBox
    QString str = ui->plainTextEdit->toPlainText();
    QTextStream in(codec->fromUnicode(str), QIODevice::ReadOnly | QIODevice::Text); //отдаем строку в юникоде и меняем кодировку
    ui->plainTextEdit->setPlainText(in.readLine());                                 //на выставленную выше
}


void MainWindow::on_pushButton_clicked()
{
    bool ok;
    QFont fontStyle = QFontDialog::getFont(&ok,this);
    if(ok){
        ui->plainTextEdit->setCurrentFont(fontStyle);
    }
}
