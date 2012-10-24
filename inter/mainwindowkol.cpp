#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDesktopWidget"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
   // ui->label->setPixmpa(new QPicture("i:/ACROSTROX"));
    QPushButton *button=new QPushButton();
    button->setText("Back");
    button->setFlat(true);
    button->setStyleSheet("font: 75 16pt \"Palatino Linotype\"");
   connect(button,SIGNAL(clicked()),this, SLOT(close()));
  ui->verticalLayout->addWidget(button);
  // ui->verticalLayout->setContentsMargins(QApplication::desktop()->screenGeometry().width()/9,0,QApplication::desktop()->screenGeometry().width()/9,0);
   ui->verticalLayout->setSpacing(QApplication::desktop()->screenGeometry().height()/100);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
