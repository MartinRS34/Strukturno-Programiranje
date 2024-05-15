#include <iostream>

using namespace std;

int main() {
    int x, n, m, matrix[100][100], i, j;
    cin >> x >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << matrix[i][j];
//        }
//        cout << endl;
//    }
    int temp = 0;
    for (i = 0; i < n; ++i) {
        int zbir_n = 0;
        for (j = 0; j < m; ++j) {
            zbir_n += matrix[i][j];
        }
        temp = zbir_n;
        if (temp < x) {
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = -1;
            }
        } else if (temp > x) {
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = 1;
            }
        } else {
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // cout << zbir_n << endl;
}