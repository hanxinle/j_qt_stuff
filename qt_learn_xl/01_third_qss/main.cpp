#include "third_qss.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    third_qss w;
    w.show();
    return a.exec();
}
