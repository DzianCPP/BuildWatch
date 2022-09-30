#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QObject>
#include "mainwindow.h"
#include "createprojectwindow.h"
#include "createeventwindow.h"
#include "projectsdbmanager.h"

class Mediator : public QObject
{
    Q_OBJECT

public:
    explicit Mediator(QObject *parent = nullptr);

signals:
    void sgn_selectInfoFromProjectsDB();

private slots:
    void slt_initializeCreateProjectWindow();

    void slt_initializeCreateEventWindow();

private:
    MainWindow* _mainWindow;

    CreateProjectWindow* _createProjectWindow;

    CreateEventWindow* _createEventWindow;

    ProjectsDBManager* _projectsDBManager;



    bool initializeMainWindow();

    bool initializeCreateProjectWindow();

    bool initializeConnections();

    bool initializeCreateEventWindow();

    bool initializeProjectsDBManager();
};

#endif // MEDIATOR_H
