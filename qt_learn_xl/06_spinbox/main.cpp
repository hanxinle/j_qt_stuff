#include "spinbox.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    spinbox w;
    w.show();
    return a.exec();
}
