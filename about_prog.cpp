#include "about_prog.h"
#include "ui_about_prog.h"

about_prog::about_prog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_prog)
{
    ui->setupUi(this);
}

about_prog::~about_prog()
{
    delete ui;
}

void about_prog::on_pushButton_clicked()
{
    delete ui;
}
