#include <iostream>   // 표준 입출력 라이브러리 포함
#include <string>     // string 클래스 사용을 위한 라이브러리 포함
using namespace std;

class Book {
    string title;   // 책 제목
    int price, pages;   // 책 가격과 페이지 수
public:
    // 생성자: 기본값으로 제목은 빈 문자열, 가격은 0, 페이지는 0으로 초기화
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;   // 매개변수로 받은 title을 멤버 변수에 할당
        this->price = price;   // 매개변수로 받은 price를 멤버 변수에 할당
        this->pages = pages;   // 매개변수로 받은 pages를 멤버 변수에 할당
    }

    // 책 정보를 출력하는 함수
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }

    // 책 제목을 반환하는 함수
    string getTitle() { return title; }

    // friend 함수로 operator< 연산자 오버로딩: 문자열과 Book 객체 비교를 위해
    friend bool operator < (string title, Book op2);
};

// 문자열과 Book 객체의 제목을 비교하는 operator< 오버로딩 함수
bool operator < (string title, Book op2) {
    if (title < op2.title)    // 매개변수로 받은 title이 Book의 title보다 사전적으로 앞에 있으면 true
        return true;
    return false;             // 그렇지 않으면 false 반환
}

int main() {
    Book a("청춘", 20000, 300);  // 제목이 "청춘", 가격이 20000원, 페이지가 300인 Book 객체 생성
    string b;                    // 사용자 입력을 받을 문자열 변수 b 선언
    cout << "책 이름을 입력하세요>>";   // 사용자에게 책 이름 입력 요청
    getline(cin, b);             // 사용자로부터 책 이름을 입력받음

    // 사용자가 입력한 제목 b가 Book 객체 a의 제목보다 사전적으로 뒤에 있는지 확인
    if (b < a)
        cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}

