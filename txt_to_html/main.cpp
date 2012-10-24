#include <QtCore/QCoreApplication>
#include <fstream>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QStringList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QStringList strlst=a.arguments();
    if(strlst.count()<5)
    {
    QFile old_file(strlst[3]);
    QFile main_file(strlst[1]);
    QFile new_file(strlst[2]);
    QString str;
    old_file.open(QIODevice::ReadOnly);
    main_file.open(QIODevice::ReadOnly);
    new_file.open(QIODevice::WriteOnly);
    QTextStream str_old_file(&old_file);
    QTextStream str_main_file(&main_file);
    QTextStream str_new_file(&new_file);
    bool add_t=true;
    while(!str_old_file.atEnd())
    {
        str=str_old_file.readLine();
        if(str.indexOf("<HR>")!=-1) add_t=true;
        //добавление названия проекта, пояснения к нему
        if(str.contains("<H1>"))
        {
            str_new_file<<str.replace(QString("Hello, world!"),QString("ACROSTROX: The Game"));
            str=str_old_file.readLine();
            str_new_file<<str.replace(3,str.length()-3,"<H2>"+str_main_file.readLine()+"</H2>");
            str_new_file<<str_main_file.readAll();
            str=str_old_file.readLine();
            while(!str.contains("/P"))
            {
               str_new_file<<str.replace(0,str.length(),"");
               str=str_old_file.readLine();
            }
            str_new_file<<str.replace(0,str.indexOf("</P>"),"");
           add_t=false;
            continue;
        }
       //добавление остального текста
        else
        {
            if(add_t)
            {
                if(str.indexOf("Company 2012")==-1)
            str_new_file<<str;
                else
                    str_new_file<<str.replace("Company 2012","Company of Heroes");
            str_new_file<<"\n";
            }
        }
    }
    new_file.close();
    old_file.close();
    qDebug()<<"File "+strlst[1]+" is creating";
}
    else qDebug()<<"Bad value.";


\
\

    return a.exec();
}
