#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_menu.h"

class menu : public QMainWindow
{
    Q_OBJECT

public:
    menu(QWidget *parent = nullptr);
    ~menu();

private:
    Ui::menuClass ui;
};
