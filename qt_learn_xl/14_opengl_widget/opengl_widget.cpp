#include "opengl_widget.h"

opengl_widget::opengl_widget(QWidget *parent)
    : QOpenGLWidget(parent) {
    ui.setupUi(this);
}

opengl_widget::~opengl_widget()
{}
