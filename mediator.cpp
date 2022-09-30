#include "mediator.h"

Mediator::Mediator(QObject *parent)
{
    this->initializeMainWindow();
    initializeConnections();
    initializeProjectsDBManager();
}

void Mediator::slt_initializeCreateProjectWindow()
{
    this->initializeCreateProjectWindow();
}

void Mediator::slt_initializeCreateEventWindow()
{
    this->initializeCreateEventWindow();
}

bool Mediator::initializeMainWindow()
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

    QObject::connect(_mainWindow, SIGNAL(sgn_initializeCreateEventWindow()), this, SLOT(slt_initializeCreateEventWindow()));

    return true;
}

bool Mediator::initializeCreateEventWindow()
{
    this->_createEventWindow = new CreateEventWindow();

    _createEventWindow->show();

    return true;
}

bool Mediator::initializeProjectsDBManager()
{
    _projectsDBManager = new ProjectsDBManager;
    return true;
}
