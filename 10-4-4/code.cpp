#include "code.hpp"  // "code.hpp" 헤더파일 포함
// namespace A 구현
namespace A {
	// Student 클래스의 이름, 성적 설정하는 멤버함수
	void Student::set(string name, int grade)
	{
		// 이름, 성적 설정
		this->name = name; this->grade = grade;
	}
	// Student 클래스의 이름 반환하는 멤버함수
	string Student::getName() { return this->name; }
	// Student 클래스의 성적 반환하는 멤버함수
	int Student::getGrade() { return this->grade; }
	// < 연산자 함수
	bool Student::operator <(Student s2)
	{
		// 현재 객체의 성적과 s2 객체의 성적중 현재 객체 성적 값이 더 크면 true 반환
		if ((this->grade) < s2.grade) return true;
		else return false; // 아니면 false 반환
	}
}
