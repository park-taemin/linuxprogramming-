#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {-5,  2,  35},
        {-20, 5,  100},
        {-75, 5, -25}
    };

    int maxVal = matrix[0][0]; // 최대값 초기화
    int maxRow = 0, maxCol = 0; // 최대값 위치 초기화

    // 행렬 순회
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // 결과 출력
    cout << "최대값은 " << maxVal << endl;
    cout << "위치는 " << maxRow + 1 << "행 " << maxCol + 1 << "열" << endl;

    return 0;
}

