#include "mediator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mediator mediator(&a);
    return a.exec();
}
