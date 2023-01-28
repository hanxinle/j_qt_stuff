#include "opengl_widget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    opengl_widget w;
    w.show();
    return a.exec();
}
