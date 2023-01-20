//#pragma excution_character_charset

#include "Qstring.h"
#include <QtWidgets/QApplication>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QString str1 = "123";
    QString str2 = "456";

    int a1 = str1.toInt();
    int a2 = str2.toInt();

    qDebug() << a1 + a2;

    QString str4 = "  H1  11  ea     LLO  ";
    QString str5 = "world";

    qDebug() << str1.append(str4);
    qDebug() << str1.prepend(str5);

    qDebug() << str4.toLower();
    qDebug() << str5.toUpper();
    qDebug() << str4.size();
    qDebug() << str4.count();
    qDebug() << str4.length();
    // 去掉首尾空格.
    qDebug() << str4.trimmed();
    // 单个字符之间都是 1 个空格.
    qDebug() << str4.simplified();

    QString str12 = "D:\\ASD\\file\\imag\\123.png";
    int last = str12.lastIndexOf("1");
    int png = str12.indexOf(".png");
    qDebug() << last << "  " << png;
    // 截取的函数包括 mid、left、right
    QString filename = str12.mid(last);
    qDebug() << filename;

    QString str13;
    QString str14 = ""; //包含 \0

    qDebug() << str13.isNull() << "  " << str13.isEmpty();
    qDebug() << str14.isNull() << "  " << str14.isEmpty();

    QString str15 = "hello China";

    //是否包含 in,区分大小写
    qDebug() << str15.contains("12", Qt::CaseSensitive);
    qDebug() << str15.startsWith("he");
    qDebug() << str15.endsWith("a");
    // qDebug() << str5.toUpper();

    // Qstring w;

    //  w.show();
    //  return a.exec();
}
