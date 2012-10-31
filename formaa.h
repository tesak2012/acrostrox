#ifndef FORMAA_H
#define FORMAA_H

#include <QMainWindow>

namespace Ui {
class Formaa;
}

class Formaa : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Formaa(QWidget *parent = 0);
    ~Formaa();
    
private:
    Ui::Formaa *ui;
};

#endif // FORMAA_H
