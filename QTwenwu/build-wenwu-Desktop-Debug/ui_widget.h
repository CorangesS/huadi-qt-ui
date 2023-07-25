/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *btnbaojing;
    QPushButton *btnbobao;
    QPushButton *btnpre;
    QPushButton *btnnext;
    QLabel *lbwendu;
    QLabel *lbshidu;
    QLabel *lbguang;
    QLabel *lbpicture;
    QLabel *lbtext;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(480, 280);
        btnbaojing = new QPushButton(Widget);
        btnbaojing->setObjectName(QString::fromUtf8("btnbaojing"));
        btnbaojing->setGeometry(QRect(20, 220, 71, 41));
        btnbobao = new QPushButton(Widget);
        btnbobao->setObjectName(QString::fromUtf8("btnbobao"));
        btnbobao->setGeometry(QRect(20, 160, 71, 41));
        btnpre = new QPushButton(Widget);
        btnpre->setObjectName(QString::fromUtf8("btnpre"));
        btnpre->setGeometry(QRect(150, 230, 71, 31));
        btnnext = new QPushButton(Widget);
        btnnext->setObjectName(QString::fromUtf8("btnnext"));
        btnnext->setGeometry(QRect(310, 230, 71, 31));
        lbwendu = new QLabel(Widget);
        lbwendu->setObjectName(QString::fromUtf8("lbwendu"));
        lbwendu->setGeometry(QRect(20, 20, 101, 31));
        lbshidu = new QLabel(Widget);
        lbshidu->setObjectName(QString::fromUtf8("lbshidu"));
        lbshidu->setGeometry(QRect(20, 60, 101, 31));
        lbguang = new QLabel(Widget);
        lbguang->setObjectName(QString::fromUtf8("lbguang"));
        lbguang->setGeometry(QRect(20, 100, 101, 31));
        lbpicture = new QLabel(Widget);
        lbpicture->setObjectName(QString::fromUtf8("lbpicture"));
        lbpicture->setGeometry(QRect(129, 10, 131, 191));
        lbpicture->setFocusPolicy(Qt::NoFocus);
        lbpicture->setFrameShape(QFrame::StyledPanel);
        lbtext = new QLabel(Widget);
        lbtext->setObjectName(QString::fromUtf8("lbtext"));
        lbtext->setGeometry(QRect(270, 10, 201, 201));
        lbtext->setFrameShape(QFrame::Box);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        btnbaojing->setText(QApplication::translate("Widget", "\346\212\245\350\255\246", nullptr));
        btnbobao->setText(QApplication::translate("Widget", "\350\257\255\351\237\263\350\256\262\350\247\243", nullptr));
        btnpre->setText(QApplication::translate("Widget", "\344\270\212\344\270\200\351\241\265", nullptr));
        btnnext->setText(QApplication::translate("Widget", "\344\270\213\344\270\200\351\241\265", nullptr));
        lbwendu->setText(QApplication::translate("Widget", "\346\270\251\345\272\246:", nullptr));
        lbshidu->setText(QApplication::translate("Widget", "\346\271\277\345\272\246:", nullptr));
        lbguang->setText(QApplication::translate("Widget", "\345\205\211\347\205\247:", nullptr));
        lbpicture->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        lbtext->setText(QApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
