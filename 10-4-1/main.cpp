#include <iostream>  // 표준 입출력 라이브러리
#include<string>   // String 라이브러리
#include<vector>   // vector 라이브러리
#include <algorithm>  // 알고리즘 라이브러리
using namespace std; // 표준 namespace 사용
// main 함수
int main(void)
{
	int n;         // 변수
	vector<int>v;  // 정수 저장할 벡터
	// 정수 4개 입력 요청 메시지 출력
	cout << "정수 4개를 입력하시오: ";
	// 정수 입력 반복문
	for (int i = 0; i < 4; i++)
	{
		cin >> n;  // 입력받은 정수 n에 저장
		v.push_back(n);  // v에 n 저장
	}
	vector<int>::iterator it;   // 이터레이터
	// 최대값
	it = max_element(v.begin(), v.end());
	// 최대값 출력
	cout << "최대값은 " << *it << endl;
	// 최솟값
	it = min_element(v.begin(), v.end());
	// 최솟값 출력
	cout << "최소값은 " << *it << endl;
	// 벡터 전체 오름차순 정렬
	sort(v.begin(), v.end()); 
	// 오름차순 출력
	cout << "오름차순 결과는 ";
	// 반복문
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << ' ';  // 벡터 요소 출력
	// 벡터 전체 내림차순 정렬
	sort(v.begin(), v.end(), std::greater<int>());
	// 내림차순
	cout << endl << "내림차순 결과는 ";
	// 반복문
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << ' ';  // 벡터 요소 출력
	cout<<endl;  // 줄바꿈
	return 0;   // 프로그램 종료
}
