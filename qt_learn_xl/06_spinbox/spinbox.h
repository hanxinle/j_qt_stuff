#pragma once

#include <QtWidgets/QWidget>
#include "ui_spinbox.h"

class spinbox : public QWidget
{
    Q_OBJECT

public:
    spinbox(QWidget *parent = nullptr);
    ~spinbox();
public slots:
    void onchange(int value);

private:
    Ui::spinboxClass ui;
};
