#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{
    qInfo()<<this<<"Constructor ";
}

Test::~Test()
{
   qInfo()<<this<<"Decontructor";
}

void Test::doStuff()
{
    qInfo()<<this<<Q_FUNC_INFO;
    //it prints out information about the function
}
