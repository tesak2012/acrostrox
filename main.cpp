#include <QtGui/QApplication>
#include "formaa.h"
#include "serverwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ServerWindow w;
    w.showMaximized();
    
    return a.exec();
}
