#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <math.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int num;
    QList<int> list{};
    bool done{false};

   while(!done){

       qInfo()<<"Enter an integer: ";
      if(std::cin>>num){
        list.append(num);
      }
      else{
          done = true;
      }
   }
      qInfo()<<"Finished...";
      qInfo()<<"You Entered: ";
      foreach(int num, list){
          qInfo()<<num;
      }


    return a.exec();
}
