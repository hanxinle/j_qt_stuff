#include "button.h"
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qdebug.h>
#include <qmessagebox.h>

button::button(QWidget *parent)
    : QMainWindow(parent) {
    ui.setupUi(this);
    // qt4 写法
    // connect(ui.btnget, SIGNAL(clicked()), this, SLOT(getText()));
    // connect(ui.btnset, SIGNAL(clicked()), this, SLOT(setText()));

    // qt5 写法
    /*connect(ui.btnget, &QPushButton::clicked, this, &button::getText);
    connect(ui.btnset, &QPushButton::clicked, this, &button::setText);
   */


    // lambda 表达式写法
    connect(ui.btnget, &QPushButton::clicked, this, [this]() {
        QMessageBox::information(NULL, "show", ui.line1->text(), NULL);
    });

    connect(ui.btnset, &QPushButton::clicked, this, [this]() { ui.line1->setText(ui.line2->text()); });
}

button::~button() {}

void button::getText() {
    QMessageBox::information(this, "show", ui.line1->text(), NULL);
}
void button::setText() {
    QString str = ui.line2->text();
    ui.line1->setText(str);
}
