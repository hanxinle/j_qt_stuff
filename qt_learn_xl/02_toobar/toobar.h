#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_toobar.h"

class toobar : public QMainWindow
{
    Q_OBJECT

public:
    toobar(QWidget *parent = nullptr);
    ~toobar();

private:
    Ui::toobarClass ui;
};
