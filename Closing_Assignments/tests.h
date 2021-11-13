#ifndef TESTS_H
#define TESTS_H

#include <QObject>
#include <QDebug>

class Tests : public QObject
{
    Q_OBJECT
public:
    explicit Tests(QObject *parent = nullptr);

    void closing();
signals:
    void close();

};

#endif // TEST_H
