#include <iostream>
#include <vector>

using namespace std;

// 행렬 타입 정의
typedef vector<vector<int>> Matrix;

// 행렬 덧셈 함수
Matrix addMatrices(const Matrix& A, const Matrix& B) {
    int rows = A.size();
    int cols = A[0].size();
    Matrix result(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

// 행렬 출력 함수
void printMatrix(const Matrix& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    // 입력 행렬 정의
    Matrix A = {
        {2, 4},
        {5, -5}
    };
    Matrix B = {
        {-2, 3},
        {0, -5}
    };

    // 행렬 덧셈 수행
    Matrix result = addMatrices(A, B);

    // 결과 출력
    cout << "연산 결과:" << endl;
    printMatrix(result);

    return 0;
}

