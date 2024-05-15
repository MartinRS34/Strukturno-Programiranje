#include <iostream>

using namespace std;

int main() {
    int n, n1[100], zbir1 = 0, zbir2 = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> n1[i];
    }
    for (int i = 0; i < n; ++i) {
        if (n1[i] % 2 == 0) {
            n1[i] += 3;
        } else {
            if (n1[i] % 5 == 0) {
                n1[i] -= 2;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout<<n1[i]<<" ";
    }
}