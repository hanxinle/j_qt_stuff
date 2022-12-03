#pragma once

#include <QtWidgets/QWidget>
#include "ui__qt_start.h"

class _qt_start : public QWidget
{
    Q_OBJECT

public:
    _qt_start(QWidget *parent = nullptr);
    ~_qt_start();

private:
    Ui::_qt_startClass ui;
};
