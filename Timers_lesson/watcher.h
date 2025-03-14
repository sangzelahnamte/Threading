#ifndef WATCHER_H
#define WATCHER_H

#include <QObject>
#include <QDir>
#include <QFileSystemWatcher>
#include <QDebug>

class Watcher : public QObject
{
    Q_OBJECT
public:
    explicit Watcher(QObject *parent = nullptr);

signals:
};

#endif // WATCHER_H
