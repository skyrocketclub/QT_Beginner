#ifndef RACECAR_H
#define RACECAR_H

#include <QObject>
#include "car.h"

class Racecar : public Car
{
    Q_OBJECT
public:
    explicit Racecar(QObject *parent = nullptr);
    bool superCharger = true;
    void gofast();

signals:

};

#endif // RACECAR_H
