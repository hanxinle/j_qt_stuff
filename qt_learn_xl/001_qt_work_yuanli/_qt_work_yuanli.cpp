#include "_qt_work_yuanli.h"
#include "vld.h"
#include <QLabel>
#include <QString>
#include <QTimer>

_qt_work_yuanli::_qt_work_yuanli(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);
    QLabel *label = new QLabel(QString::fromLocal8Bit("hello 你好"), this);
    label->move(100, 100);

    QTimer *time = new QTimer(this); //不设置 this 会内存泄漏    
}

void _qt_work_yuanli::onSend() {}

_qt_work_yuanli::~_qt_work_yuanli() {}
