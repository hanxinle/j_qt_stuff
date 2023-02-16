#include "title_bar.h"
#include <QHBoxLayout>

#pragma comment(lib, "user32.lib")

#include <qt_windows.h>

TitleBar::TitleBar(QWidget *p)
    : QWidget(p) {
    this->setAttribute(Qt::WA_DeleteOnClose);
    initUi();
}

TitleBar::~TitleBar() {}

void TitleBar::mousePressEvent(QMouseEvent *event) {
    if (ReleaseCapture()) {
        QWidget *pWindow = this->window();
        if (pWindow->isTopLevel()) {
            SendMessage(HWND(pWindow->winId()), WM_SYSCOMMAND, SC_MOVE + HTCAPTION, 0);
        }
    }
}

void TitleBar::mouseDoubleClickEvent(QMouseEvent *event) {
    emit btn_close_->clicked();
}

void TitleBar::on_click() {
    QPushButton *pbutton = qobject_cast<QPushButton *>(sender());

    QWidget *pwindow = this->window();

    if (pbutton == btn_min_) {
        pwindow->showMinimized();
    } else if (pbutton == btn_max_) {
        if (pwindow->isMaximized()) {
            pwindow->showNormal();
            btn_max_->setStyleSheet(
                "QPushButton{background-image:url(:/icons/resources/titlebar/normal.svg);border:none}"
                "QPushButton:hover{"
                "background-color:rgb(99, 99, 99);"
                "background-image:url(:/icons/resources/titlebar/normal_hover.svg);border:none;}");
        } else {
            pwindow->showMaximized();
            btn_max_->setStyleSheet("QPushButton{background-image:url(:/icons/resources/titlebar/max.svg);border:none}"
                                    "QPushButton:hover{"
                                    "background-color:rgb(99, 99, 99);"
                                    "background-image:url(:/icons/resources/titlebar/max_hover.svg);border:none;}");
        }
    } else if (pbutton == btn_close_) {
        emit sig_close();
    }
}

void TitleBar::initUi() {
    //禁止父窗口影响子窗口样式
    setAttribute(Qt::WA_StyledBackground);
    this->setFixedHeight(32 + 5 * 2); // 固定高度设置.
    this->setStyleSheet("background-color:rgb(54,54,54)");

    logo_ = new QLabel(this);
    logo_->setFixedSize(32, 32); //这一项不设置控件会挤在一起.
    logo_->setStyleSheet("background-image:url(:/icons/resources/titlebar/title_icon.png);border:none");

    title_txt_ = new QLabel(this);
    title_txt_->setText(u8"Iam Title");
    title_txt_->setFixedWidth(120);
    title_txt_->setStyleSheet("QLabel{font-family: Microsoft YaHei; \
		font-size:18px; \
		color:#BDC8E2;background-color:rgb(54,54,54);}");

    btn_set_ = new QPushButton(this);
    btn_set_->setFixedSize(32, 32);
    btn_set_->setStyleSheet("QPushButton{background-image:url(:/icons/resources/titlebar/set.svg);border:none}"
                            "QPushButton:hover{"
                            "background-color:rgb(99, 99, 99);"
                            "background-image:url(:/icons/resources/titlebar/set_hover.svg);border:none;}");

    btn_min_ = new QPushButton(this);
    btn_min_->setFixedSize(32, 32);
    btn_min_->setStyleSheet("QPushButton{background-image:url(:/icons/resources/titlebar/min.svg);border:none}"
                            "QPushButton:hover{"
                            "background-color:rgb(99, 99, 99);"
                            "background-image:url(:/icons/resources/titlebar/min_hover.svg);border:none;}");

    btn_max_ = new QPushButton(this);
    btn_max_->setFixedSize(32, 32);
    btn_max_->setStyleSheet("QPushButton{background-image:url(:/icons/resources/titlebar/normal.svg);border:none}"
                            "QPushButton:hover{"
                            "background-color:rgb(99, 99, 99);"
                            "background-image:url(:/icons/resources/titlebar/normal_hover.svg);border:none;}");

    btn_close_ = new QPushButton(this);
    btn_close_->setFixedSize(32, 32);
    btn_close_->setStyleSheet("QPushButton{background-image:url(:/icons/resources/titlebar/close.svg);border:none}"
                              "QPushButton:hover{"
                              "background-color:rgb(99, 99, 99);"
                              "background-image:url(:/icons/resources/titlebar/close_hover.svg);border:none;}");

    QHBoxLayout *pHlay = new QHBoxLayout(this);
    pHlay->addWidget(logo_);
    pHlay->addWidget(title_txt_);
    pHlay->addStretch();
    pHlay->addWidget(btn_set_);
    QSpacerItem *pItem1 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Fixed);
    pHlay->addSpacerItem(pItem1);

    pHlay->addWidget(btn_min_);
    QSpacerItem *pItem2 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Fixed);
    pHlay->addSpacerItem(pItem2);
    pHlay->addWidget(btn_max_);

    QSpacerItem *pItem3 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Fixed);
    pHlay->addSpacerItem(pItem3); // 弹簧每次使用时得new出来，不能重复使用
    pHlay->addWidget(btn_close_);
    // 设置边缘（与主窗口边缘的间隔）
    pHlay->setContentsMargins(5, 5, 5, 5);

    connect(btn_min_, &QPushButton::clicked, this, &TitleBar::on_click);
    connect(btn_max_, &QPushButton::clicked, this, &TitleBar::on_click);
    connect(btn_close_, &QPushButton::clicked, this, &TitleBar::on_click);
}
