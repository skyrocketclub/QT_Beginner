#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{
     count = 0;

    connect(&m_timer,&QTimer::timeout,this,&Test::timeout);//connecting a timmer and the slot
    m_timer.setInterval(1000); //1000 milliseconds in every second
    m_timer.start();
//    m_timer.stop();

    count = 0;

}

void Test::timeout()
{
    qInfo()<<"Test: ";
    count++;
    if(count>=3){
        m_timer.stop();
    }
}
