#include <iostream>

using namespace std;

int main() {

    int brojEden,brojDva;
    cin>>brojEden>>brojDva;
    //Proveruvame dali brojo e negativen
    if(brojEden <= 0 || brojDva <= 0) {
        cout<<"Invalid input";
        return 0;
    }
    //Proveruvame dali Vrednosta sto se naogja vo brojEden e pomala od vrednosta sto se naogja vo brojDva
    if(brojEden < brojDva) {
        //Si gi menat mestata
        int temp=brojEden;
        brojEden=brojDva;
        brojDva=temp;
    }
    //Dali vrednosta kaj brojDva
    while(brojDva > 0) {
        //Go zema ostatokot i raboti so nego
        int tempBrDva=brojDva%10;
        //Proveruva dali brojEden e razlicen so brojDva
        if((brojEden/10)%10 != tempBrDva) {
            cout<<"NE";
            return 0;
        }
        brojDva/=10;
        brojEden/=100;
    }
    cout<<"PAREN";

}