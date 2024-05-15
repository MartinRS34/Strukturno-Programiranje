#include <iostream>

using namespace std;

int main() {
    int a, b, i;
    int total = 0, zbir = 0;
    cin >> a >> b;
    for (int i = a + 1; i <= b; ++i) {
        if (i % 2 == 0 && i % 7 == 0) {
            cout << i << endl;
            total++;
            //cout << total;
        } else if (i % 2 == 1 && i % 3 != 0) {
            cout << "" << i << endl;
            total++;
        }
    }
    if (total == 0) {
        cout << "0";
    } else {
//        zbir = i / total;
        cout << ((float)total/float(b-a))*100<<"%";
    }
}