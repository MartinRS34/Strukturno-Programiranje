#include <iostream>

using namespace std;

int main() {
    int sum_paren = 0, sum_neparen = 0, a, b, c, d;
    cin >> a >> b >> c >> d;
    sum_paren = a + b;
    sum_neparen = c + d;
    if (sum_paren % 2 == 0 && sum_neparen % 2 == 1) {
            cout << "1";
    } else {
        cout << "0";
    }
}