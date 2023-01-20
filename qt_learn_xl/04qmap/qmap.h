#pragma once

#include <QtWidgets/QWidget>
#include "ui_qmap.h"

class qmap : public QWidget
{
    Q_OBJECT

public:
    qmap(QWidget *parent = nullptr);
    ~qmap();

private:
    Ui::qmapClass ui;
};
