/********************************************************************************
** Form generated from reading UI file 'homewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homewindow
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_pic;
    QPushButton *pushButton;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_3;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label_11;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_9;

    void setupUi(QDialog *homewindow)
    {
        if (homewindow->objectName().isEmpty())
            homewindow->setObjectName("homewindow");
        homewindow->resize(1280, 720);
        groupBox = new QGroupBox(homewindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 20, 281, 671));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background-color: black; \n"
"border-radius: 10px; \n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 20, 171, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat")});
        font.setPointSize(24);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white; \n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_pic = new QLabel(groupBox);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(40, 30, 41, 51));
        label_pic->setPixmap(QPixmap(QString::fromUtf8("Assets/the-chinese-university-of-hong-kong-logo-F21185E146-seeklogo.com.png")));
        label_pic->setScaledContents(true);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 130, 241, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #68246a; \n"
"color: white; \n"
"border-radius: 20px; \n"
"}"));
        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(220, 610, 41, 41));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: transparent; \n"
"border: none; \n"
"}"));
        pushButton_13 = new QPushButton(groupBox);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(20, 610, 171, 41));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: red; \n"
"color: white; \n"
"border-radius: 20px; \n"
"}"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 180, 241, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #68246a; \n"
"color: white; \n"
"border-radius: 20px; \n"
"}"));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 340, 241, 40));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #68246a; \n"
"color: white; \n"
"border-radius: 20px; \n"
"}"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 380, 241, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: transparent; \n"
"border: none; \n"
"color: white; }\n"
"QPushButton:hover{\n"
"color:rgb(240, 171, 31)\n"
"}"));

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"color:rgb(240, 171, 31)\n"
"}\n"
"QPushButton {\n"
"background-color: transparent; \n"
"border: none; \n"
"color: white; }"));

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"color:rgb(240, 171, 31)\n"
"}\n"
"QPushButton {\n"
"background-color: transparent; \n"
"border: none; \n"
"color: white; }"));

        verticalLayout_2->addWidget(pushButton_9);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 220, 239, 111));
        verticalLayout_1 = new QVBoxLayout(layoutWidget1);
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName("verticalLayout_1");
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(true);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: transparent; \n"
"border: none; \n"
"color: white; }\n"
"QPushButton:hover{\n"
"color:rgb(240, 171, 31)\n"
"}"));

        verticalLayout_1->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setEnabled(true);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: transparent; \n"
"border: none; \n"
"color: white; }\n"
"QPushButton:hover{\n"
"color:rgb(240, 171, 31)\n"
"}"));

        verticalLayout_1->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setEnabled(true);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"color:rgb(240, 171, 31)\n"
"}\n"
"QPushButton {\n"
"background-color: transparent; \n"
"border: none; \n"
"color: white; }"));

        verticalLayout_1->addWidget(pushButton_5);

        groupBox_2 = new QGroupBox(homewindow);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(310, 20, 951, 91));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background-color: black; \n"
"border-radius: 10px; \n"
"}"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 20, 531, 41));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white; \n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(710, 30, 211, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat")});
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white; \n"
"}"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        groupBox_3 = new QGroupBox(homewindow);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(310, 120, 951, 571));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background-color: white; \n"
"border-radius: 10px; \n"
"}"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 20, 111, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat")});
        font2.setPointSize(16);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(800, 20, 121, 31));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(690, 20, 121, 31));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(570, 20, 121, 31));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(50, 250, 231, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Montserrat")});
        font3.setPointSize(14);
        font3.setBold(true);
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        pushButton_10 = new QPushButton(groupBox_3);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(70, 140, 51, 51));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #d9d9d9; \n"
"border-radius: 25px; \n"
"color: rgb(0, 0, 0);\n"
"}"));
        pushButton_11 = new QPushButton(groupBox_3);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(830, 140, 51, 51));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #d9d9d9; \n"
"border-radius: 25px; \n"
"color: rgb(0, 0, 0);\n"
"}"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(160, 90, 641, 141));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"border: 1px solid; \n"
"	color: rgb(0, 0, 0);\n"
"}"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        scrollArea = new QScrollArea(groupBox_3);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(50, 310, 861, 231));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"border-radius: 10px; \n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 861, 231));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(800, 270, 91, 31));
        label_9->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(homewindow);

        QMetaObject::connectSlotsByName(homewindow);
    } // setupUi

    void retranslateUi(QDialog *homewindow)
    {
        homewindow->setWindowTitle(QCoreApplication::translate("homewindow", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("homewindow", "MENU", nullptr));
        label_pic->setText(QString());
        pushButton->setText(QCoreApplication::translate("homewindow", "HOME PAGE", nullptr));
        pushButton_12->setText(QString());
        pushButton_13->setText(QCoreApplication::translate("homewindow", "LOG OUT", nullptr));
        pushButton_2->setText(QCoreApplication::translate("homewindow", "MANAGE STUDENTS", nullptr));
        pushButton_6->setText(QCoreApplication::translate("homewindow", "ADMIN CONTROL", nullptr));
        pushButton_7->setText(QCoreApplication::translate("homewindow", "EDIT BROADCAST", nullptr));
        pushButton_8->setText(QCoreApplication::translate("homewindow", "EDIT ANNOUNCEMENT", nullptr));
        pushButton_9->setText(QCoreApplication::translate("homewindow", "VIEW STUDENTS SCHEDULE", nullptr));
        pushButton_3->setText(QCoreApplication::translate("homewindow", "ADD AND DROP", nullptr));
        pushButton_4->setText(QCoreApplication::translate("homewindow", "COURSE LIST", nullptr));
        pushButton_5->setText(QCoreApplication::translate("homewindow", "COURSE SCHEDULE", nullptr));
        groupBox_2->setTitle(QString());
        label_4->setText(QCoreApplication::translate("homewindow", "INFORMATION SYSTEM", nullptr));
        label_5->setText(QCoreApplication::translate("homewindow", "Hello, user", nullptr));
        groupBox_3->setTitle(QString());
        label_3->setText(QCoreApplication::translate("homewindow", "NEWS", nullptr));
        label_6->setText(QCoreApplication::translate("homewindow", "Connection", nullptr));
        label_7->setText(QCoreApplication::translate("homewindow", "Connection", nullptr));
        label_8->setText(QCoreApplication::translate("homewindow", "Connection", nullptr));
        label_10->setText(QCoreApplication::translate("homewindow", "ANNOUNCEMENT", nullptr));
        pushButton_10->setText(QCoreApplication::translate("homewindow", "<", nullptr));
        pushButton_11->setText(QCoreApplication::translate("homewindow", ">", nullptr));
        label_11->setText(QCoreApplication::translate("homewindow", "NEWS", nullptr));
        label_9->setText(QCoreApplication::translate("homewindow", "status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homewindow: public Ui_homewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
