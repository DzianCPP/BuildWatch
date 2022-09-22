#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QObject>

class Mediator : public QObject
{
    Q_OBJECT
public:
    explicit Mediator(QObject *parent = nullptr);
};

#endif // MEDIATOR_H
