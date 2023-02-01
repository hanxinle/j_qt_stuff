#pragma execution_character_set("utf-8")

#include "right_menu.h"
#include <qmessagebox.h>

right_menu::right_menu(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    QAction * pac1 = new QAction("New",this);
    QAction * pac2 = new QAction("Find",this);
    QAction * pac3 = new QAction("Save",this);
    
    addAction(pac1);
    addAction(pac2);
    addAction(pac3);
    // 设置菜单的宏函数.
    setContextMenuPolicy(Qt::ActionsContextMenu);

    connect(pac1,&QAction::triggered,[this](){
        QMessageBox::information(this,"Right Menu","Sig_triggerred");
        });
}

right_menu::~right_menu()
{}
