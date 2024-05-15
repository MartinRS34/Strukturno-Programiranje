
// 1.Најголем интересен број помал од n
// 2.Пресметка на обратниот број
// 3.Пресметка на бројот на цифри
// 4.Проверка дали обратниот број е делив со бројот на цифри
// 5.Прекини го циклусот откако ќе најдеш прв "интересен" број
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    // 1.Најголем интересен број помал од n
    if (n < 9) {
        cout << "Brojot ne e validen";
    } else {
        int largestInteresting = -1;
        for (int i = n - 1; i > 0; --i) {
            int temp = i;
            // 2.Пресметка на обратниот број
            int obraten = 0;
            while (temp > 0) {
                int cifra = 0;
                cifra = temp % 10;
                obraten = obraten * 10 + cifra;
                temp /= 10;
            }
            // 3.Пресметка на бројот на цифри
            int counter = 0;
            temp = i;
            while (temp > 0) {
                temp /= 10;
                counter++;
            }
            // 4.Проверка дали обратниот број е делив со бројот на цифри
            if (obraten % counter == 0) {
                largestInteresting = i;
                break;
            }
        }
        cout << largestInteresting;
        // 5.Прекини го циклусот откако ќе најдеш прв "интересен" број
//        if (largestInteresting != -1) {
//            cout << largestInteresting;
//        } else {
//            cout << n;
//        }

    }
}

