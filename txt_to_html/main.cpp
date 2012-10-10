#include <QtCore/QCoreApplication>
#include <fstream>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFile old_file("e:\\ProjectX\\Game.txt");
    QFile new_file("e:\\ProjectX\\Game.html");
    new_file.open(QIODevice::WriteOnly);
    old_file.open(QIODevice::ReadOnly);
    QTextStream str_old_file(&old_file);
    QTextStream str_new_file(&new_file);

    str_new_file<<str_old_file.readLine();

    new_file.close();
    old_file.close();



    /*QFile my_file("e:\\ProjectX\\Game.txt");
    QFile mf("e:\\ProjectX\\123.txt");
    mf.open(QIODevice::WriteOnly);
    my_file.open(QIODevice::ReadWrite);
    char *ch=new char;
    //setlocale(LC_ALL,"Russian");
    int i=10;




    //qDebug()<<sq;
    std::fstream fs;
   // fs.open("e:\\ProjectX\\Game.txt",QIODevice::ReadWrite);
    QTextStream sd(&my_file);
    QTextStream ds(&mf);

    ds<<sd.readLine();
    while(!sd.atEnd())
    {
    sd>>ch;


   // ch=sd.readAll().data();
    //QStringList qs;
    //sq=sd.read(1).data();
   // printf(sd.read(1).data());
   // std::cout<<sd.read(1).data();
    std::cout<<ch;

}

    my_file.close();
    mf.close();*/
    return a.exec();
}
