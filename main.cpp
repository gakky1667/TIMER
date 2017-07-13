//#include "mainwindow.h"
#include <QMainWindow>
#include <QApplication>
#include<iostream>
#include <QThread>
#include <QString>
#include "MyClass.h"
#include <QObject>
#include <QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 
    QTimer *timer=new QTimer();
 
    MyClass * myClass = new MyClass();
    myClass->setFixedWidth(200);
    myClass->setFixedHeight(50);
    myClass->show();
 
    eObject::connect(timer,SIGNAL(timeout()), myClass, SLOT(onTimer()));
    timer->start(1000);
 
    return a.exec();
}
