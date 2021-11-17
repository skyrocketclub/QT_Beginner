#include <QCoreApplication>
#include <QDebug>
#include "producer.h"
#include "consumer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Producer producer;
    Consumer consumer;

    QObject::connect(&producer,&Producer::test, &consumer,&Consumer::test);
    producer.do_test();

    return a.exec();
}
