#include <iostream>

using namespace std;

int main() {
    int zbir = 0, i, n, produkti[100];
    float prosek = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> produkti[i];
    }
    for (int i = 0; i < n; ++i) {
        zbir += produkti[i];
    }
    prosek = (float) zbir / n;
    cout << "Zbir: " << zbir << endl << "Prosek: " << prosek << endl;
    for (int i = 0; i < n; ++i) {
        if (produkti[i] < prosek) {
            produkti[i] = 0;
        } else {
            produkti[i] = 1;
        }
        cout << produkti[i];
    }
}
