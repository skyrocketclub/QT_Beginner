#ifndef SIGNAL_H
#define SIGNAL_H

#include <QObject>
#include <QDebug>

class Signal : public QObject
{
    Q_OBJECT
public:
    explicit Signal(QObject *parent = nullptr, int channel = 0, QString name = "unknown");
    QString name;
    int channel;

signals:
    void send(int channel, QString name, QString message);

public slots:
    void broadcast(QString message);

};

#endif // SIGNAL_H
