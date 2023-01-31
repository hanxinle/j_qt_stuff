#include "toobar.h"
#include <qaction.h>
#include <qtoolbar.h>
#include <qmessagebox.h>
toobar::toobar(QWidget *parent)
    : QMainWindow(parent) {
    ui.setupUi(this);

    QToolBar *ptoolbar = addToolBar("file");

    QIcon ic1(":/toobar/picture/1.png");
    // QAction ac1(ic1, "open", this);  // 栈变量，not work.
    QAction *pac1 = new QAction(ic1, "open", this);

    QIcon ic2(":/toobar/picture/2.png");
    QAction *pac2 = new QAction(ic2, "save", this);

    QIcon ic3(":/toobar/picture/3.png");
    QAction *pac3 = new QAction(ic3, "search", this);

    QIcon ic4(":/toobar/picture/4.png");
    QAction *pac4 = new QAction(ic4, "advance", this);

    QIcon ic5(":/toobar/picture/5.png");
    QAction *pac5 = new QAction(ic5, "next", this);

    QIcon ic6(":/toobar/picture/6.png");
    QAction *pac6 = new QAction(ic6, "clect", this);

    ptoolbar->setMovable(false);
    ptoolbar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    // ptoolbar->addAction(&ac1);
    ptoolbar->addAction(pac1);
    ptoolbar->addSeparator();
    ptoolbar->addAction(pac2);
    ptoolbar->addSeparator();
    ptoolbar->addAction(pac3);
    ptoolbar->addSeparator();
    ptoolbar->addAction(pac4);
    ptoolbar->addSeparator();
    ptoolbar->addAction(pac5);
    ptoolbar->addSeparator();
    ptoolbar->addAction(pac6);

    connect(pac1, &QAction::triggered, this, [=]() { QMessageBox::information(this, "msg", "open ok"); });
}
toobar::~toobar() {}
