/********************************************************************************
** Form generated from reading UI file 'announcement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNOUNCEMENT_H
#define UI_ANNOUNCEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Announcement
{
public:
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *Announcement)
    {
        if (Announcement->objectName().isEmpty())
            Announcement->setObjectName("Announcement");
        Announcement->resize(500, 500);
        pushButton_2 = new QPushButton(Announcement);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(180, 440, 121, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: red; \n"
"border-radius: 20px;\n"
"color: white; \n"
"}"));
        groupBox = new QGroupBox(Announcement);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 40, 371, 391));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background-color: black; \n"
"border-radius: 15px; \n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 71, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat")});
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white; \n"
"}"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 70, 301, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border-radius: 15px; \n"
"padding-left: 10px; \n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 120, 221, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white; \n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 150, 321, 221));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"border-radius: 15px; \n"
"padding: 10px; \n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 20, 101, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white; \n"
"}"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        pushButton = new QPushButton(Announcement);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 20, 51, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: white; \n"
"border-radius: 25px; \n"
"	color: rgb(0, 0, 0);\n"
"}"));

        retranslateUi(Announcement);

        QMetaObject::connectSlotsByName(Announcement);
    } // setupUi

    void retranslateUi(QDialog *Announcement)
    {
        Announcement->setWindowTitle(QCoreApplication::translate("Announcement", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Announcement", "POST", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Announcement", "Title", nullptr));
        label_2->setText(QCoreApplication::translate("Announcement", "Description", nullptr));
        label_3->setText(QCoreApplication::translate("Announcement", "status", nullptr));
        pushButton->setText(QCoreApplication::translate("Announcement", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Announcement: public Ui_Announcement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNOUNCEMENT_H
