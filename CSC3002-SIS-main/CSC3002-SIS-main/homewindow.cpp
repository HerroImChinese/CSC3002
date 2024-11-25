#include "homewindow.h"
#include "ui_homewindow.h"
#include "login.h"
#include "announcement.h"
#include "broadcast.h"
#include <QScrollArea>
#include <QVBoxLayout>
#include <QLabel>
#include <QSqlQuery>
#include <QSqlError>


homewindow::homewindow(QString *username, QString *Password, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homewindow), username(username), Password(Password){
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/nicho/Downloads/CSC3002-SIS-main/CSC3002-SIS-main/Assets/#68246a.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
    QPixmap logo ("C:/Users/nicho/Downloads/CSC3002-SIS-main/CSC3002-SIS-main/Assets/the-chinese-university-of-hong-kong-logo-F21185E146-seeklogo.com.png");

    ui->label_pic->setPixmap(logo);
    ui->pushButton->setIcon(QIcon("C:/Users/nicho/Downloads/CSC3002-SIS-main/CSC3002-SIS-main/Assets/dashboardsmall1.png"));
    ui->pushButton->setIconSize(QSize(18,18));
    ui->pushButton_2->setIcon(QIcon("C:/Users/nicho/Downloads/CSC3002-SIS-main/CSC3002-SIS-main/Assets/PngItem_3560316(1).png"));
    ui->pushButton_2->setIconSize(QSize(20,20));
    ui->pushButton_6->setIcon(QIcon("C:/Users/nicho/Downloads/CSC3002-SIS-main/CSC3002-SIS-main/Assets/teacherssmall1.png"));
    ui->pushButton_6->setIconSize(QSize(20,20));
    ui->pushButton_13->setIcon(QIcon("C:/Users/nicho/Downloads/CSC3002-SIS-main/CSC3002-SIS-main/Assets/signoutsmall1.png"));
    ui->pushButton_13->setIconSize(QSize(20,20));
    ui->pushButton_12->setIcon(QIcon("C:/Users/nicho/Downloads/CSC3002-SIS-main/CSC3002-SIS-main/Assets/Command-Reset-256.png"));
    ui->pushButton_12->setIconSize(QSize(20,20));
    Login conn;
    if (!conn.connOpen()) {
        ui->label_6->setText("Failed to Connect");
        return;
    } else {
        ui->label_6->setText("Connected");
    }
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->pushButton_5->hide();
    ui->pushButton_7->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
    ui->label_7->setText(*username);
    ui->label_8->setText(*Password);
    QString name;
    QSqlQuery queries;
    queries.prepare("SELECT * FROM Student WHERE StudentID=:username AND Password=:password");
    queries.bindValue(":username", *username);
    queries.bindValue(":password", *Password);
    if (!queries.exec()) {
        qDebug() << "Failed connecting to database";
    }
    if (queries.next()) {
        name = queries.value("Name").toString();
    }

    ui->label_5->setText("Hello, " + name);
    conn.connClose();

    if (!connOpen()) {
        ui->label_9->setText("Failed to Connect");
    } else {
        ui->label_9->setText("Connected");
    }

    QScrollArea *scrollArea = ui->scrollArea; // Assuming scrollArea is added in your .ui file
        QWidget *container = new QWidget(scrollArea);
        QVBoxLayout *layout = new QVBoxLayout(container);

        // Set container properties
        container->setLayout(layout);
        scrollArea->setWidget(container);
        scrollArea->setWidgetResizable(true);

        // Query the database for announcements
        QSqlQuery query;
        query.prepare("SELECT * FROM Announcements");
        if (!query.exec()) {
            qDebug() << "Failed to fetch announcements: " << query.lastError();
            return;
        }


        while (query.next()) {
            QString title = query.value("Title").toString();
            QString description = query.value("Description").toString();
            QWidget *announcementBox = new QWidget();
            QVBoxLayout *boxLayout = new QVBoxLayout(announcementBox);
            QLabel *titleLabel = new QLabel("<b>" + title + "</b>");
            QLabel *descriptionLabel = new QLabel(description);
            boxLayout->addWidget(titleLabel);
            boxLayout->addWidget(descriptionLabel);
            announcementBox->setStyleSheet("border: 1px solid gray; background-color: white; color: black; border-radius: 15px; margin: 5px; padding: 10px;");
            layout->addWidget(announcementBox);
        }




//            ui->label_7->setText(*username);
//            ui->label_8->setText(*Password);
//            int count = 0;
//            QSqlQuery queries;
//            queries.prepare("SELECT * FROM Student WHERE StudentID=:username AND Password=:password");
//            queries.bindValue(":username", *username);
//            queries.bindValue(":password", *Password);
//            if (!queries.exec()) {
//                 qDebug() << "failed Executing sql" << queries.lastError();
//                 return;
//            }
//            while(queries.next()) {
//                count++;
//            }
//            qDebug()<< count;
}

homewindow::~homewindow()
{
    delete ui;
}



void homewindow::on_pushButton_2_clicked(bool)
{
    if (!checked) {  // If checked is false, show the buttons
            ui->pushButton_3->show();
            ui->pushButton_4->show();
            ui->pushButton_5->show();
            checked = true;  // Update state
        } else {  // If checked is true, hide the buttons
            ui->pushButton_3->hide();
            ui->pushButton_4->hide();
            ui->pushButton_5->hide();
            checked = false;  // Update state
    }
}

void homewindow::on_pushButton_6_clicked(bool)
{
    if (!checked1) {
            ui->pushButton_7->show();
            ui->pushButton_8->show();
            ui->pushButton_9->show();
            checked1 = true;
        } else {
            ui->pushButton_7->hide();
            ui->pushButton_8->hide();
            ui->pushButton_9->hide();
            checked1 = false;
    }
}

void homewindow::on_pushButton_8_clicked()
{
    Announcement *announcement = new Announcement(this);
    announcement->setModal(false);
    announcement->setAttribute(Qt::WA_DeleteOnClose);
    announcement->show();
}

void homewindow::on_pushButton_7_clicked()
{
    broadcast *Broadcast = new broadcast(this);
    Broadcast->setModal(false);
    Broadcast->setAttribute(Qt::WA_DeleteOnClose);
    Broadcast->show();
}

void homewindow::on_pushButton_12_clicked()
{
    this->close();
    homewindow *newWindow = new homewindow(username, Password);
    newWindow->show();
}

void homewindow::on_pushButton_13_clicked()
{
    this->close();
    Login *login = new Login();
    login->show();
}
