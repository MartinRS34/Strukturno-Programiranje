#include <iostream>

using namespace std;

int main() {
    int a, b, tmp;
    cin >> a >> b;
    if(a>b){
        tmp=a;
        a=b;
        b=tmp;
    }
    for (int i = a; i < b; ++i) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }
}