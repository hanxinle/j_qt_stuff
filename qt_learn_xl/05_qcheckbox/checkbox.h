#pragma once

#include <QtWidgets/QWidget>
#include "ui_checkbox.h"

class checkbox : public QWidget {
    Q_OBJECT

public:
    checkbox(QWidget *parent = nullptr);
    ~checkbox();
public slots:
    // state 参数可以由文档获悉,
    // 内部触发信号的时候 emit 还有 state 参数的传递.
    void slot_func(int state);

private:
    Ui::checkboxClass ui;
};
