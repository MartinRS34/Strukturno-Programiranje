#include <iostream>

using namespace std;
int returnNumber(char c){
    switch (c) {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
    }
}
int main() {
    char znak;
    int zbir = 0;
    while (cin >> noskipws >> znak) {
        if (znak == '!') {
            break;
        } else {

                if (znak >= '0' && znak <= '9') {
                    char temp;
                    cin>>temp;
                    if(temp>='0'&&temp<='9'){
                        int broj = returnNumber(znak)*10 + returnNumber(temp);
                        zbir+=broj;
//                        cout<<broj<<" ";
                    }else{
//                        cout<<znak<<" ";
//                        cout<<returnNumber(znak)<<" ";
                        zbir+= returnNumber(znak);
//                    zbir += returnNumber(znak);
//                    cout << zbir;
                    }
                if(temp=='!'){
                    break;
                }
                }
        }
    }
    cout<<zbir;
}

