#pragma once

#include <QtWidgets/QWidget>
#include <qtimer.h>
#include "ui_process_bar.h"

class process_bar : public QWidget
{
    Q_OBJECT

public:
    process_bar(QWidget *parent = nullptr);
    ~process_bar();

private:
    Ui::process_barClass ui;
    QTimer timer_;
};
