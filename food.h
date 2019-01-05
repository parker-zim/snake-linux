#include <iostream>
#include <stdlib.h>
//#include "position.h"
#include "definitions.h"

struct food
{

    coordinates food_pos;

    food()
    {
        int pos_x = ((rand() % FIELD_WIDTH) + FENCE_LEFT);
        int pos_y = ((rand() % FIELD_HEIGHT) + FENCE_TOP);
        food_pos = coordinates(pos_x, pos_y);
    }

    void show_food()
    {
        go_to_x_y(food_pos.X, food_pos.Y);
        cout << FOOD_CHAR;
    }

    int get_x()
    {
        return food_pos.X;
    }

    int get_y()
    {
        return food_pos.Y;
    }
};