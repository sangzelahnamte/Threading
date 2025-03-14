#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QTimer>
#include <QTime>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);
public slots:
    void timeOut();
    void doStuff();
signals:
private:
    QTimer timer;
    int number;
};

#endif // TEST_H
