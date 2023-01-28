#include "textedit_plaintextedit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    textedit_plaintextedit w;
    w.show();
    return a.exec();
}
