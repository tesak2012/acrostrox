#include "mvscene.h"
#include <QGraphicsSceneMouseEvent>
#include <QKeyEvent>
#include <QGraphicsItem>
#include <QtCore>
#include <math.h>
MvScene::MvScene(QObject *parent) : QGraphicsScene(parent)
{


    worker = addEllipse(-10,-10,20,20);

    //worker->translate(25.5, 25.5);
	worker->setData(0, "Worker");
    timer=new QTimer(this);
    tmid=0;
    //setBackgroundBrush(QBrush(QColor(255,255,255), QPixmap("bg.jpg")));
}

void MvScene::timerEvent(QTimerEvent *e)
{

//worker->setPos(worker->pos().x()+10,worker->pos().y()+10);
    x=worker->pos().x();
    y=worker->pos().y();
    x1=x-3*sina;
    y1=y-3*cosa;
    worker->setPos(x1,y1);


   // if(((x1<posx+2)&&(x1>posx-2))&&((y1<posy+2)&&(y1>posy-2)))
     //   killTimer(tmid);

}




void MvScene::opa()
{
    worker->setPos(100,100);


}

void MvScene::mousePressEvent(QGraphicsSceneMouseEvent * mouseEvent_press)
{
   // timer->stop();

   /* x=worker->pos().x();
    y=worker->pos().y();

killTimer(tmid);
    if (mouseEvent->button() == Qt::RightButton)
    {
        posx=mouseEvent->scenePos().x();
    posy=mouseEvent->scenePos().y();
    x1=posx;
    y1=posy;
    sina=(x-x1)/sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    cosa=(y-y1)/sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));*/
    tmid=startTimer(30);

//    if (mouseEvent->button() == Qt::RightButton)

   // timer->start(1000);
  //  connect(timer,SIGNAL(timeout()),SLOT(opa()));
}
void MvScene::mouseMoveEvent(QGraphicsSceneMouseEvent* mouseEvent_move)
     {
    x=worker->pos().x();
    y=worker->pos().y();

//killTimer(tmid);

        posx=mouseEvent_move->scenePos().x();
    posy=mouseEvent_move->scenePos().y();
    x1=posx;
    y1=posy;
    sina=(x-x1)/sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    cosa=(y-y1)/sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
  //  tmid=startTimer(30);
}

void MvScene::keyPressEvent(QKeyEvent * keyEvent)
{
	QPointF np;
	np.setX(0);
	np.setY(0);
    switch (keyEvent->key())
    {
		case Qt::Key_Left:
            np.setX(-15);
			break;
		case Qt::Key_Right:
            np.setX(15);
			break;
		case Qt::Key_Up:
            np.setY(-15);
			break;
		case Qt::Key_Down:
            np.setY(15);
			break;
	}
	worker->translate(np.x(), np.y());


	
}
/*
void MvScene::makeWalls()
{
	float walls[11][4] = {{0, 0, 25, 245}, {25, 0, 425, 25}, {425, 0, 25, 245}, {25, 220, 400, 25}, {25, 60, 75, 25}, {100, 60, 25, 95}, {50, 120, 25, 25}, {175, 60, 25, 100}, {225, 90, 125, 25}, {275, 190, 25, 30}, {325, 115, 25, 30}};
	QBrush brush(QColor(255, 255, 255), QPixmap("wall.jpg"));
	QPen pen(Qt::NoPen);
	for (int i = 0; i < 11; i++) {
		QGraphicsItem * item =
		addRect(QRectF(walls[i][0], walls[i][1], walls[i][2], walls[i][3]), pen, brush);
		item->setData(0, "Wall");
	}
}

QGraphicsItem * MvScene::itemCollidesWith(QGraphicsItem * item)
{
	QList<QGraphicsItem *> collisions = collidingItems(item);
	foreach (QGraphicsItem * it, collisions) {
        	if (it == item)
        	     continue;
		return it;
 	}
	return NULL;
}

void MvScene::placeBox(float x, float y) 
{
	QGraphicsItem *	box = addPixmap(QPixmap("box.gif"));
	box->translate(x, y);
	if (itemCollidesWith(box))
		removeItem(box);
	else
		box->setData(0, "Box");
}

void MvScene::setBoxes()
{
	float boxes[6][2] = {{78, 120}, {180, 165}, {205, 60}, {285, 170}, {130, 100}, {330, 65}};
	for (int i = 0; i < 6; i++)
		placeBox(boxes[i][0], boxes[i][1]);
}
*/
