#include "Demo.h"
#include <qstring.h>
#include <qdebug.h>
#include <qmessagebox.h>

Demo::Demo(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);
    // error: No such signal QPushButton::sig1()
    // connect(ui.btn2, SIGNAL(sig1()), this, SLOT(slt1(int)));
    connect(ui.btn2, SIGNAL(clicked()), this, SLOT(slt2()));
    }

Demo::~Demo() {}

void Demo::slt1() {
    QMessageBox::information(this, "slt1 called", "qDebug int");
}

void Demo::slt2() {
    QMessageBox::information(this, "slt2 called", "emit sig1");
}
