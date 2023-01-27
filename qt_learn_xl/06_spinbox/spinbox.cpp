#include "spinbox.h"
#include <qdebug.h>

spinbox::spinbox(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);
    // qt4 --- ok
    // connect(ui.spinBox, SIGNAL(valueChanged(int)), this, SLOT(onchange(int)));

    /*
    qt5 --- ok -- int the document says:

    Note: Signal valueChanged is overloaded in this class. To connect to this signal by using the function pointer
    syntax, Qt provides a convenient helper for obtaining the function pointer as shown in this example:

    connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
      [=](int i){ });
    */

    connect(ui.spinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &spinbox::onchange); // not work
    ui.spinBox->setValue(10);
    ui.spinBox->setRange(0, 100);
    qDebug() << ui.spinBox->maximum();

    ui.spinBox->setSingleStep(3);

    ui.doubleSpinBox->setValue(10.00);
    ui.doubleSpinBox->setRange(0.0, 100.0);
    ui.doubleSpinBox->setSingleStep(20.0);

    ui.doubleSpinBox->setAlignment(Qt::AlignRight);
    ui.doubleSpinBox->setPrefix("$ ");
    ui.doubleSpinBox->setSuffix(" dollar");
}

spinbox::~spinbox() {}

void spinbox::onchange(int value) {

    QString str = QString::number(value);

    qDebug() << "value = " << value;

    QString str2 = QString::number(ui.spinBox->value());

    qDebug() << "str = " << str2;
}
