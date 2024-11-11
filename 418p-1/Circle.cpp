#include <iostream>
#include <string>
using namespace std;

// Circle 클래스 정의
class Circle {
    int radius; // 반지름
public:
    // 생성자 (기본값으로 반지름 0)
    Circle(int radius = 0) { this->radius = radius; }
    
    // 반지름을 반환하는 메서드
    int getRadius() { return radius; }
    
    // 반지름을 설정하는 메서드
    void setRadius(int radius) { this->radius = radius; }
    
    // 원의 면적을 반환하는 메서드
    double getArea() { return 3.14 * radius * radius; }
};

// Circle을 상속받은 NamedCircle 클래스 정의
class NamedCircle : public Circle {
    string name; // 원의 이름
public:
    // 생성자 (반지름과 이름을 초기화)
    NamedCircle(int radius, string name) : Circle(radius) {
        this->name = name;
    }
    
    // 원의 정보를 출력하는 메서드
    void show() {
        cout << "반지름이 " << getRadius() << "인 " << name << endl;
    }
};

int main() {
    // NamedCircle 객체 생성 및 정보 출력
    NamedCircle waffle(3, "waffle");
    waffle.show();
}

