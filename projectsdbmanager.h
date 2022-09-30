#ifndef PROJECTSDBMANAGER_H
#define PROJECTSDBMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>

class ProjectsDBManager : public QObject, QSqlDatabase
{
    Q_OBJECT
public:
    explicit ProjectsDBManager(QObject *parent = nullptr);

signals:
    void sgn_newProjectCreated();

    void sgn_newProjectNotCreated();

    void sgn_infoFromProjectsDBSelected();

    void sgn_infoFromProjectsDBNotSelected();

public slots:
    void slt_selectInfoFromProjectsDB();

private:
    void selectInfoFromProjectsDB();

};

#endif // PROJECTSDBMANAGER_H
