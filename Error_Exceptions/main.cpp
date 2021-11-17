#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDiv(int max){

    try {
        int value;
        qInfo()<<"Enter a number";
        cin>>value;

        if(value==0){
            throw std::invalid_argument("Cannot divide by zero");
        }

        if(value>5){
            throw std::out_of_range("Should be less than 5");
        }

        int result = max/value;
        qInfo()<<"Result = "<<result;
        return true;

    }  catch (std::exception &e) {
        qWarning()<<e.what();
        return false;
    }



//    try {
//        int value;
//         qInfo()<<"Enter a number";
//         cin>>value;

//         if(value == 0){
//             throw QString("Can not divide by zero");
//         }

//         if (value > 5){
//             throw 99;
//         }
//         if(value == 1){
//             throw std::runtime_error("Error should be greater than 1");
//         }
//         int result = max/value;
//         qInfo()<<"Result = "<<result;

//    }

//    catch(std::exception const& e){
//        qWarning()<<"We caught a standard exception"<<e.what();
//        return false;
//    }

//    catch (int e){
//        qWarning()<<"we caught an int"<<e;
//        return false;
//    }

//    catch (QString e) {
//            qWarning()<<"we caught a QString"<<e;
//            return false;
//        }


//    catch (...) {
//        qWarning()<<"Something is wrong";
//        return false;
//    }
//    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int max = 44;

    do{

    }while(doDiv(max));

    return a.exec();
}
