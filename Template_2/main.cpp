#include <QCoreApplication>
#include <QDebug>

template<class T, class F>
T add(T valueT,F valueF){
    return valueT + valueF;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<add<int,double>(5,3.5);
    return a.exec();
}
