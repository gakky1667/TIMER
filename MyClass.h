
#ifndef MYLABEL_H
#define MYLABEL_H
#include<QLabel>
#include <QString>
#include <QPainter>
#include <QPaintEvent>
 
class MyClass : public QLabel
{
    Q_OBJECT
 
public:
    explicit MyClass(){}
    ~MyClass(){}
 
    int num=0;
 
public slots:
 
    void onTimer(){
        update();
    }
private:
	int myTimerId;

protected:
    //void paintEvent(QPaintEvent *event);
    void paintEvent(QPaintEvent *event){
        QPainter painter(this);
        painter.setPen(Qt::blue);
        painter.setFont(QFont("Arial",20));
        num++;
        painter.drawText(rect(), Qt::AlignCenter,QString::number(num));
    }
};
 
#endif // MYLABEL_H
