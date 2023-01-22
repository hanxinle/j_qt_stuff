#include "Demo.h"
#include <QtWidgets/QApplication>
#include <qdialog.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Demo w;
    w.show();
    //QDialog *p = new QDialog();
    //p->show();
    return a.exec();
}
