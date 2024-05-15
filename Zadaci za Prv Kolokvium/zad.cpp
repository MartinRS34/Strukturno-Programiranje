#include <iostream>
using namespace std;
int main() {
    int n, digit = 0,counter=0, zbir = 0, digit1 = 0, temp;
    cin >> n;
    if (n < 9) {
        cout << "Brojot ne e validen";
    } else {
        int largestInteresting=-1;
        for (int i = n - 1; i > 0; --i) {
            temp = i;
            int reverse_number = 0;
            int obraten = 0;
            while (temp > 0) {
                int cifra = 0;
                cifra = temp % 10;
                obraten = obraten * 10 + cifra;
                temp /= 10;
            }
            temp=i;
            while (temp>0){
                temp/=10;
                counter++;
            }
            if(reverse_number%counter==0){
                largestInteresting=i;
                break;
            }
        }
        cout<<largestInteresting;
    }
}