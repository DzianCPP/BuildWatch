#include "createeventwindow.h"

CreateEventWindow::CreateEventWindow(QWidget *parent)
    : QWidget{parent}
{
    setupUi(this);
}

void CreateEventWindow::setupUi(CreateEventWindow *createEventWindow)
{
    this->setMinimumSize(400, 200);

    layout_eventLayout = new QGridLayout(this);

    cmbBox_enterEventType = new QComboBox(this);

    cmbBox_enterEventType->addItem("Construction");

    cmbBox_enterEventType->addItem("Delivery");

    cmbBox_enterEventType->addItem("Other");

    layout_eventLayout->addWidget(cmbBox_enterEventType, 0, 0, 1, 3);

    dateTimeEdit_enterEventDateTime = new QDateTimeEdit(this);

    layout_eventLayout->addWidget(dateTimeEdit_enterEventDateTime, 1, 0, 1, 3);

    lineEdit_eventDescription = new QLineEdit(this);

    layout_eventLayout->addWidget(lineEdit_eventDescription, 2, 0, 1, 3);

    btn_eventOk = new QPushButton("OK", this);

    btn_eventClear = new QPushButton("Clear", this);

    btn_eventCancel = new QPushButton("Cancel", this);

    layout_eventLayout->addWidget(btn_eventOk, 3, 0, 1, 1);

    layout_eventLayout->addWidget(btn_eventClear, 3, 1, 1, 1);

    layout_eventLayout->addWidget(btn_eventCancel, 3, 2, 1, 1);

    setLayout(layout_eventLayout);
}
