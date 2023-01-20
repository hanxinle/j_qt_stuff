#pragma once

#include <QtWidgets/QWidget>
#include "ui_qvector.h"

class qvector : public QWidget
{
    Q_OBJECT

public:
    qvector(QWidget *parent = nullptr);
    ~qvector();

private:
    Ui::qvectorClass ui;
};
