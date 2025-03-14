#include <QCoreApplication>
#include <QTimer>
//#include "test.h"
#include "watcher.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Watcher w_file;

    return a.exec();
}
