#include <iostream>

using namespace std;

int main() {
    int zbir = 0;
    char c;
    while (1) {
        cin >> c;
        c = tolower(c);
        switch (c) {
            case 'a':
                zbir += 10;
                break;
            case 'b':
                zbir += 11;
                break;
            case 'c':
                zbir += 12;
                break;
            case 'd':
                zbir += 13;
                break;
            case 'e':
                zbir += 14;
                break;
            case 'f':
                zbir += 15;
                break;
            default:
                if (c >= '0' && c <= '9') {
                    zbir+=(c-'0');
                }
        }
        if (c == '.') {
            break;
        }
    }
    int last_Digit;
    last_Digit = zbir % 10;
    int lastDigit2 = zbir/10%10;
    if(zbir%16==0||last_Digit==6||lastDigit2==1) {

//TODO najdi first digit i staj go u i operator dole ovaj if
        if (zbir%16==0&&lastDigit2 == 1 && last_Digit == 6) {
            cout << "Poln pogodok";
            return 0;
        }else if(zbir%16==0){
            cout<<"Pogodok";
            return 0;
        }
    }
//    else{
//        if(zbir%16!=0){
//            cout<<zbir;
//            return 0;
//        }
//    }
    cout<<zbir;
}
