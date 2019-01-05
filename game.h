#include <iostream>
#include <stdlib.h>
#include "definitions.h"

void init_field()
{
    system("clear");
    for (int i = 0; i <= FENCE_BOTTOM; i++)
    {
        for (int j = 0; j <= FENCE_RIGHT; j++)
        {
            if (i == FENCE_TOP || i == FENCE_BOTTOM || ((j == FENCE_LEFT || j == FENCE_RIGHT) && (i > FENCE_TOP && i < FENCE_BOTTOM)))
            {
                cout << FENCE_CHAR;
            }
            else
            {
                cout << FIELD_CHAR;
            }
        }
        cout << endl;
    }
}
