#include "watcher.h"

Watcher::Watcher(QObject *parent)
    : QObject{parent}
{
    watcher.addPath(QDir::currentPath());
    watcher.addPath(QDir::currentPath() + QDir::separator() + "test.txt");
    connect(&watcher, &QFileSystemWatcher::fileChanged, this, &Watcher::myFileChanges);
    connect(&watcher, &QFileSystemWatcher::directoryChanged, this, &Watcher::myDirChanges);
}

void Watcher::myFileChanges(const QString &path)
{
    qInfo() << "File path: " << path;
    if(watcher.files().length())
    {
        qInfo() << "Files that have changed";
        foreach(QString file, watcher.files())
        {
            qInfo() << file;
        }
    }
}

void Watcher::myDirChanges(const QString &path)
{
    qInfo() << "Directory path: " << path;
    if(watcher.directories().length())
    {
        qInfo() << "Directories that have changed";
        foreach(QString dir, watcher.directories())
        {
            qInfo() << dir;
        }
    }
}
