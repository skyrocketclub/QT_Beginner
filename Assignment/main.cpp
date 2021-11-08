#include <QCoreApplication>
#include <QDebug>
#include "cat.h"

void meow(Cat &cat){
     qInfo()<<"Cat "<<cat.getC_name()<<" meows";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat tunde;
    Cat jerry;

    tunde.setC_name("tunde");
    jerry.setC_name("jerry");
    meow(tunde);
    meow(jerry);

    return a.exec();
}
