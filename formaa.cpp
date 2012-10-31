#include "formaa.h"
#include "ui_formaa.h"
#include "QDesktopWidget"

Formaa::Formaa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Formaa)
{
    ui->setupUi(this);


}

Formaa::~Formaa()
{
    delete ui;
}
