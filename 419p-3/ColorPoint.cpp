#include <iostream>
#include <string>
using namespace std;

// Point 클래스 정의
class Point {
    int x, y; // 점의 x, y 좌표
public:
    // 생성자 (x, y 좌표 초기화)
    Point(int x, int y) { this->x = x; this->y = y; }
    
    // x 좌표 반환
    int getX() { return x; }
    
    // y 좌표 반환
    int getY() { return y; }
    
protected:
    // 점의 위치를 이동 (x, y 좌표 변경)
    void move(int x, int y) { this->x = x; this->y = y; }
};

// Point 클래스를 상속받은 ColorPoint 클래스 정의
class ColorPoint : public Point {
    string color; // 점의 색상
public:
    // 생성자 (x, y 좌표와 색상 초기화)
    ColorPoint(int x, int y, string color) : Point(x, y) {
        this->color = color;
    }
    
    // 점의 위치를 설정하는 메서드
    void setPoint(int x, int y) { move(x, y); }
    
    // 점의 색상을 설정하는 메서드
    void setColor(string color) { this->color = color; }
    
    // 점의 정보를 출력하는 메서드
    void show() {
        cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl;
    }
};

int main() {
    // ColorPoint 객체 생성 및 정보 출력
    ColorPoint cp(5, 5, "RED");
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show();
}

