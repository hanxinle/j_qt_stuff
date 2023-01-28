#include "list_widget.h"
#include <qdebug.h>

list_widget::list_widget(QWidget *parent)
    : QWidget(parent) {

    ui.setupUi(this);

    QIcon icon1(":/imgs/picture/0.png");
    QListWidgetItem *item1 = new QListWidgetItem(icon1, "");
    ui.listWidget->insertItem(0, item1);
    ui.listWidget->setIconSize(QSize(55, 55));

    QIcon icon2(":/imgs/picture/1.png");
    QListWidgetItem *item2 = new QListWidgetItem(icon2, "");
    ui.listWidget->insertItem(1, item2);
    ui.listWidget->setIconSize(QSize(55, 55));

    QIcon icon3(":/imgs/picture/2.png");
    QListWidgetItem *item3 = new QListWidgetItem(icon3, "");
    ui.listWidget->insertItem(2, item3);
    ui.listWidget->setIconSize(QSize(55, 55));

    QIcon icon4(":/imgs/picture/3.png");
    QListWidgetItem *item4 = new QListWidgetItem(icon4, "");
    ui.listWidget->insertItem(3, item4);
    ui.listWidget->setIconSize(QSize(55, 55));

    QIcon icon5(":/imgs/picture/4.png");
    QListWidgetItem *item5 = new QListWidgetItem(icon5, "");
    ui.listWidget->insertItem(4, item5);
    ui.listWidget->setIconSize(QSize(55, 55));

    // 下面都是 OK 的,取决于自己要用什么对象完成操作.
    // 以此来决定使用的参数类型，进而选择信号类型.
    connect(ui.listWidget, &QListWidget::currentRowChanged, this, [=](int index) {
        qDebug() << index;
        ui.stackedWidget->setCurrentIndex(index);
    });

    connect(ui.listWidget, &QListWidget::currentTextChanged, this, [=](const QString &str) { qDebug() << str; });
}

list_widget::~list_widget() {}
