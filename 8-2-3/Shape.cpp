#include <iostream>
using namespace std;

// 기본 클래스 정의
class Shape {
private:
    int x, y; // 위치 좌표

public:
    // 생성자
    Shape(int x, int y) : x(x), y(y) {
        cout << "Shape 생성\n";
    }

    // 소멸자
    virtual ~Shape() {
        cout << "Shape 소멸\n";
    }

    // 좌표값 접근을 위한 getter 메서드
    int getX() const { return x; }
    int getY() const { return y; }

    // 출력 함수 (가상 함수)
    virtual void show() const = 0;
};

// Circle 클래스 정의
class Circle : public Shape {
private:
    int radius; // 반지름

public:
    // 생성자
    Circle(int x, int y, int r) : Shape(x, y), radius(r) {
        cout << "Circle 생성\n";
    }

    // 소멸자
    ~Circle() {
        cout << "Circle 소멸\n";
    }

    // 정보 출력
    void show() const override {
        cout << "좌표 (" << getX() << ", " << getY() << ")에 반지름 " << radius << "인 원\n";
    }
};

// Rect 클래스 정의
class Rect : public Shape {
private:
    int width, height; // 너비와 높이

public:
    // 생성자
    Rect(int x, int y, int w, int h) : Shape(x, y), width(w), height(h) {
        cout << "Rect 생성\n";
    }

    // 소멸자
    ~Rect() {
        cout << "Rect 소멸\n";
    }

    // 정보 출력
    void show() const override {
        cout << "좌표 (" << getX() << ", " << getY() << ")에 폭 " << width << ", 높이 " << height << "인 직사각형\n";
    }
};

// Triangle 클래스 정의
class Triangle : public Shape {
private:
    int base, height; // 밑변과 높이

public:
    // 생성자
    Triangle(int x, int y, int b, int h) : Shape(x, y), base(b), height(h) {
        cout << "Triangle 생성\n";
    }

    // 소멸자
    ~Triangle() {
        cout << "Triangle 소멸\n";
    }

    // 정보 출력
    void show() const override {
        cout << "좌표 (" << getX() << ", " << getY() << ")에 밑변 " << base << ", 높이 " << height << "인 삼각형\n";
    }
};

int main() {
    // 객체 생성 및 정보 출력
    Circle x(0, 0, 2); // Circle 생성
    Rect y(1, 1, 5, 10); // Rect 생성
    Triangle z(2, 2, 5, 10); // Triangle 생성

    // 정보 출력
    x.show();
    y.show();
    z.show();

    return 0;
}

