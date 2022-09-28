#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QObject>
#include "mainwindow.h"
#include "createprojectwindow.h"
#include "createeventwindow.h"

class Mediator : public QObject
{
    Q_OBJECT

public:
    explicit Mediator(QObject *parent = nullptr);

private slots:
    void slt_initializeCreateProjectWindow();

    void slt_initializeCreateEventWindow();

private:
    MainWindow* _mainWindow;

    CreateProjectWindow* _createProjectWindow;

    CreateEventWindow* _createEventWindow;



    bool initializeMainWindow();

    bool initializeCreateProjectWindow();

    bool initializeConnections();

    bool initializeCreateEventWindow();
};

#endif // MEDIATOR_H
