/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_14;
    QPushButton *pushButton_22;
    QPushButton *pushButton_19;
    QPushButton *pushButton_23;
    QPushButton *pushButton_32;
    QPushButton *pushButton_7;
    QPushButton *pushButton_13;
    QPushButton *pushButton;
    QPushButton *pushButton_29;
    QPushButton *pushButton_27;
    QPushButton *pushButton_3;
    QPushButton *pushButton_24;
    QPushButton *pushButton_4;
    QPushButton *pushButton_31;
    QPushButton *pushButton_21;
    QPushButton *pushButton_6;
    QPushButton *pushButton_16;
    QPushButton *pushButton_18;
    QPushButton *pushButton_28;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_30;
    QPushButton *pushButton_11;
    QPushButton *pushButton_15;
    QPushButton *pushButton_12;
    QPushButton *pushButton_33;
    QPushButton *pushButton_26;
    QPushButton *pushButton_8;
    QPushButton *pushButton_17;
    QPushButton *pushButton_2;
    QPushButton *pushButton_ans;
    QLabel *label;
    QDoubleSpinBox *Step;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 491, 81));
        QFont font;
        font.setPointSize(24);
        lineEdit->setFont(font);
        lineEdit->setFrame(true);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 140, 495, 415));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_14 = new QPushButton(gridLayoutWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_14, 4, 2, 1, 1);

        pushButton_22 = new QPushButton(gridLayoutWidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_22, 2, 4, 1, 1);

        pushButton_19 = new QPushButton(gridLayoutWidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_19, 4, 3, 1, 1);

        pushButton_23 = new QPushButton(gridLayoutWidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        sizePolicy.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_23, 3, 4, 1, 1);

        pushButton_32 = new QPushButton(gridLayoutWidget);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_32, 6, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_7, 2, 1, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_13, 3, 2, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButton, 5, 0, 1, 1);

        pushButton_29 = new QPushButton(gridLayoutWidget);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        sizePolicy1.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_29, 0, 3, 1, 1);

        pushButton_27 = new QPushButton(gridLayoutWidget);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        sizePolicy1.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_27, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_24 = new QPushButton(gridLayoutWidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        sizePolicy.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_24, 4, 4, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_31 = new QPushButton(gridLayoutWidget);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        sizePolicy1.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_31, 6, 0, 1, 1);

        pushButton_21 = new QPushButton(gridLayoutWidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_21, 1, 4, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_16 = new QPushButton(gridLayoutWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_16, 1, 3, 1, 1);

        pushButton_18 = new QPushButton(gridLayoutWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_18, 3, 3, 1, 1);

        pushButton_28 = new QPushButton(gridLayoutWidget);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        sizePolicy1.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_28, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_9, 4, 1, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_5, 4, 0, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_10, 5, 1, 1, 1);

        pushButton_30 = new QPushButton(gridLayoutWidget);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        sizePolicy1.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_30, 0, 4, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_11, 1, 2, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_15, 5, 2, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_12, 2, 2, 1, 1);

        pushButton_33 = new QPushButton(gridLayoutWidget);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        sizePolicy1.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_33, 6, 2, 1, 1);

        pushButton_26 = new QPushButton(gridLayoutWidget);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        sizePolicy1.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_26, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_17 = new QPushButton(gridLayoutWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_17, 2, 3, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_ans = new QPushButton(gridLayoutWidget);
        pushButton_ans->setObjectName(QString::fromUtf8("pushButton_ans"));
        sizePolicy1.setHeightForWidth(pushButton_ans->sizePolicy().hasHeightForWidth());
        pushButton_ans->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_ans, 5, 3, 2, 2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(550, 110, 131, 20));
        Step = new QDoubleSpinBox(centralwidget);
        Step->setObjectName(QString::fromUtf8("Step"));
        Step->setGeometry(QRect(660, 110, 131, 22));
        Step->setDecimals(6);
        Step->setMaximum(1000000.000000000000000);
        Step->setSingleStep(10.000000000000000);
        Step->setValue(1.000000000000000);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_10, SIGNAL(clicked()), lineEdit, SLOT(copy()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_22->setText(QApplication::translate("MainWindow", ")", nullptr));
        pushButton_19->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButton_23->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_32->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "cos", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_29->setText(QApplication::translate("MainWindow", "^", nullptr));
        pushButton_27->setText(QApplication::translate("MainWindow", "log", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "sin", nullptr));
        pushButton_24->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_31->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_21->setText(QApplication::translate("MainWindow", "C", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "acos", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "%", nullptr));
        pushButton_18->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_28->setText(QApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_30->setText(QApplication::translate("MainWindow", "AC", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "atan", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "tan", nullptr));
        pushButton_33->setText(QApplication::translate("MainWindow", "X", nullptr));
        pushButton_26->setText(QApplication::translate("MainWindow", "ln", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_17->setText(QApplication::translate("MainWindow", "(", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "asin", nullptr));
        pushButton_ans->setText(QApplication::translate("MainWindow", "=", nullptr));
        label->setText(QApplication::translate("MainWindow", "\321\210\320\260\320\263 \320\275\320\260 \320\263\321\200\320\260\321\204\320\270\320\272\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
