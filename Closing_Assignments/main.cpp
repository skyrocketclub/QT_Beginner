#include <QCoreApplication>
#include <QDebug>
#include "tests.h"
#include "monitors.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Tests test;
    Monitors monitor;
    QObject::connect(&test,&Tests::close,&monitor,&Monitors::close);
    QObject::connect(&test,&Tests::close,&a,&QCoreApplication::quit,Qt::QueuedConnection);

    qInfo()<<"Closing Application";
    test.closing();

    int value = a.exec();
    qInfo()<<"Exit code: "<<value;
    return value;
}
