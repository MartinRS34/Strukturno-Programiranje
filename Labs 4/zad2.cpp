#include <iostream>

using namespace std;

/* n-> oznacuva kolku semestri ima zapisano eden student
 * m -> oznacuva kolku vneseni oceni ke ima studentot
 * p -> oznacuva kolku predvideni predmeti imame vo semestar
 */
int main() {
    int n;
    int grade = 0, total_subject;
    int counter = 0;
    float semester_average = 0;
    //cout << "Vnesi kolku semestri ke ima: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        //cout << "Vnesi kolku oceni ima: ";
        int m;
        cin >> m;

        //cout << "Vnesi kolku ocenki po predmeti ke ima: ";
        for (int i = 0; i < m; ++i) {
            cin >> grade;
            semester_average += grade;
            if (grade > 5) {
                counter++;
            }
        }
        semester_average /= (float) m;
//        int total_subject = 0;
        cin >> total_subject;

        double semester_averages = ((semester_average / m) * (total_subject / total_subject) +
                                    (1 - (total_subject / total_subject)));
        if (semester_average > semester_averages) {
            semester_average = semester_averages;
            //break;
        } else {
        }
    }
    cout << (counter / total_subject) * 100;

    //cout<<semester_average;

}