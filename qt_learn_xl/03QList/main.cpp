#include "qlist.h"
#include <QtWidgets/QApplication>
#include <QList>
#include <QString>
#include <qdebug.h>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QList<QString> list;
    list.insert(0, "1");
    list.insert(1, "2");
    list.push_back("3");
    list.push_front("0.0");

    for (auto &v : list) {
        qDebug() << v;
    }
    qDebug() << "---------------------";
    qDebug() << list.size();
    qDebug() << list.at(1);
    qDebug() << list[1];
    qDebug() << "---------------------";
    //for (auto &v : list) {
    //    qDebug() << v;
    //}
    qDebug() << list.contains("3");

    qDebug() << "---------------------";

    // qlist w;
    // w.show();
    return a.exec();
}
