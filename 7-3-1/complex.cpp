#include <iostream>

using namespace std;

class Complex{
private:
	double real;
	double img;

public:
    // 생성자: 실수부와 허수부를 초기화
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    // + 연산자 오버로딩 함수: 두 개의 Complex 객체를 더하여 새로운 Complex 객체 반환
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, img + c.img);
    }

    // 복소수를 출력하는 함수
    void show() const {
        if (img >= 0)
            cout << real << "+" << img << "j" << endl;  // 허수부가 양수일 때
        else
            cout << real << img << "j" << endl;         // 허수부가 음수일 때
    }
};
		
int main(){
	Complex x(2,3),y(-5,10),sum;
	sum = x + y;
	cout << "두 복소수의 합은";
	sum.show();
	return 0;
}
