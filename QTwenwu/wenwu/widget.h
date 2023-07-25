#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetwork>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostAddress>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnpre_clicked(); //点击上一页按钮,可以查看其他物品信息与状态
    void on_btnnext_clicked(); //点击下一页按钮,可以查看其他物品信息与状态
    void on_btnbobao_clicked(); //点击语音播报按钮,可以听见语音播报
    void on_btnbaojing_clicked();//点击报警按钮,可以听见报警信号

private:
    Ui::Widget *ui;
    QString icon_path, txt_path, temp_str, shidu_str, guangzhao_str;
    int now_picture=0, temp=25, shidu=40, guangzhao=1000;
    QString txt_content;

    QString s0="商周阳刻昆虫类动物纹玉牌\n长5.54cm,宽5.3cm,厚0.55cm\n透闪石玉,灰白,不透明。\n器内外有大量黑色,白色沁斑。\n器一面以阳线技法雕刻出一\n变形昆虫类动物纹样,\n刻纹线条极其流畅,\n加工工艺十分精湛。\n";
    QString s1="太阳神鸟金饰属古蜀时期，\n外径12.5cm，内径5.29cm，\n厚度0.02cm，重量20克。\n金饰上有复杂的镂空图案，\n分内外两层，内层等距分布\n有十二条旋转的齿状光芒；\n外层由四只相同的\n朝逆时针飞行的鸟组成。\n";
    QString s2="商周大金面具，金质，\n长20.5cm，宽10.4cm，\n高10.7cm，厚0.08cm。\n整体呈立体脸谱，\n系在模具上捶揲成形。\n眼睛、鼻子、嘴巴、耳朵等\n采用剪切技术而成。\n具有重大的历史、艺术价值。\n";
    QTcpServer *mServer;
    QTcpSocket *mSocket;
};
#endif // WIDGET_H
