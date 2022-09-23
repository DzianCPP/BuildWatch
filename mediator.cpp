#include "mediator.h"

Mediator::Mediator(QObject *parent)
{
    this->createMainWindow();
    initializeConnections();
}

void Mediator::slt_initializeCreateProjectWindow()
{
    this->initializeCreateProjectWindow();
}

bool Mediator::createMainWindow()
{
    this->_mainWindow = new MainWindow(this);

    _mainWindow->show();

    return true;
}

bool Mediator::initializeCreateProjectWindow()
{
    this->_createProjectWindow = new CreateProjectWindow();

    _createProjectWindow->show();

    return true;
}

bool Mediator::initializeConnections()
{
    QObject::connect(_mainWindow, SIGNAL(sgn_initializeCreateProjectWindow()), this, SLOT(slt_initializeCreateProjectWindow()));

    return true;
}
