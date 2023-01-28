#include "tabwidget.h"
#include "tab5.h"

tabwidget::tabwidget(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);

    static int index = 0;

    connect(ui.pushButton, &QPushButton::clicked, this, [=]() {
        index++;
        auto val = index % ui.tabWidget->count();
        ui.tabWidget->setCurrentIndex(val);
    });

    ui.tabWidget->setIconSize(QSize(120, 100));

    QIcon icon1(":/imgs/picture/0.png");
    ui.tabWidget->setTabIcon(0, icon1);

    QIcon icon2(":/imgs/picture/1.png");
    ui.tabWidget->setTabIcon(1, icon2);

    QIcon icon3(":/imgs/picture/2.png");
    ui.tabWidget->setTabIcon(2, icon3);

    QIcon icon4(":/imgs/picture/3.png");
    ui.tabWidget->setTabIcon(3, icon4);

    tab5 *tabx = new tab5(this);
    // ui.tabWidget->addTab();
    ui.tabWidget->addTab(tabx, icon4, "");
}

tabwidget::~tabwidget() {}
