#include <QGraphicsScene>


class MvScene : public QGraphicsScene
{
    Q_OBJECT
public:
    MvScene(QObject *parent = 0);
     QGraphicsItem * worker;
     QTimer *timer;
     int tmid;

public slots:
    void opa();
protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent * mouseEvent_press);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* mouseEvent_move);
    virtual void keyPressEvent(QKeyEvent * keyEvent);
    virtual void timerEvent(QTimerEvent *e);
private:
    qreal sina;
    qreal cosa;
    qreal x1,x,y1,y;
    qreal posx,posy;
    //void makeWalls();
    //QGraphicsItem * itemCollidesWith(QGraphicsItem * item);
  //  void placeBox(float x, float y);
    //void setBoxes();
};
