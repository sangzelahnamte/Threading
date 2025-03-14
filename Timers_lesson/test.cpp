#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    number = 0;
    timer.setInterval(1000); // intervals are set every second to emit QTimer::timeout
    connect(&timer, &QTimer::timeout, this, &Test::timeOut);
}

void Test::timeOut()
{
    number++;
    if(number >= 5) // if its true then timer stops
    {
        timer.stop();
        qInfo() << "Timer stopped";
    }
    else // if its false then display each count
    {
        qInfo() << "Count: " << number;
    }
}

void Test::doStuff() // this function tells the timer to start and keep track of each count
{
    number = 0;
    timer.start();
    qInfo() << "Timer start: " << number;
}
