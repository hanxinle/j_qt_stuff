#include "statusbar.h"

statusbar::statusbar(QWidget *parent)
    : QMainWindow(parent) {
    ui.setupUi(this);

    connect(ui.pushButton, &QPushButton::clicked, this, [=]() {
        statusBar()->showMessage("btn cliced",2000);
    });
}

statusbar::~statusbar() {}
