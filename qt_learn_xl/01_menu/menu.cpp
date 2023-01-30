#include "menu.h"
#include <qmessagebox.h>
menu::menu(QWidget *parent)
    : QMainWindow(parent) {
    ui.setupUi(this);

    QMenu *pfile = menuBar()->addMenu("File");
    QAction *pact = new QAction(this);
    pact->setText("open");
    pact->setShortcut(QKeySequence("crtl+o"));
    // 窗口左下方的提示.
    pact->setStatusTip("acl");

    pfile->addAction(pact);

    connect(pact, &QAction::triggered, [=]() { QMessageBox::information(this, "Notice", "open clicked"); });
}

menu::~menu() {}
