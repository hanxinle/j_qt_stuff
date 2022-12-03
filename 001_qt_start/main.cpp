#include "_qt_start.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    _qt_start w;
    w.show();
    return a.exec();
}
