#ifndef CAT_H
#define CAT_H

#include <QObject>
#include <QDebug>

class Cat : public QObject
{
    Q_OBJECT
public:
    explicit Cat(QObject *parent = nullptr);


    void setC_name(const QString &newC_name);

    const QString &getC_name() const;

signals:

private:
    QString c_name;

};

#endif // CAT_H
