#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyServer l(8080);
    MainWindow w;
    w.show();
    return a.exec();
}
