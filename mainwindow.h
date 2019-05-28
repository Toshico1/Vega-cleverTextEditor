#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QPalette>

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

    void on_pushButton_clicked();

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_actionNew_file_triggered();

    void on_actionImport_file_triggered();

    void on_actionSave_file_triggered();

    void on_actionO_triggered();

signals:
    void send_Data_file(const QStringList);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
