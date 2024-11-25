/********************************************************************************
** Form generated from reading UI file 'broadcast.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROADCAST_H
#define UI_BROADCAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_broadcast
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *title;
    QLabel *label_2;
    QPushButton *uploadImageButton;
    QLabel *image;
    QPushButton *add;
    QPushButton *remove;
    QLabel *displayLabel;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QDialog *broadcast)
    {
        if (broadcast->objectName().isEmpty())
            broadcast->setObjectName("broadcast");
        broadcast->resize(960, 540);
        groupBox = new QGroupBox(broadcast);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 20, 880, 495));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background-color: black; \n"
"border-radius: 15px; \n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 51, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat")});
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white; \n"
"}"));
        title = new QLineEdit(groupBox);
        title->setObjectName("title");
        title->setGeometry(QRect(30, 70, 301, 31));
        title->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border-radius: 15px; \n"
"padding-left: 10px; \n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 120, 231, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white; \n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        uploadImageButton = new QPushButton(groupBox);
        uploadImageButton->setObjectName("uploadImageButton");
        uploadImageButton->setGeometry(QRect(40, 160, 121, 31));
        uploadImageButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: black; \n"
"color: rgb(51, 51, 51)\n"
"border-radius: 20px; \n"
"}"));
        image = new QLabel(groupBox);
        image->setObjectName("image");
        image->setGeometry(QRect(370, 40, 480, 270));
        image->setStyleSheet(QString::fromUtf8("QLabel {\n"
"border: 1px solid;\n"
"	background-color: rgb(51, 51, 51);\n"
"}"));
        image->setAlignment(Qt::AlignmentFlag::AlignCenter);
        add = new QPushButton(groupBox);
        add->setObjectName("add");
        add->setGeometry(QRect(740, 430, 111, 31));
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: black; \n"
"color: rgb(51, 51, 51)\n"
"border-radius: 20px; \n"
"}"));
        remove = new QPushButton(groupBox);
        remove->setObjectName("remove");
        remove->setGeometry(QRect(600, 430, 111, 31));
        remove->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: black; \n"
"color: rgb(51, 51, 51)\n"
"border-radius: 20px; \n"
"}"));
        displayLabel = new QLabel(groupBox);
        displayLabel->setObjectName("displayLabel");
        displayLabel->setGeometry(QRect(370, 250, 480, 61));
        displayLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"border: 1px solid;\n"
"	background-color: rgba(51, 51, 51, 150);\n"
"}"));
        displayLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 420, 51, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: white; \n"
"border-radius: 25px; \n"
"	color: rgb(0, 0, 0);\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 40, 131, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(10);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white; \n"
"}"));

        retranslateUi(broadcast);

        QMetaObject::connectSlotsByName(broadcast);
    } // setupUi

    void retranslateUi(QDialog *broadcast)
    {
        broadcast->setWindowTitle(QCoreApplication::translate("broadcast", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("broadcast", "Title", nullptr));
        label_2->setText(QCoreApplication::translate("broadcast", "Add Image (1280x720)", nullptr));
        uploadImageButton->setText(QCoreApplication::translate("broadcast", "Add Image File", nullptr));
        image->setText(QString());
        add->setText(QCoreApplication::translate("broadcast", "Add", nullptr));
        remove->setText(QCoreApplication::translate("broadcast", "Remove", nullptr));
        displayLabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("broadcast", "<", nullptr));
        label_3->setText(QCoreApplication::translate("broadcast", "(Max 60 Characters) ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class broadcast: public Ui_broadcast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROADCAST_H
