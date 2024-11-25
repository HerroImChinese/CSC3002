/********************************************************************************
** Form generated from reading UI file 'idregister.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDREGISTER_H
#define UI_IDREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_IDRegister
{
public:
    QGroupBox *groupBox;
    QLabel *label_4;
    QLineEdit *txt_Name;
    QLabel *label;
    QLineEdit *txt_ID;
    QLabel *label_2;
    QLineEdit *txt_Password;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QPushButton *pushButton_2;

    void setupUi(QDialog *IDRegister)
    {
        if (IDRegister->objectName().isEmpty())
            IDRegister->setObjectName("IDRegister");
        IDRegister->resize(500, 500);
        groupBox = new QGroupBox(IDRegister);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 90, 341, 331));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background-color: white; \n"
"border-radius: 15px\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 50, 101, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        txt_Name = new QLineEdit(groupBox);
        txt_Name->setObjectName("txt_Name");
        txt_Name->setGeometry(QRect(40, 80, 201, 31));
        txt_Name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"border: 1px solid gray; \n"
"border-radius: 12px; \n"
"background color: white; \n"
"padding: 5px\n"
"\n"
"\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 110, 101, 21));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        txt_ID = new QLineEdit(groupBox);
        txt_ID->setObjectName("txt_ID");
        txt_ID->setGeometry(QRect(40, 140, 201, 31));
        txt_ID->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"border: 1px solid gray; \n"
"border-radius: 12px; \n"
"background color: white; \n"
"padding: 5px\n"
"\n"
"\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 170, 101, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        txt_Password = new QLineEdit(groupBox);
        txt_Password->setObjectName("txt_Password");
        txt_Password->setGeometry(QRect(40, 200, 201, 31));
        txt_Password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"border: 1px solid gray; \n"
"border-radius: 12px; \n"
"background color: white; \n"
"padding: 5px\n"
"\n"
"\n"
"}"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 250, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: black; \n"
"color: white;  \n"
"border-radius: 20px; \n"
"}"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(240, 290, 71, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 50, 101, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 10, 181, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat ExtraBold")});
        font.setPointSize(11);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_2 = new QPushButton(IDRegister);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 20, 51, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: white; \n"
"color: black;  \n"
"border-radius: 25px; \n"
"}"));

        retranslateUi(IDRegister);

        QMetaObject::connectSlotsByName(IDRegister);
    } // setupUi

    void retranslateUi(QDialog *IDRegister)
    {
        IDRegister->setWindowTitle(QCoreApplication::translate("IDRegister", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_4->setText(QCoreApplication::translate("IDRegister", "Your Name", nullptr));
        label->setText(QCoreApplication::translate("IDRegister", "User ID", nullptr));
        label_2->setText(QCoreApplication::translate("IDRegister", "Set Password", nullptr));
        pushButton->setText(QCoreApplication::translate("IDRegister", "Register", nullptr));
        label_5->setText(QCoreApplication::translate("IDRegister", "Status", nullptr));
        label_3->setText(QCoreApplication::translate("IDRegister", "Connectivity", nullptr));
        label_6->setText(QCoreApplication::translate("IDRegister", "CREATE YOUR ID", nullptr));
        pushButton_2->setText(QCoreApplication::translate("IDRegister", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IDRegister: public Ui_IDRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDREGISTER_H
