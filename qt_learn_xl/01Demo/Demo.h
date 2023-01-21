#pragma once

#include <QtWidgets/QWidget>
#include "ui_Demo.h"

class Demo : public QWidget {
    Q_OBJECT

public:
    Demo(QWidget *parent = nullptr);
    ~Demo();
signals:
    void sig1();
    
public slots:
    void slt1();
    void slt2();

private:
    Ui::DemoClass ui;
};
