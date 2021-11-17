#include "racecar.h"

Racecar::Racecar(QObject *parent) : Car(parent)
{

}

void Racecar::gofast()
{
    qInfo()<<"Going Fast";
}
