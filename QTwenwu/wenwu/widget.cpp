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
#include "ui_widget.h"
#include "QDir"
#include "QFile"
#include "QDebug"
#include <stdio.h>
#include <stdlib.h>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //构造QTcpServer对象
    mServer = new QTcpServer(this);
    //连接客户端
    QObject::connect(mServer,&QTcpServer::newConnection,this,[&](){
        //获取客户端连接上来的套接字
        mSocket = mServer->nextPendingConnection();

        //连接readyRead信号和槽
        QObject::connect(mSocket,&QTcpSocket::readyRead,this,[&](){
            //接收数据
            QByteArray arr = mSocket->readAll();
            //转换成字符串
            QString strall(arr);
            //显示
            QString old_str("温度:");
            qDebug()<<strall;
            ui->lbwendu->setText(old_str+strall[0]+strall[1]+"度");
             old_str = "湿度:";
            ui->lbshidu->setText(old_str+strall[6]+strall[7]+"%");
             old_str = "光照:";
             if(strall[13]=="0")
             {
                ui->lbguang->setText(old_str+strall[14]+strall[15]+strall[16]+"lux");
             }
             else
             {
                 ui->lbguang->setText(old_str+strall[13]+strall[14]+strall[15]+strall[16]+"lux");
             }

        });
    });
    //监听
    mServer->listen(QHostAddress("192.168.42.29"),6666);
    //绑定自己虚拟机IP和端口,也就是ARM 板上的IP

    //显示
    ui->setupUi(this);
    temp_str = "温度:"+QString::number(temp)+"度";
    shidu_str= "湿度:" +QString::number(shidu)+"%";
    guangzhao_str= "光照:" +QString::number(guangzhao)+"lux";
    ui->lbguang->setText(guangzhao_str);
    ui->lbshidu->setText(shidu_str);
    ui->lbwendu->setText(temp_str);

    QString parent_path = QDir::currentPath();
    parent_path.replace("build-info-Desktop-Debug","");
    txt_path = "/mydoc/icon/"+QString::number(now_picture)+".txt";
    icon_path = "/mydoc/icon/"+QString::number(now_picture)+".png";
    parent_path.replace("build-info-Desktop-Debug/info","");
    qDebug()<<parent_path;
    //txt_path = parent_path+"icon/"+QString::number(now_picture)+".txt";
    //icon_path = parent_path+"icon/"+QString::number(now_picture)+".png";
    QPixmap pix(icon_path);
    ui->lbpicture->setPixmap(pix);
    ui->lbpicture->setScaledContents(true);
    if(now_picture==0)
    {
        ui->lbtext->setText(s0);
    }
    if(now_picture==1)
    {
        ui->lbtext->setText(s1);
    }
    if(now_picture==2)
    {
        ui->lbtext->setText(s2);
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnpre_clicked()
{
    now_picture-=1;
    now_picture+=3;
    now_picture%=3;

    QString parent_path = QDir::currentPath();
    parent_path.replace("build-info-Desktop-Debug/info","");
    //txt_path = parent_path+"icon/"+QString::number(now_picture)+".txt";
    //icon_path = parent_path+"icon/"+QString::number(now_picture)+".png";
    txt_path = "/mydoc/icon/"+QString::number(now_picture)+".txt";
    icon_path = "/mydoc/icon/"+QString::number(now_picture)+".png";
    QPixmap pix(icon_path);
    ui->lbpicture->setPixmap(pix);
    ui->lbpicture->setScaledContents(true);
/*
    QFile f(txt_path);
    if(!f.open(QIODevice::ReadOnly | QIODevice::Text)) {}
    QTextStream txtInput(&f);
    QString lineStr="";
    while(!txtInput.atEnd())
    {
        lineStr += txtInput.readLine();
        lineStr+='\n';
    }
    f.close();
    ui->lbtext->setText(lineStr);
*/
    if(now_picture==0)
    {
        ui->lbtext->setText(s0);
    }
    if(now_picture==1)
    {
        ui->lbtext->setText(s1);
    }
    if(now_picture==2)
    {
        ui->lbtext->setText(s2);
    }
}
void Widget::on_btnnext_clicked()
{
    now_picture+=1;
    now_picture%=3;

    QString parent_path = QDir::currentPath();
    //parent_path.replace("build-info-Desktop-Debug","");
    txt_path = "/mydoc/icon/"+QString::number(now_picture)+".txt";
    icon_path = "/mydoc/icon/"+QString::number(now_picture)+".png";

    parent_path.replace("build-info-Desktop-Debug/info","");
    //txt_path = parent_path+"icon/"+QString::number(now_picture)+".txt";
    //icon_path = parent_path+"icon/"+QString::number(now_picture)+".png";
    QPixmap pix(icon_path);
    ui->lbpicture->setPixmap(pix);
    ui->lbpicture->setScaledContents(true);

    if(now_picture==0)
    {
        ui->lbtext->setText(s0);
    }
    if(now_picture==1)
    {
        ui->lbtext->setText(s1);
    }
    if(now_picture==2)
    {
        ui->lbtext->setText(s2);
    }
}

void Widget::on_btnbobao_clicked()
{
    system("chmod u+x u3\n");
    if(now_picture==0)
    {
        system("./u3 1\n");
    }
    else if(now_picture==1)
    {
        system("./u3 2\n");
    }
    else if(now_picture==2)
    {
        system("./u3 3\n");
    }
}

void Widget::on_btnbaojing_clicked()
{
    system("chmod u+x u3\n");
    system("./u3 0\n");
}
