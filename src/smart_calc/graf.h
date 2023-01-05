#ifndef GRAF_H
#define GRAF_H

#include <QWidget>
#include <QVector>
#include <QString>

extern "C" {
#include    "Node.h"
#include    "stack.h"
#include    "calc.h"
}

namespace Ui {
class Graf;
}

class Graf : public QWidget
{
    Q_OBJECT

public:
    explicit Graf(QWidget *parent = nullptr, QString line = "", double h = 1.0);
    ~Graf();

private:
    QString line_exp;
    Ui::Graf *ui;
    QVector<double> x, y;
    double Xbegin = -10e6;
    double Xend = 10e6;
    double H = 1.;
    double Ybegin = -10e6;
    double Yend = 10e6;


};

#endif // GRAF_H
