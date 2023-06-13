//
// Created by Demid Raksin on 27.05.23.
//

#ifndef SNAKE_GAME_OOP_SATURDAY_SNAKE_H
#define SNAKE_GAME_OOP_SATURDAY_SNAKE_H

//#include <windows.h>
#include <vector>
#include "Coord.h"

#define WIDTH 50
#define HEIGHT 25


using namespace std;

class Snake {
private:
    COORD pos;
    int vel;
    char dir;
    int len;
    vector<COORD> body;
public:
    Snake(COORD pos, int vel);

    void grow();
    void move_snake();
    void direction(char dir);

    vector<COORD> get_body();

    bool collided();
    bool eaten(COORD food);

    COORD get_pos();
};

#endif //SNAKE_GAME_OOP_SATURDAY_SNAKE_H
