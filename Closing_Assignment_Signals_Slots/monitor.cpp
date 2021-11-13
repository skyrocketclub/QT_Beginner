#include "monitor.h"

Monitor::Monitor(QObject *parent) : QObject(parent)
{

}

void Monitor::close()
{
    qInfo()<<"Application is closing...";
}
