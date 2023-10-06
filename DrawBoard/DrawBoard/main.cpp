#include "drawboard.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DrawBoard w;
    w.show();
    return a.exec();
}
