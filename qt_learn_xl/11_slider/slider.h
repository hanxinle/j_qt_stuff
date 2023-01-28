#pragma once

#include <QtWidgets/QWidget>
#include "ui_slider.h"

class slider : public QWidget
{
    Q_OBJECT

public:
    slider(QWidget *parent = nullptr);
    ~slider();

private:
    Ui::sliderClass ui;
};
