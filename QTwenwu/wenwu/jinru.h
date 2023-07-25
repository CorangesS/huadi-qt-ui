#ifndef JINRU_H
#define JINRU_H

#include <QDialog>

namespace Ui {
class jinru;
}

class jinru : public QDialog
{
    Q_OBJECT

public:
    explicit jinru(QWidget *parent = nullptr);
    ~jinru();

private slots:
    void on_tbnjinru_clicked();

    void on_btntuichu_clicked();


private:
    Ui::jinru *ui;
};

#endif // JINRU_H
