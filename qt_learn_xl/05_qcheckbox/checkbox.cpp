#include "checkbox.h"

checkbox::checkbox(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);

    connect(ui.checkBox, &QCheckBox::stateChanged, this, &checkbox::slot_func);
}

checkbox::~checkbox(){}

void checkbox::slot_func(int state) {
    if (state == Qt::Checked) {
        ui.lineEdit->setText("checked");
    } else {
        ui.lineEdit->setText("not checked");
    }
}
