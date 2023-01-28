#pragma once

#include <QtWidgets/QWidget>
#include "ui_list_widget.h"

class list_widget : public QWidget
{
    Q_OBJECT

public:
    list_widget(QWidget *parent = nullptr);
    ~list_widget();

private:
    Ui::list_widgetClass ui;
};
