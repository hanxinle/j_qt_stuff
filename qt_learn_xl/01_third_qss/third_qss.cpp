#include "third_qss.h"
#include <qfile.h>
#include <qtextstream.h>
#include <qiodevice.h>
#include <qresource.h>

/*================================================================
* 如果不使用 loadQssFile 函数暴露注释掉的资源文件 I:\\J_qt-stuff\\qt_learn_xl\\01_third_qss\\style.qss.
* 采用的方法是封装资源文件到 rcc 中，loadQssFile 使用的是 qrc 指明的资源文件,前提是注册 res.rcc 资源文件.
* 使用的资源打包命令是
* rcc -binary third_qss.qrc -o res.rcc
=================================================================*/

third_qss::third_qss(QWidget *parent)
    : QMainWindow(parent) {
    ui.setupUi(this);
    QString path = "I:\\J_qt-stuff\\qt_learn_xl\\01_third_qss\\res.rcc";
    QResource::registerResource(path);
    loadQssFile();
}

third_qss::~third_qss() {}

void third_qss::loadQssFile() {
    //QFile file("I:\\J_qt-stuff\\qt_learn_xl\\01_third_qss\\style.qss");
    QFile file(":/qss_file/style.qss");
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
