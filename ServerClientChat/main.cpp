#include "mainwindow.h"
#include "chatwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    ChatWindow c;
    w.show();
    c.show();
    return a.exec();
}
