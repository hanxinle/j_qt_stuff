#include "mywidget.h"
#include "qqq.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    // 下面两句是利用 UI 工具创建的登录窗体.
    /*  login w;
      w.show();*/
    //mywidget my;
    //my.show();
    qqq q;
    q.show();

    return a.exec();
}
