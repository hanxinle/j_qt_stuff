#include "scroll_bar.h"

scroll_bar::scroll_bar(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);

    ui.verticalScrollBar->setRange(0, 100);
    ui.horizontalScrollBar->setRange(0, 100);
    ui.verticalScrollBar->setValue(50);
    ui.horizontalScrollBar->setValue(50);

    ui.pushButton->move(120, 140);
    connect(ui.horizontalScrollBar, &QScrollBar::valueChanged, this, [this](int v) {
        ui.pushButton->move(v + 120, ui.pushButton->y());
    });

    connect(ui.verticalScrollBar, &QScrollBar::valueChanged, this, [this](int v) {
        ui.pushButton->move(ui.pushButton->x(), v + 140);
    });
}

scroll_bar::~scroll_bar() {}
