#include "_qt_work_yuanli.h"
#include <QtWidgets/QApplication>

/*
C:\Qt\Qt5.14.2\5.14.2\Src\qtbase\src\widgets\kernel\qapplication.cpp
发现调用 qguiapplication::exec();

MOC 元编译系统
    特殊关键字 signals 、slots、emit(信号发送)

    在预编译前，用元编译器moc.exe把Qt代码编译为标准C++兼容的代码，再由C++编译器处理。
    输入命令： moc 头文件名 -o 输出文件名


*/


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    _qt_work_yuanli w;
    w.show();
    return a.exec(); // 进入事件循环处理
}
