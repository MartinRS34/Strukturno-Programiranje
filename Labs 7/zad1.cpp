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
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == j) {
               // matrix[i][j] *= -1;
                if(matrix[i][j]<0){
                    matrix[i][j]*=-1;
                } else{
                    matrix[i][j]*=-1;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}