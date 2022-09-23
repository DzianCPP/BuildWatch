#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QGridLayout>
#include <QComboBox>
#include <QGroupBox>
#include <QLabel>
#include <QTableView>
#include <QPushButton>
#include <QCoreApplication>

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    MainWindow(QObject *parent = nullptr);

signals:
    void sgn_initializeCreateProjectWindow();

private slots:
    void slt_initializeCreateProjectWindow();

private:
    QGridLayout *gridLayout;

    QVBoxLayout *layoutLeftMain;

    QComboBox *cmbBoxProjects;

    QVBoxLayout *layoutUpcomingEvents_CreateProject;

    QGroupBox *grpBoxUpcomingEvents;

    QWidget *layoutWidget;

    QVBoxLayout *layoutUpcomingEvents;

    QLabel *labelFirstUpcomingEvent;

    QLabel *labelSecondUpcomingEvent;

    QLabel *labelThirdUpcomingEvent;

    QHBoxLayout *layoutCreateProjectButton;

    QPushButton *btnCreateProject;

    QSpacerItem *spacerCreateProject;

    QVBoxLayout *layoutTable_CreateEvent;

    QTableView *tableProjectEvents;

    QHBoxLayout *layoutCreateEventButton;

    QPushButton *btnCreateEvent;

    QSpacerItem *spacerCreateEvent;




    void setupUi(QDialog *MainWindow);

    void setTextInUi(QDialog *MainWindow);

    void setMainWindowFrame(QDialog *MainWindow);

    bool initializeConnectionsForUi();
};
#endif // MAINWINDOW_H
