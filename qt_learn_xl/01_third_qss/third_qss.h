#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_third_qss.h"

class third_qss : public QMainWindow
{
    Q_OBJECT

public:
    third_qss(QWidget *parent = nullptr);
    ~third_qss();

    void loadQssFile();

private:
    Ui::third_qssClass ui;
};
