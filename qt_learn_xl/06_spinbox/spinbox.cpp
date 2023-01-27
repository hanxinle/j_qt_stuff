#include "spinbox.h"
#include <qdebug.h>

spinbox::spinbox(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.spinBox, SIGNAL(valueChanged(int)), this, SLOT(onchange(int)));
    // connect(ui.spinBox,&QSpinBox::valueChanged, this, &spinbox::onchange);  // not work
    ui.spinBox->setValue(10);
    ui.spinBox->setRange(0, 100);
    qDebug()<<  ui.spinBox->maximum();
    
    ui.spinBox->setSingleStep(3);


    ui.doubleSpinBox->setValue(10.00);
    ui.doubleSpinBox->setRange(0.0, 100.0);
    ui.doubleSpinBox->setSingleStep(20.0);
  
    ui.doubleSpinBox->setAlignment(Qt::AlignRight);
    ui.doubleSpinBox->setPrefix("$ ");
    ui.doubleSpinBox->setSuffix(" dollar");
}

spinbox::~spinbox()
{}


void spinbox::onchange(int value) {
    
    QString str = QString::number(value);

    qDebug() << "value = " << value;

    QString str2 = QString::number(ui.spinBox->value());

    qDebug() << "str = " << str2;
    




    }
