#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

        Test *parent = new Test(&a);
        parent ->dog = new Animal(parent);
        delete parent;

    return a.exec();
}
