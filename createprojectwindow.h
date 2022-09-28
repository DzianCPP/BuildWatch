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

    QLabel* label_enterProjectName;

    QLabel* label_enterProjectAddress;

    QLabel* label_enterClientName;

    QLabel* label_enterClientPhoneNumber;

    QLabel* label_enterComment;

    QLineEdit* lineEdit_enterProjectName;

    QLineEdit* lineEdit_enterClientName;

    QLineEdit* lineEdit_enterProjectAddress;

    QLineEdit* lineEdit_enterClientPhoneNumber;

    QLineEdit* lineEdit_enterComment;

    QPushButton* btn_Ok;

    QPushButton* btn_Cancel;

    QGridLayout* layout_MainLayout;




    void setupUi(QWidget* CreateProjectWindow);
};

#endif // CREATEPROJECTWINDOW_H
