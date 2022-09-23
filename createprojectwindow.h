#ifndef CREATEPROJECTWINDOW_H
#define CREATEPROJECTWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGridLayout>

class CreateProjectWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CreateProjectWindow(QWidget *parent = nullptr);

private:
    QString* projectName;
    QString* projectAddress;
    QString* clientName;
    QString* clientPhoneNumber;

    void setupUi(QWidget* CreateProjectWindow);
    void setupTextInUi(QWidget* CreateProjectWindow);

};

#endif // CREATEPROJECTWINDOW_H
