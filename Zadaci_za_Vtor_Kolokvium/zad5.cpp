#include <iostream>

using namespace std;


int brojElementi(int n, int index, int niza[]) {
    if (index == n) {
        return 0;
    }
    return brojElementi(n, index + 1, niza) + (niza[index] > 0);

}


int main() {
    int niza[100], n, index;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> niza[i];
    }

    cout << brojElementi(n, 0, niza) << endl;
}