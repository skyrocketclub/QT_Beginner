#include "tests.h"

Tests::Tests(QObject *parent) : QObject(parent)
{

}

void Tests::closing()
{
    emit close();
}
