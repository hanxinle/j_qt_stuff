#include "third_qss.h"
#include <qfile.h>
#include <qtextstream.h>
#include <qiodevice.h>

third_qss::third_qss(QWidget *parent)
    : QMainWindow(parent) {
    ui.setupUi(this);

    loadQssFile();
}

third_qss::~third_qss() {}

void third_qss::loadQssFile() {
    QFile file("I:\\qt-stuff\\qt_learn_xl\\01_third_qss\\style.qss");
    QString str;

    if ((file.open(QIODevice::ReadOnly | QIODevice::Text))) {
        QTextStream ts(&file);
        while (!ts.atEnd()) {
            str += ts.readLine();
        }
    }

    file.close();

    this->setStyleSheet(str);
}
