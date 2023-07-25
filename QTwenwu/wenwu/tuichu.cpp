/***********************************
 *@copyright  :csc
 *description :Use adc and photoresistor to complete the light, the
                     LED light is on when it is dark, and the LED light is off when it is bright 
 *filename    :main.c
 *author      :csc,syf,xkq,fzy,zmc
 *phone       :18874975755
 *version     :0.1
 *date        :2023.07.04
************************************/
#include "tuichu.h"
#include "ui_tuichu.h"

tuichu::tuichu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tuichu)
{
    ui->setupUi(this);
}

tuichu::~tuichu()
{
    delete ui;
}
