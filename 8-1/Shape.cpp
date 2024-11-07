#include <iostream>
using namespace std;

// 기본 클래스 정의: Shape
class Shape {
private:
    int x, y; // 위치 좌표를 private으로 선언

public:
    void setPosition(int xPos, int yPos) {
        x = xPos;
        y = yPos;
    }

    void showPosition() const {
        cout << "좌표 (" << x << ", " << y << ")에 ";
    }
};

// 파생 클래스 정의: Circle
class Circle : public Shape {
private:
    int radius;

public:
    void setCircle(int xPos, int yPos, int r) {
        setPosition(xPos, yPos); // Shape의 setPosition 사용
        radius = r;
    }

    void show() const {
        showPosition();
        cout << "반지름 " << radius << "인 원" << endl;
    }
};

// 파생 클래스 정의: Rect
class Rect : public Shape {
private:
    int width, height;

public:
    void setRect(int xPos, int yPos, int w, int h) {
        setPosition(xPos, yPos); // Shape의 setPosition 사용
        width = w;
        height = h;
    }

    void show() const {
        showPosition();
        cout << "폭 " << width << ", 높이 " << height << "인 직사각형" << endl;
    }
};

// 파생 클래스 정의: Triangle
class Triangle : public Shape {
private:
    int base, height;

public:
    void setTriangle(int xPos, int yPos, int b, int h) {
        setPosition(xPos, yPos); // Shape의 setPosition 사용
        base = b;
        height = h;
    }

    void show() const {
        showPosition();
        cout << "밑변 " << base << ", 높이 " << height << "인 삼각형" << endl;
    }
};

int main() {
    Circle x;
    Rect y;
    Triangle z;

    x.setCircle(0, 0, 2);   // 원의 위치와 반지름 설정
    y.setRect(1, 1, 5, 10); // 직사각형의 위치, 폭, 높이 설정
    z.setTriangle(2, 2, 3, 4); // 삼각형의 위치, 밑변, 높이 설정

    x.show(); // 원 출력
    y.show(); // 직사각형 출력
    z.show(); // 삼각형 출력

    return 0;
}

