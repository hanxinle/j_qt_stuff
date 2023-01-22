#pragma once

#include <QtWidgets/QWidget>
#include "ui_Demo.h"
//
// QMainWindow,QWidget,QDialog 的区别是：
// 1. QWidget 是他们的父类；
// 2. QMainWindow 类似 MFC 的单文档项目，自带菜单栏、状态栏，
//    创建项目的时候选择父类是 QMainWindow；
// 3. QDialog,QWidget 没有菜单栏，可以手动添加;  
// 4. QDialog 还分模态和非模态，模态窗口的意思是不关闭该窗口，底层窗口无法操作.
// 


class Demo : public QWidget {
    Q_OBJECT

public:
    Demo(QWidget *parent = nullptr);
    ~Demo();
signals:
    void sig1();
    
public slots:
    void slt1();
    void slt2();

private:
    Ui::DemoClass ui;
};
