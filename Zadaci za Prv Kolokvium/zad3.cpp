#include <iostream>

using namespace std;

int main() {

    int n;
    int brojNaDeliteli = 0;
    int zbir = 0;
    int najgolemBroj = 0;
    int najgolemZbir=0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                zbir += j;
            }
        }
        if (zbir > najgolemZbir) {
            najgolemZbir=zbir;
            najgolemBroj = i;
        }
        zbir = 0;
    }
    cout << najgolemBroj;
}