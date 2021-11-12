#include "signal.h"

Signal::Signal(QObject *parent, int channel, QString name) : QObject(parent)
{
    this->channel = channel;
    this->name = name;
}

void Signal::broadcast(QString message)
{
    emit send(channel, name, message);
}

