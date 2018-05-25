#include"house.h"
#include<QPainter>
house::house (QPainter &painter){

    painter.drawRect(300,300,160,100);
    painter.drawLine(QPointF(300,300),QPointF(380,250));
    painter.drawLine(QPointF(380,250),QPointF(460,300));
    painter.drawRect(400,360,20,40);
    painter.eraseRect(QRect(400,360,20,40));
}
