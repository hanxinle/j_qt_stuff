#pragma once

#include <QtWidgets/QWidget>
#include "ui_textedit_plaintextedit.h"

class textedit_plaintextedit : public QWidget {
    Q_OBJECT

public:
    textedit_plaintextedit(QWidget *parent = nullptr);
    ~textedit_plaintextedit();

public slots:
    void slt_onText(int idx);
    void slt_onClear();
    void slt_onClear2();
    void slt_onGet();

        private : Ui::textedit_plaintexteditClass ui;
};
