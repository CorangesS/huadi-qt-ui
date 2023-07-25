/********************************************************************************
** Form generated from reading UI file 'jinru.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JINRU_H
#define UI_JINRU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_jinru
{
public:
    QPushButton *tbnjinru;
    QPushButton *btntuichu;
    QLabel *lbbackground;
    QLabel *lbtheme;

    void setupUi(QDialog *jinru)
    {
        if (jinru->objectName().isEmpty())
            jinru->setObjectName(QString::fromUtf8("jinru"));
        jinru->resize(480, 280);
        tbnjinru = new QPushButton(jinru);
        tbnjinru->setObjectName(QString::fromUtf8("tbnjinru"));
        tbnjinru->setGeometry(QRect(100, 230, 89, 41));
        btntuichu = new QPushButton(jinru);
        btntuichu->setObjectName(QString::fromUtf8("btntuichu"));
        btntuichu->setGeometry(QRect(280, 230, 89, 41));
        lbbackground = new QLabel(jinru);
        lbbackground->setObjectName(QString::fromUtf8("lbbackground"));
        lbbackground->setGeometry(QRect(10, 10, 471, 251));
        lbbackground->setFrameShape(QFrame::NoFrame);
        lbtheme = new QLabel(jinru);
        lbtheme->setObjectName(QString::fromUtf8("lbtheme"));
        lbtheme->setGeometry(QRect(90, 10, 311, 41));
        QFont font;
        font.setPointSize(18);
        lbtheme->setFont(font);
        lbbackground->raise();
        tbnjinru->raise();
        btntuichu->raise();
        lbtheme->raise();

        retranslateUi(jinru);

        QMetaObject::connectSlotsByName(jinru);
    } // setupUi

    void retranslateUi(QDialog *jinru)
    {
        jinru->setWindowTitle(QApplication::translate("jinru", "Dialog", nullptr));
        tbnjinru->setText(QApplication::translate("jinru", "\350\277\233\345\205\245", nullptr));
        btntuichu->setText(QApplication::translate("jinru", "\351\200\200\345\207\272", nullptr));
        lbbackground->setText(QApplication::translate("jinru", "TextLabel", nullptr));
        lbtheme->setText(QApplication::translate("jinru", "\345\237\272\344\272\216\347\211\251\350\201\224\347\275\221\347\232\204\346\226\207\347\211\251\347\233\221\346\216\247\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jinru: public Ui_jinru {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JINRU_H
