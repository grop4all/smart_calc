#include "graf.h"
#include "ui_graf.h"

Graf::Graf(QWidget *parent, QString line, double h)
    : QWidget(parent)
    , line_exp(line)
    , H(h)
    , ui(new Ui::Graf)

{
    ui->setupUi(this);


    for(double i = Xbegin; i <= Xend; i+=H) {
        QString buff = line_exp;

        x.push_back(i);


        QString number = QString::number(i, 'g', 7);
        buff = buff.replace('X', number);

        QByteArray str = buff.toUtf8();

        char *rez_str = str.data();
        double rez = calc(rez_str);

        y.push_back(rez);

    }
    ui->widget->xAxis->setRange(Xbegin, Xend);
    ui->widget->yAxis->setRange(Ybegin, Yend);
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();
}

Graf::~Graf()
{
    delete ui;
}


