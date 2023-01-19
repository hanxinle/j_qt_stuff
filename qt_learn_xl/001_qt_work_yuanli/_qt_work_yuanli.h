#pragma once

#include <QtWidgets/QWidget>
#include "ui__qt_work_yuanli.h"
/***********************************************
QT助手中索引查找 Q_OBJECT：
有了这个宏可以使用信号槽或者自定义信号槽.
并且这个类必须是 QOBJECT 的子类.

MOC 元编译系统
    特殊关键字 signals 、slots、emit

    在预编译前，用元编译器moc.exe把Qt代码编译为标准
    C++兼容的代码，再由C++编译器处理.
    输入命令： moc 头文件名 -o 输出文件名.

***********************************************/
class _qt_work_yuanli : public QWidget {
    Q_OBJECT

public:
    _qt_work_yuanli(QWidget *parent = nullptr);
    ~_qt_work_yuanli();
signals:
    void sig_send();
public slots:
    void onSend();  // 需要定义实现，不然会报错.
   
private:
    Ui::_qt_work_yuanliClass ui;
};
