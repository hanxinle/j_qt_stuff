#ifndef MYWIDGET
#define MYWIDGET

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class mywidget : public QWidget {

    Q_OBJECT;

public:
    mywidget(QWidget *parent = nullptr);
    ~mywidget();

private:
    QLabel *user_name_;
    QLabel *pass_word_;
    QLineEdit *input_name_;
    QLineEdit *input_passwd_;
    QPushButton *btn_login_;
    QPushButton *btn_regist_;

    QWidget *ui;

};
#endif // ! MYWIDGET
