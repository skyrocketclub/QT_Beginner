#include <QCoreApplication>
#include <QDebug>
#include "test.h"

void wow(){
    std::unique_ptr<Test> t(new Test()); //we have created this in memory
    t->doStuff();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<"Starting: ";
    wow();
    qInfo()<<"Finished";

    return a.exec();
}
