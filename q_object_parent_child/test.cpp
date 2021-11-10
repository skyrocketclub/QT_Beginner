#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{
  qInfo()<<this<<"Test constructor";
}

Test::~Test()
{
    qInfo()<<this<<"Test deconstructor";
}
