#include <QCoreApplication>
#include <QDebug>
#include "pet.h"


typedef QMap<QString,Pet*> petlist;

petlist createPets(int max){
    petlist map;
    for(int i = 0; i < max; i++){
        QString id = QString::number(i);
        Pet* pet = new Pet();
        pet->setName("Pet: "+ id);
        pet->setAge(i*3);
        map.insert(id, pet);
    }
    return map;
}

void listPets(petlist pets){
    foreach(QString key, pets.keys()){
        Pet* pet = pets.value(key);
        qInfo()<<key<<pet->name()<<"is Age: "<<pet->age();

    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    petlist pets = createPets(5);
    qInfo()<<"Count: "<<pets.count();
    listPets(pets);
    Pet* pet = new Pet(&a);
    pet->setName("Bad Kitty");
    pet->setAge(99);
    pets.insert("1",pet);
    listPets(pets);
    return a.exec();
}
