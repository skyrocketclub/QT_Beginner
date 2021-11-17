#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"
#include <fstream>

void testDrive(Car* obj){
    obj->drive();
    obj->stop();
}

void race(Racecar* obj){
    obj -> drive();
    obj->stop();
    obj->gofast();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    std::ofstream outfile("new.txt", std::ios::app);
    if(!outfile){
        qInfo()<<"Error Opening file";
    }
    outfile<<"JOHN BOSCO";
    qInfo()<<"FIle Writing Successful....";
    outfile.close();

    //DYNAMIC CAST
//    Racecar* player1 = new Racecar(&a);
//    testDrive(player1);//implicit conversion

//    //Correct way
//    Car* obj = dynamic_cast<Car*>(player1);//We can explicity convert
//    if(obj) testDrive(obj);//more like checking if the cast happened

//    Feline* cat = new Feline(&a);
//    Car* catcar = dynamic_cast<Car*>(cat);
//    qInfo()<<"Catcar"<<catcar;
//    if(catcar) testDrive(catcar);







    //TO SHOW STATIC CAST
//    Car* car = new Car(&a);
//    qInfo()<<car;
//    Racecar* racer = static_cast<Racecar*>(car);
//    if(racer){






    //LEarning reinterpret cast

//        //CReate a race car
//    Racecar* player1 = new Racecar(&a);

//    //Cast the racecar to its base
//    Car* car = dynamic_cast<Car*>(player1);
//    if(car)testDrive(car);

//    //Cast it without changing it
//    Racecar* speedstar = static_cast<Racecar*>(car);
//    if(speedstar){
//        race(speedstar);
//    }

//    //Reinterpret cast
//        racer->gofast();
//    }
//    int* pointer = reinterpret_cast<int*>(speedstar);
//    qInfo()<<"Pointer"<<pointer;
//    qInfo()<<"RaceCAr"<<speedstar;

//    Racecar* mycar = reinterpret_cast<Racecar*>(pointer);
//    qInfo()<<"My car color is "<<mycar->color;
//    race(mycar);


    //LEARNIG Q OBJECT CAST
    //Derived class to base class
    Racecar* mycar = new Racecar(&a);
    Car* car = qobject_cast<Car*>(mycar);
    car->drive();

    //BAse class to derived class
    Racecar* speedstar = qobject_cast<Racecar*>(car);
    speedstar->gofast();

    return a.exec();
}
