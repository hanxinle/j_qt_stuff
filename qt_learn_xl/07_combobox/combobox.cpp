#include "combobox.h"
#include <QDebug>

combobox::combobox(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);

    connect(ui.comboBox, QOverload<int>::of (& QComboBox::currentIndexChanged), this, &combobox::func1);
    connect(ui.comboBox_2, QOverload<const QString &>::of (& QComboBox::currentTextChanged), this, &combobox::func2);
}

combobox::~combobox() {}

void combobox::func1(int value) {
    qDebug() << "index = " << value;
    qDebug() << "combobox index = "<<  ui.comboBox->currentIndex();
}
void combobox::func2(QString str) {
    qDebug() << "str = " << str;
    qDebug() << "Select string = " << ui.comboBox_2->currentText();
}
