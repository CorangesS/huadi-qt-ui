/********************************************************************************
** Form generated from reading UI file 'tuichu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUICHU_H
#define UI_TUICHU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_tuichu
{
public:

    void setupUi(QDialog *tuichu)
    {
        if (tuichu->objectName().isEmpty())
            tuichu->setObjectName(QString::fromUtf8("tuichu"));
        tuichu->resize(480, 280);

        retranslateUi(tuichu);

        QMetaObject::connectSlotsByName(tuichu);
    } // setupUi

    void retranslateUi(QDialog *tuichu)
    {
        tuichu->setWindowTitle(QApplication::translate("tuichu", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tuichu: public Ui_tuichu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUICHU_H
