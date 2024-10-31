#include <iostream>
using namespace std;

class Power {
private:
    int kick, punch; // kick과 punch 멤버 변수

public:
    // 생성자: kick과 punch 초기화
    Power(int k = 0, int p = 0) : kick(k), punch(p) {}

    // - 연산자 오버로딩: Power 객체에서 정수를 빼는 연산을 수행
    Power operator-(int value) {
        return Power(kick - value, punch - value);
    }

    // show 함수: kick과 punch 값을 출력
    void show() const {
        cout << "kick=" << kick << ", punch=" << punch << endl;
    }
};

int main() {
Power a(3, 5), b;
a.show();
b.show();

b = a - 2; // 파워 객체와 정수 빼기
a.show();
b.show();

return 0;
}

