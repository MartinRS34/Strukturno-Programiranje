#include <iostream>
#include <cstring>
#include <ctype.h>

#define MAX 100

using namespace std;

void cleanString(char *str) {
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
}

int countConjunctions(char *str) {
    int inWord = 0;
    int len = 0;
    int conjunctions = 0;
    while (*str) {
        if (isalpha(*str)) {
            inWord = 1;
            ++len;
        } else {
            if (len <= 3 && len > 0) {
                ++conjunctions;
            }
            len = 0;
            inWord = 0;
        }
        ++str;
    }
    if (len <= 3 && inWord) {
        ++conjunctions;
    }
    return conjunctions;
}

int main() {
    char line[MAX];
    int maxConjunctions = 0;
    char maxLine[MAX];
    int first = 1;
    while (fgets(line, sizeof(line), stdin)) {
        if (first) {
            strcpy(maxLine  , line);
//            maxLine = line;
            first = 0;
        }

        cleanString(&line[0]);
        // cout << line << endl;
        int conjunctions = countConjunctions(&line[0]);
        if (conjunctions > maxConjunctions) {
           // maxLine = line;
            maxConjunctions = conjunctions;
        }
    }

    cout << maxConjunctions << ": " << maxLine;
    return 0;
}
