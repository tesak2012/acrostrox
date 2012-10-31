#include "form.h"
#include "ui_form.h"
#include <QtGui>
#include <mainwindow.h>

QGraphicsItem *item=new QGraphicsEllipseItem(-100,-100,100,100);

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{

    ui->setupUi(this);
  //  QGraphicsScene * scene = new QGraphicsScene;
    //    QGraphicsScene * scene1 = new QGraphicsScene;

    scene=new MvScene();
    ui->graphicsView->setScene(scene);

    //QTimer timer;
 //   connect(&timer, SIGNAL(timeout()),scene,SLOT(opa()));
   // timer.start(1000/33);
   // connect(this,SIGNAL()


}




Form::~Form()
{
    delete ui;
}

void Form::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
