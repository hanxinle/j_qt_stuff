#include "qt_hello_world.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_hello_world w;
    w.show();
    return a.exec();//进入事件循环
}
