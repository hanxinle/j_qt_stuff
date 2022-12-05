#pragma once

#include <QtWidgets/QWidget>
#include "ui_qt_hello_world.h"

class qt_hello_world : public QWidget
{
    Q_OBJECT

public:
    qt_hello_world(QWidget *parent = nullptr);
    ~qt_hello_world();

private:
    Ui::qt_hello_worldClass ui;
};
