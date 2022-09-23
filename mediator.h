#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QObject>
#include "mainwindow.h"
#include "createprojectwindow.h"

class Mediator : public QObject
{
    Q_OBJECT

public:
    explicit Mediator(QObject *parent = nullptr);

private slots:
    void slt_initializeCreateProjectWindow();

private:
    MainWindow* _mainWindow;

    CreateProjectWindow* _createProjectWindow;



    bool createMainWindow();

    bool initializeCreateProjectWindow();

    bool initializeConnections();
};

#endif // MEDIATOR_H
