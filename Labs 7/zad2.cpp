#include <iostream>

using namespace std;

int main() {
    int n, m, matrix[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int min = matrix[0][0];
    int max = matrix[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    cout << min << " " << max;
}
