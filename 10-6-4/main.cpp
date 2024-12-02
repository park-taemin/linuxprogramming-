#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 주어진 행렬 초기화
    vector<vector<int>> matrix = {
        {-5,  2,  35},
        {-20, 5,  100},
        {-75, 5, -25}
    };

    // 행렬 원소 수정
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] < 0) {
                matrix[i][j] = 0; // 음수는 0으로 수정
            } else {
                matrix[i][j] = 255; // 양수는 255로 수정
            }
        }
    }

    // 수정된 행렬 출력
    cout << "수정된 행렬:" << endl;
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}

