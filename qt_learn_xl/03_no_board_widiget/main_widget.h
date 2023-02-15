#pragma once
#include "iwidget.h"
#include "title_bar.h"
#include <qwidget.h>

class MainWidget : public IWidget {

    Q_OBJECT

public:
    MainWidget(QWidget *parent = Q_NULLPTR);

private slots:
    void slt_close();

private:
    void initUi();

    TitleBar *title_bar_ = nullptr;
};
