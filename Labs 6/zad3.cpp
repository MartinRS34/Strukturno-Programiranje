#include <iostream>

using namespace std;

int main() {
    int n, niza[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> niza[i];
    }
    for (int i = 1; i < n; i+=2) {
        niza[i] += niza[i - 1];
    }
    for (int i = 0; i < n; ++i) {
        cout << niza[i] << " ";
    }
}