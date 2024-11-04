#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;  // 책 제목
    int price;     // 책 가격
    int pages;     // 책 페이지 수

public:
    // 생성자: 책 제목, 가격, 페이지 수를 초기화
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }

    // 책 정보를 출력하는 메서드
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }

    // 책 제목을 반환하는 메서드
    string getTitle() { return title; }

    // 외부 함수로 선언한 연산자 오버로딩을 friend로 선언
    friend Book& operator += (Book &op1, int a); // 책 가격에 a를 더하는 연산자
    friend Book& operator -= (Book &op1, int a); // 책 가격에서 a를 빼는 연산자
};

// += 연산자 오버로딩: 책 가격에 정수 a를 더함
Book& operator += (Book &op1, int a) {
    op1.price += a; // 책 가격 증가
    return op1;     // 객체 자신을 반환
}

// -= 연산자 오버로딩: 책 가격에서 정수 a를 뺌
Book& operator -= (Book &op1, int a) {
    op1.price -= a; // 책 가격 감소
    return op1;     // 객체 자신을 반환
}

int main() {
    // 두 개의 Book 객체 생성
    Book a("청춘", 20000, 300); // 제목: 청춘, 가격: 20000원, 페이지: 300
    Book b("미래", 30000, 500); // 제목: 미래, 가격: 30000원, 페이지: 500

    a += 500;  // a의 가격을 500원 증가
    b -= 500;  // b의 가격을 500원 감소

    a.show();  // a 객체의 정보 출력
    b.show();  // b 객체의 정보 출력
}

