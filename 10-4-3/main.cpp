#include <iostream>  // 표준 입출력 라이브러리
#include<string>   // String 라이브러리
#include<vector>   // vector 라이브러리
#include <algorithm>  // 알고리즘 라이브러리
using namespace std; // 표준 namespace 사용
// main 함수
int main(void)
{
	string n;         // 변수
	vector<string>v;  // 정수 저장할 벡터
	// 정수 입력 반복문
	for (int i = 0; i < 5; i++)
	{
		// 문자열 입력 요청 메시지 출력
		cout << "문자열을 입력하시오: ";
		cin >> n;  // 입력받은 문자열 n에 저장
		v.push_back(n);  // v에 n 저장
	}
	vector<string>::iterator it;   // 이터레이터
	// 사전에서 나오는 순서대로 정렬
	sort(v.begin(), v.end());
	// 사전에서 나오는 순서대로 정렬된 벡터 출력
	cout << "사전에서 나오는 순서" << endl;
	// 반복문
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << endl;  // 벡터 요소 출력
	return 0;   // 프로그램 종료
}
