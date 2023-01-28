#pragma once

#include <QtWidgets/QWidget>
#include "ui_tabwidget.h"

class tabwidget : public QWidget
{
    Q_OBJECT

public:
    tabwidget(QWidget *parent = nullptr);
    ~tabwidget();

private:
    Ui::tabwidgetClass ui;
};
