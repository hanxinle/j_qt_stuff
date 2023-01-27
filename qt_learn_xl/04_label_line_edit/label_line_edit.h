#pragma once

#include <QtWidgets/QWidget>
#include "ui_label_line_edit.h"

//QT_BEGIN_NAMESPACE
//namespace Ui {
//class label_line_edit;
//}
//QT_END_NAMESPACE



class label_line_edit : public QWidget
{
    Q_OBJECT

public:
    label_line_edit(QWidget *parent = nullptr);
    ~label_line_edit();
public slots:
    void slot_show();

private:
    Ui::label_line_editClass ui;
};
