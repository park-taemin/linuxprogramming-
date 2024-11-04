#include <iostream>   // cout과 endl 사용을 위한 헤더 파일
#include <string>     // string 사용을 위한 헤더 파일
using namespace std;  // std 네임스페이스 사용

class Book {
    string title;   // 책 제목
    int price, pages;   // 가격과 페이지 수
public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }

    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }

    string getTitle() { return title; }

    bool operator!() {
        return this->price <= 0; // 가격이 0 이하이면 true 반환
    }
};

int main() {
    Book book("벼룩시장", 0, 50);
    if (!book) 
        cout << "공짜다" << endl;
}

