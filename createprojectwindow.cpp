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

    CreateProjectWindow->setMinimumSize(QSize(1000, 510));

    CreateProjectWindow->setWindowOpacity(0.000000000000000);

    layout_MainLayout = new QGridLayout(CreateProjectWindow);

    layout_MainLayout->setObjectName(QString::fromUtf8("gridLayout_CreateProjectWindow"));
}

void CreateProjectWindow::setupTextInUi(QWidget *CreateProjectWindow)
{

}
