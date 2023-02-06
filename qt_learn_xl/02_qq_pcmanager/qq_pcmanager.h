#pragma once

#include <QtWidgets/QWidget>
#include <QMouseEvent>
#include "ui_qq_pcmanager.h"

class qq_pcmanager : public QWidget {
    Q_OBJECT

public:
    qq_pcmanager(QWidget *parent = nullptr);
    ~qq_pcmanager();

    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    // label 显示.
    void showImage(QLabel *plabel, QString str);
    //显示按钮图片
    void setBtnImage(QPushButton *pbtn, QString path);

private:
    QPoint m_window_pos; // 窗口位置.
    QPoint m_mouse_pos; // 鼠标位置.
    QPoint m_d_pos; // 鼠标要移动的位置.

    Ui::qq_pcmanagerClass ui;
};
