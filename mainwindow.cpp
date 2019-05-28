#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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

void MainWindow::on_pushButton_6_clicked()
{

    if(ui->radio_black->isChecked() == true){
            QPalette p = ui->plainTextEdit->palette();
            p.setColor(QPalette::Active, QPalette::Base, Qt::black);
            ui->plainTextEdit->setPalette(p);
    }else if (ui->radio_white->isChecked() == true) {
        QPalette p = ui->plainTextEdit->palette();
        p.setColor(QPalette::Active, QPalette::Base, Qt::white);
        ui->plainTextEdit->setPalette(p);
    }else if (ui->radio_green->isChecked() == true) {
        QPalette p = ui->plainTextEdit->palette();
        p.setColor(QPalette::Active, QPalette::Base, Qt::green);
        ui->plainTextEdit->setPalette(p);
    }else if (ui->radio_grey->isChecked() == true) {
        QPalette p = ui->plainTextEdit->palette();
        p.setColor(QPalette::Active, QPalette::Base, Qt::gray);
        ui->plainTextEdit->setPalette(p);
    }
}
