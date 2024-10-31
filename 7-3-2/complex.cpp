#include <iostream>
using namespace std;

class Complex{
private:
	int real,img;
public:
Complex(int r = 0, int i = 0) : real(r), img(i) {}

    // + 연산자 오버로딩 함수: 두 복소수를 더해서 새로운 복소수를 반환
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, img + c.img);
    }

    // * 연산자 오버로딩 함수: 두 복소수를 곱해서 새로운 복소수를 반환
    Complex operator*(const Complex &c) {
        int newReal = real * c.real - img * c.img;
        int newImg = real * c.img + img * c.real;
        return Complex(newReal, newImg);
    }

    // 복소수를 출력하는 함수
    void show() const {
        if (img >= 0)
            cout << real << "+" << img << "j" << endl; // 허수부가 양수인 경우
        else
            cout << real << img << "j" << endl; // 허수부가 음수인 경우
    }
};

int main() {
Complex x(2, 3), y(-5, 10), sum;
sum = x * y;
cout << "두 복소수의 곱은";
sum.show();
return 0;
}
