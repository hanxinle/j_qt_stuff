#include "label_line_edit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    label_line_edit w;
    w.show();
    return a.exec();
}
