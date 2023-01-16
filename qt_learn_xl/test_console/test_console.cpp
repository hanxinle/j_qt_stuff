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
    cout << "if 1" << endl;
    displayPoint(Point(1));
    Point p(1);

#elif 0 //#else also OK.
    cout << "if 0 " << endl;
    displayPoint(1);
    Point p = 1;
#endif
    return 0;
}

