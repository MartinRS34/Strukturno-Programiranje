//resenie so dodatna biblioteka
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int prosek(int n, int niza[]) {
//    int zbir = 0;
//    for (int i = 0; i < n; ++i) {
//        zbir += niza[i];
//    }
//    return zbir / n;
//}
//
//void pomali_od_prosek(int n, int k, int niza[]) {
//    int pr = prosek(n, niza);
//
//    sort(niza, niza + n);
//
//    cout << k << "-te najmali elementi se: ";
//    for (int i = 0; i < k; ++i) {
//        cout << niza[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int n, k;
//    cin >> n >> k;
//    int niza[100];
//    for (int i = 0; i < n; ++i) {
//        cin >> niza[i];
//    }
//
//    pomali_od_prosek(n, k, niza);
//
//    return 0;
//}

//resenie bez dodatna biblioteka
 #include <iostream>

 using namespace std;

 int prosek(int n, int niza[]) {
     int zbir = 0;
     for (int i = 0; i < n; ++i) {
         zbir += niza[i];
     }
     return zbir / n;
 }

 void pomali_od_prosek(int n, int k, int niza[]) {
     int pr = prosek(n, niza);

     // Selection sort за првите k најмали елементи
     for (int i = 0; i < k; ++i) {
         int min_idx = i;
         for (int j = i + 1; j < n; ++j) {
             if (niza[j] < niza[min_idx]) {
                 min_idx = j;
             }
         }
         // Замени ги елементите
         int temp = niza[i];
         niza[i] = niza[min_idx];
         niza[min_idx] = temp;
     }

     cout << k << "-te najmali elementi se: ";
     for (int i = 0; i < k; ++i) {
         cout << niza[i] << " ";
     }
     cout << endl;
 }

 int main() {
     int n, k;
     cin >> n >> k;
     int niza[100];
     for (int i = 0; i < n; ++i) {
         cin >> niza[i];
     }

     pomali_od_prosek(n, k, niza);

     return 0;
 }
