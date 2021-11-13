#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "monitor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test test;
    Monitor monitor;
    QObject::connect(&test,&Test::close,&monitor,&Monitor::close);
    QObject::connect(&test,&Test::close,&a,&QCoreApplication::quit,Qt::QueuedConnection);

    qInfo()<<"Closing Application";
    test.closing();

    int value = a.exec();
    qInfo()<<"Exit code: "<<value;
    return value;
}
