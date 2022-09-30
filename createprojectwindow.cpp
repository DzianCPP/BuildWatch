#include "createprojectwindow.h"

CreateProjectWindow::CreateProjectWindow(QWidget *parent)
    : QWidget{parent}
{
    setupUi(this);
}

void CreateProjectWindow::setupUi(QWidget *CreateProjectWindow)
{
    if (CreateProjectWindow->objectName().isEmpty())
    {
        CreateProjectWindow->setObjectName(QString::fromUtf8("MainWindow"));
    }
    CreateProjectWindow->resize(500, 300);

    CreateProjectWindow->setWindowOpacity(0.000000000000000);

    label_enterProjectName = new QLabel("Enter project name:");

    label_enterProjectAddress = new QLabel("Enter project address:");

    label_enterClientName = new QLabel("Enter client name:");

    label_enterClientPhoneNumber = new QLabel("Enter client phone number:");

    label_enterComment = new QLabel("Enter a comment:");

    lineEdit_enterProjectName = new QLineEdit;

    lineEdit_enterProjectAddress = new QLineEdit;

    lineEdit_enterClientName = new QLineEdit;

    lineEdit_enterClientPhoneNumber = new QLineEdit;

    lineEdit_enterComment = new QLineEdit;

    btn_Ok = new QPushButton("Ok", this);

    btn_Cancel = new QPushButton("Cancel", this);





    layout_MainLayout = new QGridLayout(CreateProjectWindow);

    layout_MainLayout->setObjectName(QString::fromUtf8("gridLayout_CreateProjectWindow"));

    layout_MainLayout->addWidget(label_enterProjectName, 0, 0, 1, 2);

    layout_MainLayout->addWidget(label_enterProjectAddress, 1, 0, 1, 2);

    layout_MainLayout->addWidget(label_enterClientName, 2, 0, 1, 2);

    layout_MainLayout->addWidget(label_enterClientPhoneNumber, 3, 0, 1, 2);

    layout_MainLayout->addWidget(label_enterComment, 4, 0, 1, 2);

    layout_MainLayout->addWidget(lineEdit_enterProjectName, 0, 2, 1, 3);

    layout_MainLayout->addWidget(lineEdit_enterProjectAddress, 1, 2, 1, 3);

    layout_MainLayout->addWidget(lineEdit_enterClientName, 2, 2, 1, 3);

    layout_MainLayout->addWidget(lineEdit_enterClientPhoneNumber, 3, 2, 1, 3);

    layout_MainLayout->addWidget(lineEdit_enterComment, 4, 2, 1, 3);

    layout_MainLayout->addWidget(btn_Ok, 5, 0, 1, 2);

    layout_MainLayout->addWidget(btn_Cancel, 5, 2, 1, 3);

    this->setLayout(layout_MainLayout);
}
