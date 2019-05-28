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

    void on_button_import_clicked();

    void on_button_new_clicked();

    void on_button_save_clicked();

    void on_pushButton_6_clicked();

signals:
    void send_Data_file(const QStringList);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
