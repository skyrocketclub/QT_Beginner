#include <QCoreApplication>
#include <QDebug>
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age{};
    qInfo()<<"Enter your age: ";
    std::cin>>age;

    if(age>0 && age <120){
        int dog_age = age * 7;
        qInfo()<<"You are "<<dog_age<<" dog age...";
    }
    else{
        qWarning()<<"Not a valid age";
    }
    return a.exec();
}
