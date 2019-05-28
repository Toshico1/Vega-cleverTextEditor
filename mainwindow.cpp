#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTextCharFormat>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_import_clicked()
{
    QString file_path = QFileDialog::getOpenFileName(0, "Open file", "", "*.txt *.cpp *.h *.py");
    QFile file(file_path);
    file.open(QIODevice::ReadWrite);
    QString file_data = file.readAll();
    ui->plainTextEdit->setPlainText(file_data);

}

void MainWindow::on_button_new_clicked()
{
    QString str = QFileDialog::getExistingDirectory(0, "Path of new file", "");
    QFile file("some.txt");
    file.open(QIODevice::WriteOnly);
    file.close();

}

void MainWindow::on_button_save_clicked()
{
    QString data = ui->plainTextEdit->toPlainText();
    QString path = QFileDialog::getExistingDirectory(0, "Path of new file", "");
    QFile file("some.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream steam(&file);
    steam << data;
    file.close();
}


void MainWindow::on_pushButton_clicked()
{
    ui->plainTextEdit->setStyleSheet("color: " + ui->comboBox_tx->currentText()
                                    + ";" "background-color: " + ui->comboBox_bg->currentText() + ";"
                                    + "selection-color: " + ui->comboBox_sl->currentText() + ";"
                                     "selection-background-color: " + ui->comboBox_sl->currentText() + ";");
    //ОНО РАБОТАЕТ !!!!!!!!!!! MLG420 BLAZE IT!!!!!!!!!
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
