#include <QCoreApplication>
#include <QDebug>

template <typename T>

void print(T value){
    qInfo()<<value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    print<int>(1);
    print<double> (123.007);
    print<QString> (QString("Hello"));

    return a.exec();
}
