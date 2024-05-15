#include <iostream>
#include <iomanip>

using namespace std;

void
printField(char field[100][100], int M, int N, int xIgrac, int yIgrac, int xTopka, int yTopka, int x1Gol, int y1Gol,
           int x2Gol, int y2Gol) {
    // Печатиње на фудбалскиот терен
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == xIgrac && j == yIgrac) {
                cout << 'i';
            } else if (i == xTopka && j == yTopka) {
                cout << 'o';
            } else if ((i == x1Gol || i == x2Gol) && j >= y1Gol && j <= y2Gol) {
                cout << ']';
            } else {
                cout << '-';
            }
        }
        cout << endl;
    }
}

int main() {
    int M, N; // Големина на теренот
    cin >> M >> N;

    char field[100][100]; // Матрица за фудбалскиот терен
    int xIgrac, yIgrac, xTopka, yTopka, x1Gol, y1Gol, x2Gol, y2Gol; // Локации за играчот, топката и голот

    cin >> xIgrac >> yIgrac >> xTopka >> yTopka >> x1Gol >> y1Gol >> x2Gol >> y2Gol;

    // Генерирање на фудбалскиот терен
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            field[i][j] = '-';
        }
    }

    // Иницијализација на почетните позиции на играч, топка и гол
    field[xIgrac][yIgrac] = 'i';
    field[xTopka][yTopka] = 'o';
    for (int j = y1Gol; j <= y2Gol; ++j) {
        field[x1Gol][j] = ']';
        field[x2Gol][j] = ']';
    }

    // Печатење на почетниот фудбалски терен
    printField(field, M, N, xIgrac, yIgrac, xTopka, yTopka, x1Gol, y1Gol, x2Gol, y2Gol);

    // Поместување на топката и проверка на резултат
    int moveX, moveY;
    cin >> moveX >> moveY;

    xTopka += moveX;
    yTopka += moveY;

    // Проверка дали топката се наоѓа во гол, надвор од теренот или во теренот
    if (xTopka >= 0 && xTopka < M && yTopka >= 0 && yTopka < N) {
        if ((xTopka == x1Gol || xTopka == x2Gol) && (yTopka >= y1Gol && yTopka <= y2Gol)) {
            cout << "GOAL";
        } else {
            cout << xTopka << " " << yTopka << endl;
            field[xTopka][yTopka] = 'o';
            printField(field, M, N, xIgrac, yIgrac, xTopka, yTopka, x1Gol, y1Gol, x2Gol, y2Gol);
        }
    } else {
        cout << "OUT";
    }

    return 0;
}
