#pragma execution_character_set("utf-8")
#include "qq_pcmanager.h"
#include <qmenu.h>
#include <QDesktopServices>

qq_pcmanager::qq_pcmanager(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);

    int wid = ui.listWidget->width();
    int hig = (ui.listWidget->height() - 120) / 7;

    //去掉窗口边框
    this->setWindowFlag(Qt::FramelessWindowHint);
    // 固定窗口大小
    this->setFixedSize(this->width(), this->height());
    // listWidget 构造.

    QStringList strlist;
    strlist << tr("MainPage") << tr("Virus Check") << tr("Liter Clear") << tr("Speed Up") << tr("Prive Setting")
            << tr("Toolbox") << tr("Software Manage");

    for (int i = 0; i < strlist.size(); i++) {
        QListWidgetItem *pitem = new QListWidgetItem;
        pitem->setSizeHint(QSize(wid, hig));
        pitem->setText(strlist.at(i));
        pitem->setTextAlignment(Qt::AlignCenter);
        ui.listWidget->insertItem(i, pitem);
    }
    // 显示logo
    showImage(ui.label, ":/imgs/pictures/LOGO.png");

    setBtnImage(ui.btn_min, ":/imgs/pictures/mini.png");
    setBtnImage(ui.btn_close, ":/imgs/pictures/close.png");
    setBtnImage(ui.btn_set, ":/imgs/pictures/set.png");

    connect(ui.btn_set, &QPushButton::clicked, [=] {
        QMenu *pmenu = new QMenu(this);

        QAction *a1 = new QAction(tr("advice"), this);
        QAction *a2 = new QAction(tr("setting"), this);
        QAction *a3 = new QAction(tr("join us"), this);
        QAction *a4 = new QAction(tr("help"), this);

        pmenu->addAction(a1);
        pmenu->addAction(a2);
        pmenu->addAction(a3);
        pmenu->addAction(a4);

        // https://guanjia.qq.com/help/2048.html
        connect(
            a4, &QAction::triggered, [=] { QDesktopServices::openUrl(QUrl("https://guanjia.qq.com/help/2048.html")); });

        ui.btn_set->setMenu(pmenu);
            });

    connect(ui.btn_close, &QPushButton::clicked, [=] { this->close(); });

    connect(ui.btn_min, &QPushButton::clicked, [=] { this->showMinimized(); });

    connect(ui.listWidget, &QListWidget::currentRowChanged, [=](int idx) { ui.stackedWidget->setCurrentIndex(idx); });

    connect(ui.stackedWidget, &QStackedWidget::currentChanged, [](int idx) {

    });
}

qq_pcmanager::~qq_pcmanager() {}

void qq_pcmanager::mousePressEvent(QMouseEvent *event) {
    m_window_pos = this->pos(); // 窗口位置.
    m_mouse_pos = event->globalPos(); // 鼠标位置.
    m_d_pos = m_mouse_pos - m_window_pos; //鼠标要移动的位置.
}

void qq_pcmanager::mouseMoveEvent(QMouseEvent *event) {
    this->move(event->globalPos() - m_d_pos);
}

void qq_pcmanager::showImage(QLabel *plabel, QString str) {
    QPixmap *pix = new QPixmap(str);
    pix->scaled(plabel->size(), Qt::KeepAspectRatio);
    plabel->setScaledContents(true);
    plabel->setPixmap(*pix);
}

void qq_pcmanager::setBtnImage(QPushButton *pbtn, QString path) {
    QPixmap pix(path);
    int wid = 20;
    pix.scaled(wid, wid, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    pbtn->setIcon(QIcon(pix));
    pbtn->setIconSize(QSize(wid, wid));
    pbtn->setStyleSheet("border:0px");
}
