#include <iostream>

using namespace std;

int main() {
    float jabuki_g, jabuki_c, malini_g, malini_c, banani_g, banani_c, popust, popust1 = 0, popust2 = 0, vkupno_jabuki = 0, vkupno_malini = 0, sum = 0;
    float vkupno_banani = 0, popust3 = 0, sum_banani = 0, studentski_obrok, vkupno;
    cin >> jabuki_g >> jabuki_c >> malini_g >> malini_c >> banani_g >> banani_c >> studentski_obrok >> popust;
    //proveruvame gramazata i studetski obrok sto vnesuvame
    if (jabuki_g == 200) {
        vkupno_jabuki = (jabuki_g * jabuki_c) / 100;
        popust1 = (vkupno_jabuki * popust) / 100;
        sum = vkupno_jabuki - popust1;
        if (studentski_obrok == 140) {
            vkupno = studentski_obrok - sum;
        } else {
            cout << "Sumata e ista: " << sum;
        }
    }
    else if (jabuki_g >= 500) {
        vkupno_jabuki = (jabuki_g * jabuki_c) / 100;
        popust1 = (vkupno_jabuki * popust) / 100;
        sum = vkupno_jabuki - popust1;
        if (studentski_obrok == 140) {
            vkupno = studentski_obrok - sum;
        } else {
            cout << "Sumata e ista: " << sum;
        }
    } else if (malini_g == 200) {
        vkupno_malini = (malini_g * malini_c) / 100;
        popust2 = (vkupno_malini * popust) / 100;
        sum = vkupno_malini - popust2;
        if (studentski_obrok == 140) {
            vkupno = studentski_obrok - sum;
        } else {
            cout << "Sumata e ista: " << sum;
        }
    } else if (malini_g >= 500) {
        vkupno_malini = (malini_g * malini_c) / 100;
        popust2 = (vkupno_malini * popust) / 100;
        sum = vkupno_malini - popust2;
        if (studentski_obrok == 140) {
            vkupno = studentski_obrok - sum;
        } else {
            cout << "Sumata e ista: " << sum;
        }
    } else if (banani_g == 200) {
        vkupno_banani = (banani_g * banani_c) / 100;
        popust3 = (vkupno_banani * popust) / 100;
        sum = vkupno_banani - popust3;
        if (studentski_obrok == 140) {
            vkupno = studentski_obrok - sum;
        } else {
            cout << "Sumata e ista: " << sum;
        }
    } else if (banani_g >= 500) {
        vkupno_banani = (banani_g * banani_c) / 100;
        popust3 = (vkupno_banani * popust) / 100;
        sum = vkupno_banani - popust3;
        if (studentski_obrok == 140) {
            vkupno = studentski_obrok - sum;
        } else {
            cout << "Sumata e ista: " << sum;
        }
    } else {
        cout << "0";
    }
    cout << vkupno;
}