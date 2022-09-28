#ifndef CREATEEVENTWINDOW_H
#define CREATEEVENTWINDOW_H

#include <QWidget>
#include <QComboBox>
#include <QDateTimeEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>

class CreateEventWindow : public QWidget
{
    Q_OBJECT
public:
    explicit CreateEventWindow(QWidget *parent = nullptr);

signals:

private:
    QDateTimeEdit* dateTimeEdit_enterEventDateTime;

    QComboBox* cmbBox_enterEventType;

    QPushButton* btn_eventOk;

    QPushButton* btn_eventClear;

    QPushButton* btn_eventCancel;

    QGridLayout* layout_eventLayout;

    QLineEdit* lineEdit_eventDescription;

    void setupUi(CreateEventWindow* createEventWindow);

};

#endif // CREATEEVENTWINDOW_H
