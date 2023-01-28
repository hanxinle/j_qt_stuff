#pragma once

#include <QtWidgets/QWidget>
#include "ui_opengl_widget.h"


class opengl_widget : public QOpenGLWidget
{
    Q_OBJECT

public:
    opengl_widget(QWidget *parent = nullptr);
    ~opengl_widget();

private:
    Ui::opengl_widgetClass ui;
};
