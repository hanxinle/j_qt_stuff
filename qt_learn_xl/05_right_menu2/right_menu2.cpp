//#pragma execution_character_set("utf-8")

#include "right_menu2.h"
#include <qmessagebox.h>
right_menu2::right_menu2(QWidget *parent)
    : QMainWindow(parent) {
    ui.setupUi(this);
}

right_menu2::~right_menu2() {}

void right_menu2::contextMenuEvent(QContextMenuEvent *evnet) {

    //一级菜单
    QMenu *pMenu = new QMenu(this);
    QAction *pAc1 = new QAction("New", this);
    QAction *pAc2 = new QAction("Find", this);
    // 二级菜单
    QMenu *pMenu1 = new QMenu("Save as", this);
    QAction *pAc31 = new QAction(".txt", this);
    QAction *pAc32 = new QAction(".cpp", this);

    pMenu->addAction(pAc1);
    pMenu->addAction(pAc2);
    pMenu->addSeparator();

    pMenu1->addAction(pAc31);
    pMenu1->addAction(pAc32);

    pMenu->addMenu(pMenu1);
    pMenu->addSeparator();

    pMenu->setStyleSheet("QMenu{font:20px;color:blue;}");

    pMenu->move(cursor().pos());
    pMenu->show();
}
