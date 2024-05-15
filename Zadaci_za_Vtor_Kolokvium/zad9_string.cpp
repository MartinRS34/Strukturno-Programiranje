#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool ePalindrom(const string &recenica) {
    string cistaRecenica;  // За чистење на реченицата од интерпункциски знаци и празни места

    // Пополнување на cistaRecenica со само буквите од recenica
    for (int i = 0; i < recenica.length(); i++) {
        char karakter = recenica[i];
        if (isalpha(karakter)) {
            cistaRecenica += tolower(karakter);  // Претворање во мала буква
        }
    }


    // Проверка за палиндром
    int dolzina = cistaRecenica.length();
    for (int i = 0; i < dolzina / 2; ++i) {
        if (cistaRecenica[i] != cistaRecenica[dolzina - 1 - i]) {
            return false;  // Не е палиндром
        }
    }

    return true;  // Е палиндром
}

int main() {
    string recenica;
    getline(cin, recenica);

    if (ePalindrom(recenica)) {
        cout << "Palindrom." << endl;
    } else {
        cout << "Ne palindrom." << endl;
    }

    return 0;
}
