/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_username;
    QLabel *label_3;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(500, 500);
        centralWidget = new QWidget(Login);
        centralWidget->setObjectName("centralWidget");
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 100, 341, 331));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background-color: white; \n"
"border-radius: 15px\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 71, 21));
        QFont font;
        font.setPointSize(8);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 70, 58, 39));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(50, 100, 231, 31));
        lineEdit_username->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"border: 1px solid gray; \n"
"border-radius: 12px; \n"
"background color: white; \n"
"padding: 5px\n"
"\n"
"\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 130, 55, 39));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setGeometry(QRect(50, 160, 231, 31));
        lineEdit_Password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid gray; \n"
"border-radius: 15px; \n"
"background color: white; \n"
"padding: 5px\n"
"\n"
"\n"
"}"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 210, 121, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: black; \n"
"color: white;  \n"
"border-radius: 20px; \n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 290, 131, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 290, 81, 28));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: transparent; \n"
"border: none; \n"
"color: red; }"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 260, 131, 39));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 20, 111, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat ExtraBold")});
        font1.setPointSize(11);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(210, 20, 81, 71));
        label_7->setPixmap(QPixmap(QString::fromUtf8("Assets/Emblem_of_CU.png")));
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Login->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Login);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 500, 21));
        Login->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Login);
        mainToolBar->setObjectName("mainToolBar");
        Login->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Login);
        statusBar->setObjectName("statusBar");
        Login->setStatusBar(statusBar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Login", "tester", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "status", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login", "Register", nullptr));
        label_5->setText(QCoreApplication::translate("Login", "Don't have account?", nullptr));
        label_6->setText(QCoreApplication::translate("Login", "WELCOME", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
