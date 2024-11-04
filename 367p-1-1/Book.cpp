#include <iostream>
#include <string>
using namespace std;

// Book 클래스 선언
class Book {
    string title;   // 책 제목
    int price, pages;   // 책 가격과 페이지 수
public:
    // 생성자: 기본값으로 제목은 빈 문자열, 가격과 페이지 수는 0으로 초기화
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;  // 멤버 변수 title을 매개변수 title로 초기화
        this->price = price;  // 멤버 변수 price를 매개변수 price로 초기화
        this->pages = pages;  // 멤버 변수 pages를 매개변수 pages로 초기화
    }
    
    // 책 정보를 출력하는 메서드
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }
    
    // 책 제목을 반환하는 메서드
    string getTitle() { return title; }
    
    // 가격을 증가시키는 += 연산자 오버로딩
    Book& operator += (int a);
    
    // 가격을 감소시키는 -= 연산자 오버로딩
    Book& operator -= (int a);
};

// += 연산자 오버로딩 구현: 책의 가격을 매개변수만큼 증가
Book& Book::operator += (int a) {
    price += a;  // price에 a를 더함
    return *this;  // 현재 객체(Book 객체)를 반환
}

// -= 연산자 오버로딩 구현: 책의 가격을 매개변수만큼 감소
Book& Book::operator -= (int a) {
    price -= a;  // price에서 a를 뺌
    return *this;  // 현재 객체(Book 객체)를 반환
}

int main() {
    // Book 객체 생성: 제목과 가격, 페이지 수를 각각 설정
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    
    a += 500;  // a의 가격에 500원 추가
    b -= 500;  // b의 가격에서 500원 감소
    
    // 각 객체의 정보 출력
    a.show();
    b.show();
}

