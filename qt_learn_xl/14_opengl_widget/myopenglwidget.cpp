#include "myopenglwidget.h"
#include <qpainter.h>

myopenglwidget::myopenglwidget(QWidget *parent)
    : QOpenGLWidget(parent) {}

myopenglwidget::~myopenglwidget() {}

void myopenglwidget::paintEvent(QPaintEvent *e) {
    QPainter pen;

    pen.begin(this);

    QImage img;
    img.load(":/imgs/1.jpg");
    pen.drawImage(QPoint(0, 0), img);

    pen.end();
}
