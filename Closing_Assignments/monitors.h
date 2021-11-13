#ifndef MONITORS_H
#define MONITORS_H

#include <QObject>
#include <QDebug>

class Monitors : public QObject
{
    Q_OBJECT
public:
    explicit Monitors(QObject *parent = nullptr);

signals:

public slots:
    void close();
};

#endif // MONITOR_H
