#ifndef TUICHU_H
#define TUICHU_H

#include <QDialog>

namespace Ui {
class tuichu;
}

class tuichu : public QDialog
{
    Q_OBJECT

public:
    explicit tuichu(QWidget *parent = nullptr);
    ~tuichu();

private:
    Ui::tuichu *ui;
};

#endif // TUICHU_H
