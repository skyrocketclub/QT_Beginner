#include <QCoreApplication>
#include <QDebug>
#include "dog.h"
#include "owner.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Owner owner;
    Dog dog;
    QObject::connect(&owner,&Owner::treats,&dog,&Dog::treats);
     QObject::connect(&owner,&Owner::treats,&dog,&Dog::treats,Qt::UniqueConnection);
    owner.giveSnacks();
    return a.exec();
}
