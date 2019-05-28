#ifndef ABOUT_PROG_H
#define ABOUT_PROG_H

#include <QDialog>

namespace Ui {
class about_prog;
}

class about_prog : public QDialog
{
    Q_OBJECT

public:
    explicit about_prog(QWidget *parent = nullptr);
    ~about_prog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::about_prog *ui;
};

#endif // ABOUT_PROG_H
