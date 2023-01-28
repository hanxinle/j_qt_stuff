#include "slider.h"

/*
Slider的信号
void valueChanged(int value);           // 与 sliderMoved 重复
void sliderPressed();                   // 按下
void sliderMoved(int position);
void sliderReleased();                  // 弹起
*/

slider::slider(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);
    // valueChanged 可以与 valueChanged 相互替换.

    connect(
        ui.horizontalSlider, &QSlider::valueChanged, this, [this](int v) { ui.lineEdit->setText(QString::number(v)); });

    connect(ui.horizontalSlider, &QSlider::sliderPressed, this, [this]() { ui.lineEdit->setText("PRESS"); });

    connect(ui.horizontalSlider, &QSlider::sliderReleased, this, [this]() { ui.lineEdit->setText("RELEASE"); });
}

slider::~slider() {}
