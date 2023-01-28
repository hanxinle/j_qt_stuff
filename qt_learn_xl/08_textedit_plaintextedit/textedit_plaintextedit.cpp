#include "textedit_plaintextedit.h"
#include <qdebug.h>
textedit_plaintextedit::textedit_plaintextedit(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);
    ui.comboBox->addItem("1234");
    ui.comboBox->addItem("abcd");
    ui.comboBox->addItem("5678");
    ui.comboBox->addItem("efgh");

    QFont fnt;
    fnt.setPointSizeF(12);
    ui.plainTextEdit->setFont(fnt);
    ui.textEdit->setFont(fnt);
    // btn——zoomin,zoomout
    connect(ui.btn_zoomin, &QPushButton::clicked, this, [=]() {
        ui.plainTextEdit->zoomIn(2);
        //ui.plainTextEdit->zoomIn(2);
    });
    connect(ui.btn_zoomout, &QPushButton::clicked, this, [this]() {
        ui.plainTextEdit->zoomOut(2);
        //ui.textEdit->zoomOut(1);
    });
    
    connect(ui.comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(slt_onText(int)));
    connect(ui.btn_clear2,&QPushButton::clicked,this,[=](){
        ui.textEdit->clear();
        });
    connect(ui.btn_clear, &QPushButton::clicked, this, &textedit_plaintextedit::slt_onClear);
    connect(ui.btn_get, &QPushButton::clicked, this, &textedit_plaintextedit::slt_onGet);
}

textedit_plaintextedit::~textedit_plaintextedit() {}

void textedit_plaintextedit::slt_onText(int idx) {
    QString idx_str = QString::number(idx);
    QString tmp_str = ui.comboBox->currentText();
    ui.plainTextEdit->appendPlainText(tmp_str);

    // 补充一个 html 相关的接口使用
    QString html_str = "<h4 style='color:red'>" + tmp_str + "</h4>";
    ui.plainTextEdit->appendHtml(html_str);

    ui.textEdit->append(tmp_str);
}

void textedit_plaintextedit::slt_onClear() {
    ui.plainTextEdit->clear();
}

void textedit_plaintextedit::slt_onClear2() {
    ui.textEdit->clear();
}
void textedit_plaintextedit::textedit_plaintextedit::slt_onGet() {
    qDebug() << ui.comboBox->currentText();
}
