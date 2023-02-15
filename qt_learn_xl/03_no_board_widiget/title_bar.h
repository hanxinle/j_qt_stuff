#pragma once
#include <qwidget.h>
#include <qlabel.h>
#include <qpushbutton.h>

class TitleBar : public QWidget {

    Q_OBJECT

public:
    TitleBar(QWidget *parent = nullptr);
    ~TitleBar();
private slots:
    void on_click();
signals:
    void sig_close();

private:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void initUi();

private:
    QLabel *logo_;
    QLabel *title_txt_;

    QPushButton *btn_set_;
    QPushButton *btn_min_;
    QPushButton *btn_max_;
    QPushButton *btn_close_;
};
