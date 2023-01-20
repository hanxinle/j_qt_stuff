#pragma once

#include <QtWidgets/QWidget>
#include "ui_Qstring.h"

class Qstring : public QWidget {
    Q_OBJECT

public:
    Qstring(QWidget *parent = nullptr);
    ~Qstring();

private:
    Ui::QstringClass ui;
};
