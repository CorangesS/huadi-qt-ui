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
#include "widget.h"
#include "login.h"
#include <QApplication>
#include "jinru.h"
#include "tuichu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login login;
    jinru j;
    j.setWindowTitle("基于物联网的文物监控系统");
    if(j.exec() == QDialog::Accepted)
    {
        login.setWindowTitle("login ui");
        if(login.exec() == QDialog::Accepted)
        {
            Widget w;
            w.show();
            return a.exec();
        }
        else
        {
            //退出
            return 0;
        }
    }

    return 0;
}
