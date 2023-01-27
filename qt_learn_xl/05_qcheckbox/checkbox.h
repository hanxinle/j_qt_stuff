#pragma once

#include <QtWidgets/QWidget>
#include "ui_checkbox.h"

class checkbox : public QWidget {
    Q_OBJECT

public:
    checkbox(QWidget *parent = nullptr);
    ~checkbox();
public slots:

    void slot_func(int state);

private:
    Ui::checkboxClass ui;
};
