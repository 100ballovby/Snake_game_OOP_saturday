#include <iostream>
#include <ctime>
using namespace std;

#define sq(x) x * x
#define WIDTH 50
#define HEIGHT 25

int score;

void board() {
    for (int i = 0; i < HEIGHT; i++) {
        cout << "\t\t#";
        for (int j = 0; j < WIDTH - 2; j++) {
            if (i == 0 || i == HEIGHT - 1) {
                cout << "#";
            } else {
                cout << ' ';
            }
        }
        cout << "#\n";
    }
}

int main() {
    score = 0;
    srand(time(NULL));
    char game_over = false;

    while (!game_over) {
        board();
    }

    return 0;
}
