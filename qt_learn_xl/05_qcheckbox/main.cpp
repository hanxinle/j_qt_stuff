#include "checkbox.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    checkbox w;
    w.show();
    return a.exec();
}
