#include <iostream>

using namespace std;

int main() {
    int number, del1, del2, del3, del4, del5, zbir = 0;
    cin >> number;
    del1 = number / 10000;
    del2 = (number / 1000) % 10;
    del3 = (number / 100) % 10;
    del4 = (number / 10) % 10;
    del5 = number % 10;
    zbir = del2 + del3;
    if (number / zbir) {
        cout << "0";
    } else if (del1 < del3 < del5) {
        cout << "1";
    } else {
        cout << "-1";
    }


}