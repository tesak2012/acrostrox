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

    QFile old_file("e:\\ProjectX\\4312.htm");
    QFile new_file("e:\\ProjectX\\Games.htm");
    QString str;




    old_file.open(QIODevice::ReadOnly);
    new_file.open(QIODevice::WriteOnly);
    QTextStream str_old_file(&old_file);
    QTextStream str_new_file(&new_file);

    while(!str_old_file.atEnd())
    {
        str=str_old_file.readLine();
        if(str.contains("<H1>"))
        {
            str_new_file<<str.replace(QString("Hello, world!"),QString("ACROSTROX"));
            str=str_old_file.readLine();
            str_new_file<<str.replace(3,str.length()-3,"WIN for YOU");
            str=str_old_file.readLine();
            while(!str.contains("/P"))
            {
               str_new_file<<str.replace(0,str.length(),"");
               str=str_old_file.readLine();
            }
            str_new_file<<str.replace(0,str.indexOf("</P>"),"");

           // str=str_old_file.readLine();
            //str_new_file<<str.replace(0,str.length()-str.indexOf("</P>"),"2");

           // str_new_file<<str_old_file.readLine();//.replace(str.indexOf("<P>")+3,str.length()-7,"asad");
            continue;
        }
       // if(str.contains("<H1>"))
        else
        {
            str_new_file<<str;
            str_new_file<<"\n";
        }
    }
    qDebug()<<"ad";
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
