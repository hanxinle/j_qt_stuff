#pragma once
#include <QWidget>

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class qqq : public QWidget 
{
    Q_OBJECT

    //public:
    //    Widget(QWidget *parent = nullptr);
    //    ~Widget();

    //Q_OBJECT

public:
    qqq(QWidget *parent = nullptr);
    ~qqq();

private:
    QLabel *user_name_;
    QLabel *pass_word_;
    QLineEdit *input_name_;
    QLineEdit *input_passwd_;
    QPushButton *btn_login_;
    QPushButton *btn_regist_;
       
};
