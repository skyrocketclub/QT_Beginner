#include "monitors.h"

Monitors::Monitors(QObject *parent) : QObject(parent)
{

}

void Monitors::close()
{
    qInfo()<<"Application is closing...";
}
