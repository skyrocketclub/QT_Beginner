#include "consumer.h"

Consumer::Consumer(QObject *parent) : QObject(parent)
{

}

void Consumer::test()
{
     QObject* obj= sender();//you obtain a pointer to a QObject here
     Producer* sender = qobject_cast<Producer*>(obj);//you cast it to a dynamic object
     sender->setObjectName("BabyShark");
     qInfo()<<"Sender: "<<sender;

}
