#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_statusbar.h"

class statusbar : public QMainWindow
{
    Q_OBJECT

public:
    statusbar(QWidget *parent = nullptr);
    ~statusbar();

private:
    Ui::statusbarClass ui;
};
