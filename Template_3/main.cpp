#include <QCoreApplication>
#include <QDebug>
#include "Test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test<int> intCalc;
    qInfo()<<intCalc.add(1,4);
    return a.exec();
}
