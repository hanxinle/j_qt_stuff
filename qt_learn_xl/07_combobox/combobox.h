#pragma once

#include <QtWidgets/QWidget>
#include "ui_combobox.h"

class combobox : public QWidget
{
    Q_OBJECT

public:
    combobox(QWidget *parent = nullptr);
    ~combobox();
public slots:
    void func1(int value);
    void func2(QString str);

private:
    Ui::comboboxClass ui;
};
