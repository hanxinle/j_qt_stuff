#include "mywidget.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>

mywidget::mywidget(QWidget *parent)
    : QWidget(parent) {
 
    ui = new QWidget;
    user_name_ = new QLabel(QString::fromLocal8Bit("用户名 "));
    pass_word_ = new QLabel(QString::fromLocal8Bit("密码 "));

    input_name_ = new QLineEdit();
    input_passwd_ = new QLineEdit();

    btn_login_ = new QPushButton(QString::fromLocal8Bit("登录"));
    btn_regist_ = new QPushButton(QString::fromLocal8Bit("注册"));



    QHBoxLayout *h1 = new QHBoxLayout;
    h1->addWidget(user_name_);
    h1->addWidget(pass_word_);

    QHBoxLayout *h2 = new QHBoxLayout;
    h2->addWidget(input_name_);
    h2->addWidget(input_passwd_);

    QHBoxLayout *h3 = new QHBoxLayout;
    h3->addWidget(btn_login_);
    h3->addWidget(btn_regist_);
    
    QVBoxLayout *v = new QVBoxLayout;
    v->addLayout(h1);
    v->addLayout(h2);
    v->addLayout(h3);
 

}

    mywidget::~mywidget() {}
