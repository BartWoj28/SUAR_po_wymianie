#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    a.setStyleSheet("QMainWindow { background-color: darkgray; }");
    w.show();
    return a.exec();
}
