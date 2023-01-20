#include "qmap.h"
#include <QtWidgets/QApplication>
#include <qmap.h>
#include <QString>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QMap<int, QString> map;
    map.insert(0, "000");
    map.insert(1, "111");
    // map.insert(1, "222");
    map.insert(2, "333");
    QMapIterator<int, QString> it (map);
    while (it.hasNext()) {
        it.next();
        qDebug() << it.key() << it.value();
    }
    qDebug() << "---------------------";
    qDebug() << map.contains(12);
    qDebug() << map.contains(1);
    qDebug() << "---------------------";
    map.remove(1);
    qDebug() << map.contains(1);
    qDebug() << "---------------------";
    
    it = map;
    while (it.hasNext()) {
        it.next();
        qDebug() << it.key() << it.value();
    }

    qDebug() << "---------------------";
    // qmap w;
    // w.show();
    //return a.exec();
}
