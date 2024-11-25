#include "code.hpp"
using namespace A;   // 표준 namespace 사용
// main 함수
int main(void)
{
	vector<Student>st;       // Student 객체를 저장할 벡터
	Student s; // Student 클래스의 s 객체
	string name; int grade;   // 변수
	// 이름과 성적 입력받는 반복문
	for (int i = 0; i < 3; i++)
	{
		// 이름과 성적 입력 요청 메시지 출력
		cout << "이름과 성적을 입력: ";
		cin >> name >> grade;  // 이름과 성적 입력
		s.set(name, grade);  // 입력받은 이름과 성적 s에 저장
		st.push_back(s);  // s를 벡터 st에 저장
	}
	vector<Student>::iterator it;   // 이터레이터
	it = max_element(st.begin(), st.end());  // st 벡터에서 성적이 가장 높은 학생 찾기
	// 최우수 학생 출력
	cout << "최우수 학생은" << endl;
	cout << "이름" << it->getName() << endl;      // 이름 출력
	cout << "성적: " << it->getGrade() << endl;  // 성적 출력
	return 0;   // 프로그램 종료
}
