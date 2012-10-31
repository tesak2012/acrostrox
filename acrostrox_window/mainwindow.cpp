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
    button->setText("EXIT");
    button->setFlat(true);
    button->setStyleSheet("font: 75 16pt \"Tekton Pro Ext\"");
    connect(button,SIGNAL(clicked()),this, SLOT(close()));
    ui->picture_bad->setPixmap(QPixmap("Bad.png"));
     ui->picture_good->setPixmap(QPixmap("Good.png"));
      ui->picture_name->setPixmap(QPixmap("ACROSTROX.png"));
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

void MainWindow::on_pushButton_clicked()
{
    this->close();
    form.show();


}
