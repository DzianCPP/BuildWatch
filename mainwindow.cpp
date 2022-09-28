#include "mainwindow.h"

MainWindow::MainWindow(QObject *parent)
{
    setupUi(this);
    initializeConnectionsForUi();
}

void MainWindow::setupUi(QDialog *MainWindow)
{
    if (MainWindow->objectName().isEmpty())
    {
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    }

    MainWindow->resize(1000, 510);




    MainWindow->setMinimumSize(QSize(1000, 510));

    MainWindow->setWindowOpacity(0.000000000000000);

    gridLayout = new QGridLayout(MainWindow);

    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

    layoutLeftMain = new QVBoxLayout();




    layoutLeftMain->setObjectName(QString::fromUtf8("layoutLeftMain"));

    cmbBoxProjects = new QComboBox(MainWindow);

    cmbBoxProjects->setObjectName(QString::fromUtf8("cmbBoxProjects"));    

    layoutLeftMain->addWidget(cmbBoxProjects);

    layoutUpcomingEvents_CreateProject = new QVBoxLayout();




    layoutUpcomingEvents_CreateProject->setObjectName(QString::fromUtf8("layoutUpcomingEvents_CreateProject"));

    grpBoxUpcomingEvents = new QGroupBox(MainWindow);

    grpBoxUpcomingEvents->setObjectName(QString::fromUtf8("grpBoxUpcomingEvents"));

    layoutWidget = new QWidget(grpBoxUpcomingEvents);

    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));




    layoutWidget->setGeometry(QRect(10, 20, 361, 65));

    layoutUpcomingEvents = new QVBoxLayout(layoutWidget);

    layoutUpcomingEvents->setObjectName(QString::fromUtf8("layoutUpcomingEvents"));

    layoutUpcomingEvents->setContentsMargins(0, 0, 0, 0);

    labelFirstUpcomingEvent = new QLabel(layoutWidget);




    labelFirstUpcomingEvent->setObjectName(QString::fromUtf8("labelFirstUpcomingEvent"));

    layoutUpcomingEvents->addWidget(labelFirstUpcomingEvent);

    labelSecondUpcomingEvent = new QLabel(layoutWidget);

    labelSecondUpcomingEvent->setObjectName(QString::fromUtf8("labelSecondUpcomingEvent"));

    layoutUpcomingEvents->addWidget(labelSecondUpcomingEvent);




    labelThirdUpcomingEvent = new QLabel(layoutWidget);

    labelThirdUpcomingEvent->setObjectName(QString::fromUtf8("labelThirdUpcomingEvent"));

    layoutUpcomingEvents->addWidget(labelThirdUpcomingEvent);

    layoutUpcomingEvents_CreateProject->addWidget(grpBoxUpcomingEvents);

    layoutCreateProjectButton = new QHBoxLayout();




    layoutCreateProjectButton->setObjectName(QString::fromUtf8("layoutCreateProjectButton"));

    btnCreateProject = new QPushButton(MainWindow);

    btnCreateProject->setObjectName(QString::fromUtf8("btnCreateProject"));

    layoutCreateProjectButton->addWidget(btnCreateProject);

    spacerCreateProject = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    layoutCreateProjectButton->addItem(spacerCreateProject);

    layoutUpcomingEvents_CreateProject->addLayout(layoutCreateProjectButton);

    layoutLeftMain->addLayout(layoutUpcomingEvents_CreateProject);

    gridLayout->addLayout(layoutLeftMain, 0, 0, 1, 1);

    layoutTable_CreateEvent = new QVBoxLayout();




    layoutTable_CreateEvent->setObjectName(QString::fromUtf8("layoutTable_CreateEvent"));

    tableProjectEvents = new QListView(MainWindow);

    tableProjectEvents->setObjectName(QString::fromUtf8("tableProjectEvents"));

    tableProjectEvents->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    tableProjectEvents->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);




    tableProjectEvents->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

    layoutTable_CreateEvent->addWidget(tableProjectEvents);

    layoutCreateEventButton = new QHBoxLayout();

    layoutCreateEventButton->setObjectName(QString::fromUtf8("layoutCreateEventButton"));




    btnCreateEvent = new QPushButton(MainWindow);

    btnCreateEvent->setObjectName(QString::fromUtf8("btnCreateEvent"));

    layoutCreateEventButton->addWidget(btnCreateEvent);

    spacerCreateEvent = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);




    layoutCreateEventButton->addItem(spacerCreateEvent);

    layoutTable_CreateEvent->addLayout(layoutCreateEventButton);

    gridLayout->addLayout(layoutTable_CreateEvent, 0, 1, 1, 1);

    setTextInUi(MainWindow);
}

void MainWindow::setTextInUi(QDialog *MainWindow)
{
    MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));

    grpBoxUpcomingEvents->setTitle(QCoreApplication::translate("MainWindow", "Upcoming events:", nullptr));

    labelFirstUpcomingEvent->setText(QCoreApplication::translate("MainWindow", "No text yet...", nullptr));




    labelSecondUpcomingEvent->setText(QCoreApplication::translate("MainWindow", "No text yet...", nullptr));

    labelThirdUpcomingEvent->setText(QCoreApplication::translate("MainWindow", "No text yet...", nullptr));

    btnCreateProject->setText(QCoreApplication::translate("MainWindow", "Create Project", nullptr));

    btnCreateEvent->setText(QCoreApplication::translate("MainWindow", "Create Event", nullptr));
}


void MainWindow::slt_initializeCreateProjectWindow()
{
    emit sgn_initializeCreateProjectWindow();
}

void MainWindow::slt_initializeCreateEventWindow()
{
    emit sgn_initializeCreateEventWindow();
}

bool MainWindow::initializeConnectionsForUi()
{
    QObject::connect(this->btnCreateProject, SIGNAL(clicked()), this, SLOT(slt_initializeCreateProjectWindow()));

    QObject::connect(this->btnCreateEvent, SIGNAL(clicked()), this, SLOT(slt_initializeCreateEventWindow()));

    return 0;
}

