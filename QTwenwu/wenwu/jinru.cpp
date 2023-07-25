#include "jinru.h"
#include "ui_jinru.h"

jinru::jinru(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jinru)
{
    ui->setupUi(this);
    QPixmap p("/mydoc/icon/99.jpg");
    ui->lbbackground->setPixmap(p);
    ui->lbbackground->setScaledContents(true);
}

jinru::~jinru()
{
    delete ui;
}

void jinru::on_tbnjinru_clicked()
{
    accept();
}

void jinru::on_btntuichu_clicked()
{
    close();
}
