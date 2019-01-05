#include <stdlib.h>
#include <iostream>
#include <list>
//#include "position.h"
#include "definitions.h"

struct snake
{
    int Len = 1;
    int growth = 0;
    coordinates head_pos;
    list<coordinates> tail_positions;
    list<coordinates>::iterator iter;
    coordinates temp_pos;
    velocity veloc;

    bool alive = true;

    //constructor
    snake()
    {
        int x = (FIELD_WIDTH / 2) + FENCE_LEFT;
        int y = (FIELD_HEIGHT / 2) + FENCE_TOP;
        head_pos = coordinates(x, y);
        veloc.set_right();

        // tail 1
        temp_pos = coordinates(x - 3, y);
        tail_positions.push_front(temp_pos);

        // tail 2
        temp_pos = coordinates(x - 2, y);
        tail_positions.push_front(temp_pos);

        // tail 3
        temp_pos = coordinates(x - 1, y);
        tail_positions.push_front(temp_pos);

        Len = Len + 3;
    }

    void move()
    {
        if (will_die(head_pos.X + veloc.X, head_pos.Y + veloc.Y))
        {
            alive = false;
        }

        if (growth > 0)
        {
            growth = growth - 1;
            grow();
        }
        else
        {
            temp_pos = tail_positions.back();
            tail_positions.back();
            temp_pos.update(temp_pos.X + veloc.X, temp_pos.Y + veloc.Y);
            tail_positions.push_front(temp_pos);
        }

        head_pos.update(head_pos.X + veloc.X, head_pos.Y + veloc.Y);
    }

    void grow()
    {
        temp_pos = coordinates(head_pos.X, head_pos.Y);
        tail_positions.push_back(temp_pos);
        Len++;
    }

    //display the snake
    void show()
    {
        go_to_x_y(head_pos.X, head_pos.Y);
        print_head();

        for (iter = tail_positions.begin(); iter != tail_positions.end(); iter++)
        {
            go_to_x_y(iter->X, iter->Y);
            cout << SNAKE_BODY_CHAR;
        }
    }

    bool will_die(int x, int y)
    {
        if (x < FENCE_LEFT || y < FENCE_TOP || x >= FENCE_RIGHT || y >= FENCE_BOTTOM)
        {
            return true;
        }
        return hit_tail(x, y);
    }

    bool hit_tail(int x, int y)
    {

        for (iter = tail_positions.begin(); iter != tail_positions.end(); iter++)
        {
            if (x == iter->X && y == iter->Y)
            {
                return true;
            }
        }
        return false;
    }

    void print_head()
    {
        if (veloc.X == 0)
        {
            if (veloc.Y == 1)
            {
                cout << SNAKE_HEAD_D;
            }
            else
            {
                cout << SNAKE_HEAD_U;
            }
        }
        else
        {
            if (veloc.X == 1)
            {
                cout << SNAKE_HEAD_R;
            }
            else
            {
                cout << SNAKE_HEAD_L;
            }
        }
    }
};