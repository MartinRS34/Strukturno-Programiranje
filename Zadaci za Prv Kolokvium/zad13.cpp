//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int number, max = 0;
//    int zbir = 0,pred_max=0,flag= false;
//    while (cin >> number) {
//        cout << number << ": ";
//        int zbir = 0;
//        int temp=number;
//        while (temp > 0) {
//            int digit = temp % 10;
//            zbir += digit;
//            temp /= 10;
//        }
//        zbir+=pred_max;
//        pred_max=0;
//        max=0;
//        while (number>0){
//            int digit = number%10;
//            if (digit > max) {
//                max = digit;
//            }
//            number /=10;
//        }
//        pred_max=max;
//        cout << zbir << endl;
//    }
//    return 0;
//}
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
        cout<<largestInteresting;
    }
}

