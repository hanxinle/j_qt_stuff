#include "list_widget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    list_widget w;
    w.show();
    return a.exec();
}
