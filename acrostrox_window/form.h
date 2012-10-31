#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <mvscene.h>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT
    
public:
    explicit Form(QWidget *parent = 0);
    MvScene *scene;
    ~Form();
    
protected:
    void changeEvent(QEvent *e);

 //   virtual void keyPressEvent(QKeyEvent * keyEvent);
private:
    Ui::Form *ui;

};

#endif // FORM_H
