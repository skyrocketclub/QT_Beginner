#include "cat.h"


Cat::Cat(QObject *parent) : QObject(parent)
{

}


//setting the cats name
void Cat::setC_name(const QString &newC_name)
{
    c_name = newC_name;
}

//getting the cat's name
const QString &Cat::getC_name() const
{
    return c_name;
}
