#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    qint8 value8 = 0;
    qint16 value16 = 0;
    qint32 value32 = 0;

    qintptr valueptr = 0;

    qInfo()<<"Value8"<<sizeof(value8);
    qInfo()<<"Value16"<<sizeof(value16);
    qInfo()<<"Value32"<<sizeof(value32);
    qInfo()<<"Valueptr"<<sizeof(valueptr);
    return a.exec();
}
