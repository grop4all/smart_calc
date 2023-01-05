#include "mainwindow.h"
#include "graf.h"

#include <QApplication>
#include <QPushButton>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}


//void cl_buttoon (QPushButton button, QLineEdit line) {
//    QString strbuttontext = button.text();
//    QString strlinetext = line.text();
//    strlinetext = strlinetext + strbuttontext;
//    line.setText(strlinetext);
//}
