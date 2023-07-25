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
#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->leuser->setText("123");
    ui->lepw->setText("123");
    ui->lejg->setText("中南大学");
    ui->lepw->setEchoMode(QLineEdit::Password);

    QPixmap p("/mydoc/icon/csu.jpg");
    ui->lbcsu->setPixmap(p);
    ui->lbcsu->setScaledContents(true);

}
login::~login()
{
    delete ui;
}

void login::on_btnlogin_clicked()
{
    if(ui->leuser->text().trimmed()==tr("123")&&(ui->lepw->text().trimmed()==tr("123")))
    {
        accept();
    }
    else
    {
        QMessageBox::warning(this, tr("!!!error!!!"), tr("用户名或密码错误\n请重新输入"));
        ui->lepw->clear();
        ui->lejg->clear();
        ui->leuser->clear();
        now_choose=1;
    }
}
void login::on_btnlogout_clicked()
{
    close();
}
void login::on_btnregister_clicked()
{
    QString user = ui->leuser->text();
    QString pw = ui->lepw->text();
    QString jigou = ui->lejg->text();
    QMessageBox::information(this, tr("Right"), tr("你的信息已被保存"));
}
void login::on_kb1_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"1");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"1");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"1");
    }
}
void login::on_kb2_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"2");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"2");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"2");
    }
}
void login::on_kb3_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"3");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"3");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"3");
    }
}
void login::on_kb4_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"4");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"4");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"4");
    }
}
void login::on_kb5_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"5");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"5");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"5");
    }
}
void login::on_kb6_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"6");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"6");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"6");
    }
}
void login::on_kb7_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"7");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"7");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"7");
    }
}
void login::on_kb8_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"8");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"8");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"8");
    }
}
void login::on_kb9_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"9");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"9");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"9");
    }
}
void login::on_kb0_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"0");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"0");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"0");
    }
}
void login::on_kbq_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"q");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"q");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"q");
    }
}
void login::on_kbw_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"w");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"w");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"w");
    }
}

void login::on_kbe_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"e");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"e");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"e");
    }
}

void login::on_kbr_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"r");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"r");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"r");
    }
}

void login::on_kbt_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"t");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"t");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"t");
    }
}

void login::on_kby_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"y");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"y");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"y");
    }
}

void login::on_kbu_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"u");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"u");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"u");
    }
}

void login::on_kbi_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"i");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"i");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"i");
    }
}

void login::on_kbo_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"o");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"o");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"o");
    }
}

void login::on_kbp_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"p");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"p");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"p");
    }
}

void login::on_kba_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"a");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"a");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"a");
    }
}

void login::on_kbs_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"s");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"s");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"s");
    }
}

void login::on_kbd_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"d");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"d");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"d");
    }
}

void login::on_kbf_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"f");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"f");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"f");
    }
}

void login::on_kbg_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"g");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"g");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"g");
    }
}

void login::on_kbh_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"h");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"h");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"h");
    }
}

void login::on_kbj_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"j");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"j");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"j");
    }
}

void login::on_kbk_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"k");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"k");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"k");
    }
}

void login::on_kbl_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"l");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"l");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"l");
    }
}

void login::on_kbz_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"z");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"z");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"z");
    }
}

void login::on_kbx_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"x");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"x");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"x");
    }
}

void login::on_kbc_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"c");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"c");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"c");
    }
}

void login::on_kbv_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"v");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"v");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"v");
    }
}

void login::on_kbb_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"b");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"b");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"b");
    }
}

void login::on_kbn_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"n");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"n");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"n");
    }
}

void login::on_kbm_clicked()
{
    if(now_choose==1)
    {
        QString oldstr = ui->leuser->text();
        ui->leuser->setText(oldstr+"m");
    }
    else if(now_choose==2)
    {
        QString oldstr = ui->lepw->text();
        ui->lepw->setText(oldstr+"m");
    }
    else if(now_choose==3)
    {
        QString oldstr = ui->lejg->text();
        ui->lejg->setText(oldstr+"m");
    }
}

void login::on_kbm_2_clicked()
{
    now_choose+=1;
    now_choose=now_choose%3;
    if(now_choose==0)
    {
        now_choose=3;
    }
}

void login::on_lbcsu_linkActivated(const QString &link)
{
    ;
}
