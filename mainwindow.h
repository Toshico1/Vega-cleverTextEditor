#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QPalette>
#include <highlither.h>
#include "filemanager.h" //подключаем заголовочный

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionNew_file_triggered();

    void on_actionImport_file_triggered();

    void on_actionSave_file_triggered();

    void on_actionO_triggered();

    void on_action_2_triggered();

    void on_pushButton_2_clicked();

    void on_comboBox_bg_currentTextChanged(const QString &arg1);

    void on_comboBox_sl_currentTextChanged(const QString &arg1);

    void on_comboBox_tx_currentTextChanged(const QString &arg1);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();


signals:
    void send_Data_file(const QStringList);

private:
    Ui::MainWindow *ui;
    FileManager _fileManager;
    Highlighter *_liter;
};



#endif // MAINWINDOW_H
