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
public slots:
    // adding custom slots to watch folder and directory changes
    void myFileChanges(const QString &path);
    void myDirChanges(const QString &path);
signals:
private:
    QFileSystemWatcher watcher;
};

#endif // WATCHER_H
