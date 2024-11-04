#include <iostream>
using namespace std;

class Power {
    int kick;
    int punch;

public:
    // 기본 생성자
    Power() : kick(0), punch(0) {}

    // 매개변수가 있는 생성자
    Power(int kick, int punch) : kick(kick), punch(punch) {}

    // 멤버 함수로서의 곱셈 연산자 오버로딩 (Power * int 형태 지원)
    Power operator*(int multiplier) const {
        return Power(kick * multiplier, punch * multiplier);
    }

    // 전역 함수로서의 곱셈 연산자 오버로딩 (int * Power 형태 지원)
    friend Power operator*(int multiplier, const Power &p) {
        return Power(p.kick * multiplier, p.punch * multiplier);
    }

    // show() 함수
    void show() const {
        cout << "kick=" << kick << ", punch=" << punch << endl;
    }
};

int main() {
    Power a(3, 5), b;
    a.show();       // 출력: kick=3, punch=5
    b.show();       // 출력: kick=0, punch=0
    b = 2 * a;      // 전역 연산자 오버로딩을 통해 b = 2 * a 연산 지원
    a.show();       // 출력: kick=3, punch=5
    b.show();       // 출력: kick=6, punch=10
}

