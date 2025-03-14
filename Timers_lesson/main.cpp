#include <QCoreApplication>
#include <QTimer>
//#include "test.h"
//#include "watcher.h"
#include <QProcess>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QProcess proc;
    proc.start("mspaint");
    QTimer::singleShot(10000, &proc, &QProcess::terminate);

    return a.exec();
}
