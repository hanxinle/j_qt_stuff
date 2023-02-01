#include "right_menu.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    right_menu w;
    w.show();
    return a.exec();
}
