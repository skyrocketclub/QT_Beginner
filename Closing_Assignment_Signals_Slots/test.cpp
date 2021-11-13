#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{

}

void Test::closing()
{
    emit close();
}
