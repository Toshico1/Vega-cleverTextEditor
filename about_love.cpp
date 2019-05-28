#include "about_love.h"
#include "ui_about_love.h"

about_love::about_love(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_love)
{
    ui->setupUi(this);
}

about_love::~about_love()
{
    delete ui;
}
