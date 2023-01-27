#include "qqq.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
//#include <QString>

qqq::qqq(QWidget *parent)
    : QWidget(parent) {
    //QWidget *w = new QWidget(this);
 /*   w->setContentsMargins(0,100,300,300);*/

    user_name_ = new QLabel(QString::fromLocal8Bit("User Name "));
    pass_word_ = new QLabel(QString::fromLocal8Bit("Pass Word "));
    //user_name_->move(100, 100);
    //user_name_->show();

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

    QVBoxLayout *v = new QVBoxLayout(this);
    v->addLayout(h1);
    v->addLayout(h2);
    v->addLayout(h3);
}


qqq::~qqq() {}
