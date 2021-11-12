#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include "radio.h"
#include "station.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Radio boombox; //An instance of Radio is created
    Station* channels[3]; //We are working with an array of pointers

    //create some stations ... & boombox because the constructor requires a QObject address
    channels[0] = new Station(&boombox,94, "Rock and Roll Station");
    channels[1] = new Station(&boombox,87, "Hip Hop");
    channels[2] = new Station(&boombox,104, "News Cast");

    //When we emit the quit signal from the radio, the entire application is going to close...
    boombox.connect(&boombox, &Radio::quit, &a,&QCoreApplication::quit,Qt::QueuedConnection);

//    for(int i = 0; i<3; i++){
//        Station* channel = channels[i];
//        //When ever the station sends sth, the boombox listens to it...
//        boombox.connect(channel, &Station::send, &boombox,&Radio::listen);
//    }

    do{
       qInfo()<<"Enter on, off, test or quit";
       QTextStream qtin(stdin);//just like string stream for modifying any input that is entered...
       //You are reading the line, removing all the spaces and converting all the text to upper case
       QString line = qtin.readLine().trimmed().toUpper();


       if(line == "ON"){
           qInfo()<<"Turning the radio on";
           for(int i = 0; i<3; i++){
               Station* channel = channels[i];
               //channels 1, 2 & 3 are being connected to the radio
               //the signal is send and the slot is listen
               //When ever the station sends sth, the boombox listens to it...
               boombox.connect(channel, &Station::send, &boombox,&Radio::listen);
           }
        qInfo()<<"Radio is on";
       }

        if(line == "OFF"){

            qInfo()<<"Turning the Radio Off";
            for(int i = 0; i<3; i++){
                Station* channel = channels[i];
                boombox.disconnect(channel, &Station::send, &boombox,&Radio::listen);
            }
            qInfo()<<"Radio is off";
        }

        if(line == "TEST"){
            qInfo()<<"Testing";
            for(int i = 0; i<3; i++){
                Station* channel = channels[i];
                //this is an instance where a slot is used as a function from the class station
                channel->broadcast("Broadcasting live!");
            }
         qInfo()<<"Test complete";
        }

        if(line == "QUIT"){
            qInfo()<<"Quiting";
            emit boombox.quit();
            break;
        }

    }while(true);

    return a.exec();
}
