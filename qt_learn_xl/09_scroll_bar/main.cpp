#include "scroll_bar.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    scroll_bar w;
    w.show();
    return a.exec();
}
