#include <iostream>

using namespace std;

int main() {
    int number, c0 = 0, c1 = 0;
    cin >> number;
    c0 = (number % 10000) / 10;//go delam prvio broj
    cout << c0 << endl;
    c1 = (number / 10000) + (number % 10);
    cout << c1;
    return 0;
}