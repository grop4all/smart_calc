/********************************************************************************
** Form generated from reading UI file 'graf.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAF_H
#define UI_GRAF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Graf
{
public:
    QCustomPlot *widget;

    void setupUi(QWidget *Graf)
    {
        if (Graf->objectName().isEmpty())
            Graf->setObjectName(QString::fromUtf8("Graf"));
        Graf->resize(873, 538);
        widget = new QCustomPlot(Graf);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 851, 521));

        retranslateUi(Graf);

        QMetaObject::connectSlotsByName(Graf);
    } // setupUi

    void retranslateUi(QWidget *Graf)
    {
        Graf->setWindowTitle(QApplication::translate("Graf", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graf: public Ui_Graf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAF_H
