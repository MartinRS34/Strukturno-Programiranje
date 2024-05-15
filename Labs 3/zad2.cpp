#include <iostream>

using namespace std;

int main() {
    int brcKrediti, year;
    float average, predicted_credits, points;
    cin >> brcKrediti >> year >> average;
    if (brcKrediti > 100 && average > 8) {
        predicted_credits = (2023 - year) * 60;
        points = (((brcKrediti / predicted_credits) * 10) + ((average - 8.5) * 6.5));
        if (brcKrediti > 240) {
            cout << "Needs to graduate! ";
        }
        if (average > 9) {
            cout << "Great Student! ";
        }
    } else {
        points = 0;
    }
    cout << "Points: " << points;

}