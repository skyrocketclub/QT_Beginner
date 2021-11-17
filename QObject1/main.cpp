#include <QCoreApplication>
#include <QDebug>
#include "dog.h"
#include "cat.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Dog dog;
    Cat cat;

    dog.setObjectName("Fido");
    dog.chase();

    cat.setObjectName("Ghost");
    QObject::connect(&dog,&Dog::bark,&cat,&Cat::scared);
    QObject::connect(&cat,&Cat::run,&dog,&Dog::chase);

    dog.bark();
    return a.exec();
}
