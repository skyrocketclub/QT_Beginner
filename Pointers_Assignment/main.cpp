#include <QCoreApplication>
#include <QDebug>
#include "calc.h"
#include <iostream>

int dogYears(int age, Calc *c){
    return c->dogYears(age); //c can access the methods in the class called calc because it is an instance of that class
}

int catYears(int age, Calc *c){
    return c->catYears(age);
}

Calc* create(){
    Calc *c = new Calc;
    return c;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age{}, dogy,caty;
    qInfo()<<"Enter your age: ";
    std::cin>>age;
    Calc *p = create(); //p was created dynamically and thus must be deleted...

    dogy = dogYears(age,p);
    caty = catYears(age,p);
    qInfo()<<"Dog Years: "<<dogy<<"\n"<<"Cat Years: "<<caty;
    delete p;

    return a.exec();
}
