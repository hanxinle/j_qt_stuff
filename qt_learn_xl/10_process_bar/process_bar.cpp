#include "process_bar.h"

process_bar::process_bar(QWidget *parent)
    : QWidget(parent) {

    static int pos = 0;
    ui.setupUi(this);

    ui.progressBar->setRange(0, 100);
    ui.progressBar->setValue(0);

    connect(ui.start, &QPushButton::clicked, this, [this]() { timer_.start(100); });
    connect(ui.stop, &QPushButton::clicked, this, [this]() { timer_.stop(); });

    connect(&timer_, &QTimer::timeout, this, [this]() {
        if (100 == pos) {
            timer_.stop();
        }

        ui.progressBar->setValue(pos++);
    });

    connect(ui.reset, &QPushButton::clicked, this, [=]() {
        pos = 0;
        ui.progressBar->setValue(0); });
}

process_bar::~process_bar() {}
