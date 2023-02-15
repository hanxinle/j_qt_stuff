#include "main_widget.h"
#include <QVBoxLayout>
#include <QMessageBox>

MainWidget::MainWidget(QWidget *parent)
    : IWidget(parent) {
    initUi();
}

void MainWidget::slt_close() {
    QMessageBox::StandardButton exit = QMessageBox::warning(
        this, u8"Warining", u8"Quit or not?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

    if (exit == QMessageBox::Yes) {
        close();
    }
}

void MainWidget::initUi() {
    title_bar_ = new TitleBar(this);
    QWidget *w = new QWidget(this);
    w->setMinimumSize(800, 600);

    QVBoxLayout *vlayout = new QVBoxLayout(this);
    vlayout->addWidget(title_bar_);
    vlayout->addWidget(w);

    // 设置页面和主页边缘的间隔.
    vlayout->setContentsMargins(0, 0, 0, 0);
    connect(title_bar_, &TitleBar::sig_close, this, &MainWidget::slt_close);
}
