#pragma once

#include <QtWidgets/QWidget>
#include "ui_scroll_bar.h"

class scroll_bar : public QWidget
{
    Q_OBJECT

public:
    scroll_bar(QWidget *parent = nullptr);
    ~scroll_bar();

private:
    Ui::scroll_barClass ui;
};
