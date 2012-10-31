#include "serverwindow.h"
#include "ui_serverwindow.h"
#include "QDesktopWidget"
#include "QPushButton"

ServerWindow::ServerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerWindow)
{

    ui->setupUi(this);
    QPushButton *button=new QPushButton();
    button->setText("Back to main menu");
    button->setFlat(true);
    button->setStyleSheet("font: 75 16pt \"Tekton Pro Ext\"");
   ui->verticalLayout->addWidget(button);
   ui->verticalLayout->setSpacing(QApplication::desktop()->screenGeometry().height()/100);
}


ServerWindow::~ServerWindow()
{
    delete ui;
}
