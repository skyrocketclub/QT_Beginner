#include <QCoreApplication>
#include "test.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test test;
    return a.exec();
}
