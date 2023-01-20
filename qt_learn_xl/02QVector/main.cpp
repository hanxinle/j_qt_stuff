#include "qvector.h"
#include <QtWidgets/QApplication>
#include <QVector>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QVector<int> vec {};
    qDebug() << "vec's size and capacity: " << vec.size() << vec.capacity();
    for (auto &v : vec) {
        qDebug() << v;
    }
    qDebug() << "---------------------";
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    for (auto &v : vec) {
        qDebug() << v;
    }
    qDebug() << "---------------------";
    vec.pop_back();
    vec.pop_front();

    for (auto &v : vec) {
        qDebug() << v;
    }
    qDebug() << "---------------------";
    QVector<int> v1;
    for (int i = 0; i < 10; i++)
        v1.push_back(i + 1);
    for (auto &v : v1) {
        qDebug() << v;
    }
    qDebug() << "---------------------";

    v1.remove(3);
    for (auto &v : v1) {
        qDebug() << v;
    }
    qDebug() << "---------------------";
    v1.insert(0, 100);
    v1.insert(3, 4);

    for (auto &v : v1) {
        qDebug() << v;
    }

    qDebug() << "---------------------";
    qDebug() << v1.size();

    qDebug() << "---------------------";

    v1.clear();
    qDebug() << v1.size();
    qDebug() << "---------------------";
    // qvector w;
    // w.show();
    return a.exec();
}
