#include <iostream>

using namespace std;

int main() {
    int limit1, limit2;
    int percent1, percent2, percent3;
    cin >> percent1 >> limit1 >> percent2 >> limit2 >> percent3;
    int money;
    float ddv = 0;
    cin >> money;
    int temp = money;
    if (temp >= limit1) {
        ddv += (limit1 * percent1 / 100.0);
        temp -= limit1;
    } else {
        ddv += (temp * percent1 / 100.0);
        temp-=limit1;
    }
    if (temp >= limit2) {
        ddv += (limit2 * percent2 / 100.0);
        temp -= limit2;
    } else {
        ddv += (temp * percent2 / 100.0);
        temp-=limit2;
    }
    if(temp>0){
        ddv+=(temp*percent3/100.0);
    }

    cout << ddv;
    return 0;
}