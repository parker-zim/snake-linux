#include <stdlib.h>

using namespace std;

typedef struct coordinates
{
    int X;
    int Y;

    coordinates(){};

    coordinates(int x, int y)
    {
        X = x;
        Y = y;
    }

    void update_x(int x)
    {
        X = x;
    }

    void update_y(int y)
    {
        Y = y;
    }

    void update(int x, int y)
    {
        X = x;
        Y = y;
    }

} coordinates;

typedef struct velocity
{
    int X;
    int Y;

    velocity(){};

    velocity(int x, int y)
    {
        X = x;
        Y = Y;
    }

    void set_right()
    {
        X = 1;
        Y = 0;
    }

    void set_left()
    {
        X = -1;
        Y = 0;
    }

    void set_up()
    {
        X = 0;
        Y = -1;
    }

    void set_down()
    {
        X = 0;
        Y = 1;
    }
} velocity;

void go_to_x_y(int x, int y)
{
    printf("%c[%d;%df", 0x1b, y, x + 1);
}