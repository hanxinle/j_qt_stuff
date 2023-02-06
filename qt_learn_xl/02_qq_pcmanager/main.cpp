#include "qq_pcmanager.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qq_pcmanager w;
    w.show();
    return a.exec();
}
