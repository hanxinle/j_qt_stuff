#include "sigslot.h"
#include <QtCore/QCoreApplication>
#include <iostream>

// using namespace sigslot;
// 从定义文件可以看到，sig 的一系列定义的不同点在于模板参数的个数.


struct Window {
    sigslot::signal0<> sig0;
    sigslot::signal1<double> sig1;
    sigslot::signal<> sig;
};

struct MySlots : public sigslot::has_slots<> {
    void on_sig() { std::cout << "on_sig" << std::endl; }
    void on_sig0() { std::cout << "on_sig0" << std::endl; }
    void on_sig1(double v) { std::cout << "on_sig1 = " << v << std::endl; }
};

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Window w;
    MySlots slts;

    w.sig.connect(&slts, &MySlots::on_sig);
    w.sig0.connect(&slts,&MySlots::on_sig0);
    w.sig1.connect(&slts,&MySlots::on_sig1);

    w.sig();
    w.sig0();
    w.sig1(1123.44);

    return a.exec();
}
