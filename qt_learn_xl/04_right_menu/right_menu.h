#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_right_menu.h"

class right_menu : public QMainWindow
{
    Q_OBJECT

public:
    right_menu(QWidget *parent = nullptr);
    ~right_menu();

private:
    Ui::right_menuClass ui;
};
