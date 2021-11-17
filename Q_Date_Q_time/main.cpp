#include <QCoreApplication>
#include <QDate>
#include <QTime>
#include <QDateTime>
#include <QDebug>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDate today = QDate::currentDate();
    qInfo()<<today;
    qInfo()<<today.addYears(20);

    qInfo()<<"ISODATE"<<today.toString(Qt::DateFormat::ISODate);
    qInfo()<<"RFC2822Date"<<today.toString(Qt::DateFormat::RFC2822Date);
    qInfo()<<"TextDate"<<today.toString(Qt::DateFormat::TextDate);


    QTime now = QTime::currentTime();

    qInfo()<<"ISOTIME"<<now.toString(Qt::DateFormat::ISODate);
    qInfo()<<"RFC2822Time"<<now.toString(Qt::DateFormat::RFC2822Date);
    qInfo()<<"TextTIme"<<now.toString(Qt::DateFormat::TextDate);

    QDateTime current = QDateTime::currentDateTime();

    qInfo()<<"ISODATE"<<current.toString(Qt::DateFormat::ISODate);
    qInfo()<<"RFC2822Date"<<current.toString(Qt::DateFormat::RFC2822Date);
    qInfo()<<"TextDate"<<current.toString(Qt::DateFormat::TextDate);

    qInfo()<<"\n\n\n";
    qInfo()<<"Expires on: "<<current.addDays(45);


    return a.exec();
}
