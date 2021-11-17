#include <QCoreApplication>
#include <QDebug>


void test(QString name){
    qInfo()<<name;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Ugo Kitis";
    qInfo()<<name;
    qInfo()<<name.mid(1,5);
    qInfo()<<name.insert(0,"Mr. ");
    qInfo()<<name.split(" ");

    int index = name.indexOf(".");
    if(index>-1){
        qInfo()<<name.remove(0 , index + 1).trimmed();
    }

    QString title = "Teacher";
    QString full = name.trimmed() + " " + title;
    qInfo()<<full;
    test(full);

    return a.exec();
}
