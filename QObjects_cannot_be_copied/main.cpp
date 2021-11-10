#include <QCoreApplication>
#include <QDebug>

//this would not work
//void test(QObject object){
//    qInfo()<<&object<<Q_FUNC_INFO;
//}

void testPtr(QObject *object){
    qInfo()<<object<<Q_FUNC_INFO;
}

QObject* getObject(){
    QObject *o = new QObject();
    return 0;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject* p = getObject();
    testPtr(p);

    return a.exec();
}
