#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qlist.h"

class qlist : public QMainWindow
{
    Q_OBJECT

public:
    qlist(QWidget *parent = nullptr);
    ~qlist();

private:
    Ui::qlistClass ui;
};
