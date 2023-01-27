#include "label_line_edit.h"
#include <qdebug.h>
#include <qmessagebox.h>
#include <qstring.h>
#include <qimage.h>
#include <qpicture.h>

label_line_edit::label_line_edit(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);
    ui.lineEdit->setText("input here");

    qDebug() << ui.lineEdit->text();
    qDebug() << ui.label1->text();

    QString str = "1.jpg";
    QImage img;
    img.load(str);

    

    //这一段代码是显示图片
    QPixmap pm = QPixmap::fromImage(img);
    pm.scaled(ui.label2->size(), Qt::KeepAspectRatio);
    ui.label2->setScaledContents(true);
    ui.label2->setPixmap(pm);
}

label_line_edit::~label_line_edit() {}

void label_line_edit::slot_show() {
    QMessageBox::information(this, "info", ui.lineEdit->text());

}








