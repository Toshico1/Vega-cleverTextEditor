#ifndef ABOUT_LOVE_H
#define ABOUT_LOVE_H

#include <QDialog>

namespace Ui {
class about_love;
}

class about_love : public QDialog
{
    Q_OBJECT

public:
    explicit about_love(QWidget *parent = nullptr);
    ~about_love();

private:
    Ui::about_love *ui;
};

#endif // ABOUT_LOVE_H
