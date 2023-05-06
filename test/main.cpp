#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//定义应用程序对象
    MainWindow w;
    w.show();

    return a.exec();
}
