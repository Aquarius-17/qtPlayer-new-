/********************************************************************************
** Form generated from reading UI file 'qtplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPLAYER_H
#define UI_QTPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtPlayerClass
{
public:

    void setupUi(QWidget *qtPlayerClass)
    {
        if (qtPlayerClass->objectName().isEmpty())
            qtPlayerClass->setObjectName(QString::fromUtf8("qtPlayerClass"));
        qtPlayerClass->resize(600, 400);

        retranslateUi(qtPlayerClass);

        QMetaObject::connectSlotsByName(qtPlayerClass);
    } // setupUi

    void retranslateUi(QWidget *qtPlayerClass)
    {
        qtPlayerClass->setWindowTitle(QApplication::translate("qtPlayerClass", "qtPlayer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtPlayerClass: public Ui_qtPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPLAYER_H
