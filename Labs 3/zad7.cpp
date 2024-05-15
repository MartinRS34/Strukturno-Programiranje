/*дмв=(вмв*пбб)*скд+CO2+kCO2 -> formula za premetuvanje na carina
 * дмв- данок на моторно возило;
 * вмв- вредност на моторно возило, купопродажната цена;
 * пбб- процент за гранични вредности на моторно возило;
 * скд- среден курс на НБРМ, на денарот во однос на еврото, 61,5 денари;
 * CO2- емисија на CO2 за соодветно моторно возило;
 * kCO2- коефициент кој треба да се пресмета од CO2;*/

//GRESKA VO PRESMETKI

#include <iostream>

using namespace std;

int main() {
    int vmv, co2, gorivo, zasteda, zashteda_sredstva, meseci_na_isplata, mesechen_prihod;
    float dmv = 0, kco2 = 0, pbb = 0, kamata = 0, kamatna_stapka = 0.02, rata = 0;
    float skd;
    cin >> vmv >> skd >> co2 >> gorivo >> zasteda >> zashteda_sredstva >> meseci_na_isplata >> mesechen_prihod;
    //if((vmv>0 && skd>0 && co2>0 && zashteda_sredstva>0 && meseci_na_isplata>0 && mesechen_prihod>0) && ((gorivo==0 || gorivo==1) && (zasteda==0 || zasteda==1))){
    if (vmv < 10000) {
        pbb = 0;
    } else if (vmv >= 10000 && vmv < 20000) {
        pbb = 0.05;
    } else if (vmv >= 20000 && vmv < 30000) {
        pbb = 0.10;
    } else {
        pbb = 0.15;
    }
    cout << pbb << endl;
    if (gorivo == 0) {
        if (co2 > 0 && co2 < 75) {
            kco2 = 5;
        } else if (co2 >= 75) {
            kco2 = 15;
        }
    } else if (gorivo == 1) {
        if (co2 > 0 && co2 < 75) {
            kco2 = 10;
        } else if (co2 >= 75) {
            kco2 = 20;
        }
    }
    cout << kco2 << endl;
    dmv = (vmv * pbb) * skd + co2 + kco2;
    cout << dmv << endl;
    if (zashteda_sredstva == 1) {
        int zastedena_suma = 0;
        zastedena_suma = vmv - zashteda_sredstva;
        cout << zastedena_suma << endl;
        if (zastedena_suma > vmv) {
            cout << "Ne treba da se zema kredit";
        } else {
            kamata = vmv * meseci_na_isplata * kamatna_stapka;
            rata = (kamata + vmv) / meseci_na_isplata;
        }
        cout << kamata << endl;
        cout << rata << endl;


        if (mesechen_prihod < rata) {
            cout << "Ne moze da podigne kredit";
        } else {
            cout << "Mesecnata rata vo denari: " << rata << endl;
            cout << "Vkupno: " << dmv + vmv;
        }
    }else{
        cout<<"Greska";
    }
} /*else{
        cout<<"Vnesen e negativen broj";
    }*/

/* камата се користи вкупната сума * на колку месеци е земмен кредитот*каматна стапка во проценти
 * пресметка на рата се користи  сума од каматата и вкупната сума поделена со број на месеци на кои е земен кредитот.*/