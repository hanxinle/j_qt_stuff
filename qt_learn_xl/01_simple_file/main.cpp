#include "simple_file.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    simple_file w;
    w.show();
    return a.exec();
}
