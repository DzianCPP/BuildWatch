#include "projectsdbmanager.h"

ProjectsDBManager::ProjectsDBManager(QObject *parent)
    : QObject{parent}
{
    this->QSqlDatabase::addDatabase("QSQLITE");
    this->setDatabaseName("./ProjectsDB.db");
}

void ProjectsDBManager::slt_selectInfoFromProjectsDB()
{
    selectInfoFromProjectsDB();
}

void ProjectsDBManager::selectInfoFromProjectsDB()
{
    emit sgn_infoFromProjectsDBSelected();
}
