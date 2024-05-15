//
// Created by mrozi on 1/8/2024.
//
#include <iostream>
#include <cmath>

using namespace std;

float prosek(float m, float niza[]) {
    float zbir = 0;
    for (int i = 0; i < m; ++i) {
        zbir += niza[i];
    }
    float average;
    average = zbir / m;
    return average;
}


float najdi_element_do_prosek(float m, float niza[]) {
    float prosek_vrednost = prosek(m, niza);
    float najblisk = niza[0];
    float razlika = prosek_vrednost - niza[0];
    if (razlika < 0) {
        razlika = -razlika;
    }

    if (razlika < 0) {
        razlika = -razlika;
    }
    for (int i = 0; i < m; ++i) {
        float nova_razlika = prosek_vrednost - niza[i];
        if (nova_razlika < 0) {
            nova_razlika = -nova_razlika;
        }
        if (nova_razlika < razlika) {
            razlika = nova_razlika;
            najblisk = niza[i];
        }
    }
    return najblisk;
}

int main() {
    int n;
    float niza[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> niza[i];
    }

    float result = najdi_element_do_prosek(n, niza);
    printf("%.2f\n", result);
}