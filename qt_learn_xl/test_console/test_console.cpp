// test_console.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Point {
public:
    int x, y;

#if 1
    explicit Point(int x = 0, int y = 0)
        : x(x)
        , y(y) {}

#elif 0
    Point(int x = 0, int y = 0)
        : x(x)
        , y(y) {}

#endif
};

void displayPoint(const Point &p) {
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

int main() {
#if 1
    displayPoint(Point(1));
    Point p(1);

#elif 0 //#else also OK.
    displayPoint(1);
    Point p = 1;
#endif
    return 0;
}
