#include"person.h"
#include<QPainter>
Person::Person(QPainter &painter){
    painter.drawEllipse(QPointF(900,400),15,15);
    painter.drawRect(880,415,40,80);
    painter.drawLine(QPointF(880,450),QPointF(850,490));
    painter.drawLine(QPointF(920,450),QPointF(950,490));
    painter.drawLine(QPointF(885,495),QPointF(885,550));
    painter.drawLine(QPointF(915,495),QPointF(915,550));
}
