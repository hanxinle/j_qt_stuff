#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_button.h"

class button : public QMainWindow
{
    Q_OBJECT

public:
    button(QWidget *parent = nullptr);
    ~button();
public slots:
    void getText();
    void setText();

private:
    Ui::buttonClass ui;
};
