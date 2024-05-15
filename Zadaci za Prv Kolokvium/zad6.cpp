#include <iostream>

using namespace std;

int main() {
    int number, zbir = 0, brojac1 = 0, brojac = 0;
    int a, b;
    float procent = 0;
    cin >> number;
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        zbir = a + b;
        if (number == zbir) {
            brojac++;
        }
        brojac1++;
    }
    cout << "Vnesovte " << brojac <<" parovi od broevi chij zbir e " << number << endl;
    cout << "Procentot na parovi so zbir "<<number<<" e "<<(double ) brojac/brojac1*100 << "%";
}
