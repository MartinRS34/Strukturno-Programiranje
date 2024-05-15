//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int n, x;
//    cin >> n >> x;
//    int temp;
//    for (int i = n - 1; i < n; ++i) {
//        temp = i;
//        while (temp > 0) {
//            int cifra = 0;
//            cifra = temp % 10;
//            temp /= 10;
//        }
//        for (int j = x; j <= x; --j) {
//            temp = j;
//            while (temp > 0) {
//                int cifra = 0;
//                cifra = temp % 10;
//                temp /= 10;
//            }
//            if (i != j) {
//                cout << i;
//                break;
//            }
//        }
//    }
//}





#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int closest = -1;

    for (int i = n - 1; i > 0; --i) {
        int temp_i = i;
        bool hasSameDigits = false;

        while (temp_i > 0 && !hasSameDigits) {
            int cifra_i = temp_i % 10;
            temp_i /= 10;

            int temp_x = x;
            while (temp_x > 0) {
                int cifra_x = temp_x % 10;
                temp_x /= 10;

                if (cifra_i == cifra_x) {
                    hasSameDigits = true;
                    break;
                }
            }
        }

        if (!hasSameDigits) {
            closest = i;
            break;
        }
    }

    if (closest != -1) {
        cout << closest << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
