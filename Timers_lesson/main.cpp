#include <QCoreApplication>
#include <QTimer>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test tests;
    tests.doStuff();

    return a.exec();
}
