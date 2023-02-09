#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_simple_file.h"

class simple_file : public QMainWindow
{
    Q_OBJECT

public:
    simple_file(QWidget *parent = nullptr);
    ~simple_file();

private:
    Ui::simple_fileClass ui;
};
