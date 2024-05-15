#include <iostream>

using namespace std;

int main() {
    int a, b, temp;
    cin >> a >> b;
    cout << "Razlika na broevite pred zamenata e: " << a - b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "Razlika na broevite posle zamenata e: " << a - b;
}