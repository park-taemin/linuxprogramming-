#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; }
    int getRadius() { return radius; }

    // 연산자 오버로딩 (반지름 비교)
    bool operator>(const Circle& other) const {
        return this->radius > other.radius;
    }
};

template <class T>
T bigger(T a, T b) { 
    if (a > b) return a;
    else return b;
}

int main() {
    int a = 20, b = 50, c;
    c = bigger(a, b);
    cout << "20과 50 중 큰 값은 " << c << endl;

    Circle donut(10), pizza(20), y;
    y = bigger(donut, pizza);
    cout << "donut과 pizza 중 큰 반지름은 " << y.getRadius() << endl;

    return 0;
}

