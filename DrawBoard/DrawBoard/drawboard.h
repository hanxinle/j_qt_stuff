#pragma once

#include <QtWidgets/QWidget>
#include "ui_drawboard.h"

class DrawBoard : public QWidget
{
    Q_OBJECT

public:
    DrawBoard(QWidget *parent = nullptr);
    ~DrawBoard();

private:
    Ui::DrawBoardClass ui;
};
