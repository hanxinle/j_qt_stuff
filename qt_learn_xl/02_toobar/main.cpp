#include "toobar.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    toobar w;
    w.show();
    return a.exec();
}
