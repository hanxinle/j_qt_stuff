#include "mywidget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>

mywidget::mywidget(QWidget *parent)
    : QWidget(parent) {

    user_name_ = new QLabel(QString::fromLocal8Bit("User Name"));
    pass_word_ = new QLabel(QString::fromLocal8Bit("Pass Word"));

    input_name_ = new QLineEdit();
    input_passwd_ = new QLineEdit();

    btn_login_ = new QPushButton(QString::fromLocal8Bit("Login"));
    btn_regist_ = new QPushButton(QString::fromLocal8Bit("Regist"));



    QHBoxLayout *h1 = new QHBoxLayout;
    h1->addWidget(user_name_);
    h1->addWidget(input_name_);

    QHBoxLayout *h2 = new QHBoxLayout;
    h2->addWidget(pass_word_);
    h2->addWidget(input_passwd_);

    QHBoxLayout *h3 = new QHBoxLayout;
    h3->addWidget(btn_login_);
    h3->addWidget(btn_regist_);
    
    QVBoxLayout *v = new QVBoxLayout(this); // 忘掉 this，找了一晚上错误.
    v->addLayout(h1);
    v->addLayout(h2);
    v->addLayout(h3);
 

}

    mywidget::~mywidget() {}
