#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int numStudents = 3;
    const int numSubjects = 3;

    vector<vector<int>> scores(numStudents, vector<int>(numSubjects));
    vector<double> averages(numStudents);

    // 입력 및 평균 계산
    for (int i = 0; i < numStudents; i++) {
        cout << i + 1 << "번째 학생의 국어, 영어, 수학 점수를 입력하세요: ";
        int total = 0;
        for (int j = 0; j < numSubjects; j++) {
            cin >> scores[i][j];
            total += scores[i][j];
        }
        averages[i] = static_cast<double>(total) / numSubjects;
    }

    // 최우수 학생 찾기
    int bestStudentIndex = 0;
    for (int i = 1; i < numStudents; i++) {
        if (averages[i] > averages[bestStudentIndex]) {
            bestStudentIndex = i;
        }
    }

    // 결과 출력

    cout << "\n최우수 학생은 " << bestStudentIndex + 1
         << "번째 학생이고 평균 점수는 " << averages[bestStudentIndex] << "점 입니다." << endl;

    return 0;
}

