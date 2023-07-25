#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_btnlogin_clicked();

    void on_btnlogout_clicked();

    void on_btnregister_clicked();

    void on_kb1_clicked();

    void on_kb2_clicked();

    void on_kb3_clicked();

    void on_kb4_clicked();

    void on_kb5_clicked();

    void on_kb6_clicked();

    void on_kb7_clicked();

    void on_kb8_clicked();

    void on_kb9_clicked();

    void on_kb0_clicked();

    void on_kbq_clicked();

    void on_kbw_clicked();

    void on_kbe_clicked();

    void on_kbr_clicked();

    void on_kbt_clicked();

    void on_kby_clicked();

    void on_kbu_clicked();

    void on_kbi_clicked();

    void on_kbo_clicked();

    void on_kbp_clicked();

    void on_kba_clicked();

    void on_kbs_clicked();

    void on_kbd_clicked();

    void on_kbf_clicked();

    void on_kbg_clicked();

    void on_kbh_clicked();

    void on_kbj_clicked();

    void on_kbk_clicked();

    void on_kbl_clicked();

    void on_kbz_clicked();

    void on_kbx_clicked();

    void on_kbc_clicked();

    void on_kbv_clicked();

    void on_kbb_clicked();

    void on_kbn_clicked();

    void on_kbm_clicked();

    void on_kbm_2_clicked();

    void on_lbcsu_linkActivated(const QString &link);

private:
    Ui::login *ui;
    int now_choose=1;//1 2 3 ,default=1
};

#endif // LOGIN_H
