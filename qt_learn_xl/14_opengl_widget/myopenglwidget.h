#pragma once

#include <QOpenGlWidget>
#include <qopenglwidget.h>

class myopenglwidget : public QOpenGLWidget {
    Q_OBJECT

public:
    myopenglwidget(QWidget *parent);
    ~myopenglwidget();

public:

    void paintEvent(QPaintEvent * e) override;
};
