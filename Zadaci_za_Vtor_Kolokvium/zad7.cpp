//
// Created by mrozi on 1/14/2024.
//
#include <iostream>

#define MAX 100
using namespace std;


int sumOfNumbers(int n, int m, int matrix[MAX][MAX]) {

    //go nemav ova
    int farthestNumber;  // Претпоставка: првиот елемент е најблизок
    float overallDivisor;
    int result[MAX];

    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < m; ++j) {
            sum += matrix[i][j];
//            temp = j;
        }
        float divisor = static_cast<float>(sum) / m; //temp;

        //go nemav ovoj del
        int farthestIndex = 0;
        int farthestDistance = abs(divisor - matrix[i][0]);

        for (int j = 1; j < m; ++j) {
            int distance = abs(divisor - matrix[i][j]);
            if (distance > farthestDistance) {
                farthestIndex = j;
                farthestDistance = distance;
            }
        }

        //go nemav ova
        result[i] = matrix[i][farthestIndex];
    }

    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    return farthestNumber;
}


int main() {
    int matrix[MAX][MAX], n, m;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    sumOfNumbers(n, m, matrix);
}