#ifndef HEAD   // 만약 HEAD가 정의되지 않았다면
#define HEAD   // HEAD를 정의하여 중복 포함을 방지
#include <iostream>  // 표준 입출력 라이브러리
#include<string>   // String 라이브러리
#include<vector>   // vector 라이브러리
#include <algorithm>  // 알고리즘 라이브러리
using namespace std; // 표준 namespace 사용
// namespace A 정의
namespace A {
	// Student 클래스
	class Student {
		string name;  // 이름
		int grade;    // 성적
	public:
		// 이름, 성적 설정하는 멤버함수
		void set(string name, int grade);
		string getName();  // 이름 반환하는 멤버함수
		int getGrade();    // 성적 반환하는 멤버함수
		// < 연산자 함수
		bool operator < (Student s2);
	};
}
#endif // !HEAD
