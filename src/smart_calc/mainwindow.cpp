#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QString>
#include <string>

#include "graf.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    connect(ui->pushButton_ans, SIGNAL(cliked()), this, SLOT(on_pushButton_ans_clicked()));
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton->text());
}


void MainWindow::on_pushButton_10_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_10->text());
}


void MainWindow::on_pushButton_11_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_11->text());
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_12->text());
}


void MainWindow::on_pushButton_13_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_13->text());
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_14->text());
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_15->text());
}

void MainWindow::on_pushButton_17_clicked()
{
     ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_17->text());
}


void MainWindow::on_pushButton_16_clicked()
{
     ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_16->text());
}


void MainWindow::on_pushButton_18_clicked()
{
     ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_18->text());
}


void MainWindow::on_pushButton_19_clicked()
{
     ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_19->text());
}


void MainWindow::on_pushButton_2_clicked()
{
     ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_2->text());
}




void MainWindow::on_pushButton_21_clicked()
{
     QString str = ui->lineEdit->text();
     str.remove(str.size() - 1, 1);
     ui->lineEdit->setText(str);
}


void MainWindow::on_pushButton_22_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_22->text());
}


void MainWindow::on_pushButton_30_clicked()
{
    ui->lineEdit->clear();
}


void MainWindow::on_pushButton_23_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_23->text());
}


void MainWindow::on_pushButton_24_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_24->text());
}


void MainWindow::on_pushButton_26_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_26->text());
}


void MainWindow::on_pushButton_27_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_27->text());
}


void MainWindow::on_pushButton_28_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_28->text());
}


void MainWindow::on_pushButton_29_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_29->text());
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_3->text());
}


void MainWindow::on_pushButton_31_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_31->text());
}


void MainWindow::on_pushButton_32_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_32->text());
}


void MainWindow::on_pushButton_33_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_33->text());
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_4->text());
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_5->text());
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_6->text());
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_7->text());
}


void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_8->text());
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->pushButton_9->text());
}


void MainWindow::on_pushButton_ans_clicked()
{
    QString line = ui->lineEdit->text();
    if (line.contains('X')) {
        Graf *graf = new Graf(nullptr, line, ui->Step->value());
        graf->show();
    }
    else {
    QByteArray str = line.toUtf8();

    char *rez_str = str.data();
    double rez = calc(rez_str);
    if (rez == NAN)
        ui->lineEdit->setText("Invalid value");

    QString ans = QString::number(rez, 'g', 10);
    ui->lineEdit->setText(ans);
    }
}


void MainWindow::on_pushButton_20_clicked()
{
    Graf *graf = new Graf();
    graf->show();
}

