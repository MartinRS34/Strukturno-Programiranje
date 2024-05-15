#include <iostream>

#define MAX 100
using namespace std;

float sumOfMainDiagonal(int n, float matrixA[MAX][MAX]) {
    float sumOfX = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > j) {
                sumOfX += matrixA[i][j];
            }
        }
    }
    return sumOfX;
}

float sumOfSecondaryDiagonal(int m, float matrixA[MAX][MAX]) {
    float sumOfY = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i + j >= m) {
                sumOfY += matrixA[i][j];
            }
        }
    }
    return sumOfY;
}

void replaceDiagonalsWithSumsAndMiddleElement(int n, float matrix[MAX][MAX]) {
    float sumBelowMainDiag = sumOfMainDiagonal(n, matrix);
    float sumBelowSecondaryDiag = sumOfSecondaryDiagonal(n, matrix);

    //float middleElement = matrix[n / 2][n / 2];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                matrix[i][j] = sumBelowMainDiag;
            } else if (i + j == n - 1) {
                matrix[i][j] = sumBelowSecondaryDiag;
            } else {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int n;
    float matrix[MAX][MAX];
    cin >> n;

    //if (n > 2) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    replaceDiagonalsWithSumsAndMiddleElement(n, matrix);

    // Отпечати ја новата матрица
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    //}
    return 0;
}