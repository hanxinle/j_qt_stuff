#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_right_menu2.h"

class right_menu2 : public QMainWindow
{
    Q_OBJECT

public:
    right_menu2(QWidget *parent = nullptr);
    ~right_menu2();

    void contextMenuEvent(QContextMenuEvent * event) override;

private:
    Ui::right_menu2Class ui;
};
