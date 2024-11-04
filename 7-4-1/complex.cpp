#include <iostream>
using namespace std;

class Complex {
private:
    int real; // 실수부
    int img;  // 허수부

public:
    // 생성자: 복소수를 초기화하고 생성 메시지 출력
    Complex(int r, int i) : real(r), img(i) {
        cout << "복소수 " << real << "+" << img << "j 생성\n";
    }

    // 전위 증가 연산자 오버로딩: real과 img 값을 1씩 증가
    Complex& operator++() {
        ++real;
        ++img;
        return *this;
    }

    // 전위 감소 연산자 오버로딩: real과 img 값을 1씩 감소
    Complex& operator--() {
        --real;
        --img;
        return *this;
    }

    // 후위 감소 연산자 오버로딩: real과 img 값을 1씩 감소
    Complex operator--(int) {
        Complex temp = *this;
        real--;
        img--;
        return temp;
    }

    // 복소수를 출력하는 함수
    void show() const {
        cout << real << "+" << img << "j\n";
    }
};

int main() {
    Complex x(2, 3); // 복소수 객체 x 생성 (2 + 3j)
    ++x; // 증가 연산 수행
    cout << "증가결과: ";
    x.show(); // 증가된 결과 출력

    x--; // 감소 연산 수행 (후위)
    cout << "감소결과: ";
    x.show(); // 감소된 결과 출력

    return 0;
}

