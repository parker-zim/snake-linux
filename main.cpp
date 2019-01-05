#include <iostream>
//#include </usr/include/curses.h>
#include "position.h"
#include "game.h"
#include "food.h"
#include "snake.h"

using namespace std;

//the snake just ate some food
/* void eat() {

    //reset food to a new position  
    food = new Food(); 
    while (tailPositions.contains(food.pos)) { //make sure the food isnt on the snake
      food = new Food();
    }
   
    //increase time left to live
    leftToLive += 100;

    //if testing then grow by 4 but if not and the snake is still small only grow by 1
    //this is for helping snakes evolving so they dont get too big too soon
    if (test||len>=10) {
      growCount += 4;
    } else {
      growCount += 1;
    }
  } */

int main()
{
  srand(time(NULL));
  init_field();
  food *f = new food();
  f->show_food();
  snake *s = new snake();
  s->show();
  go_to_x_y(0,28);
  // for (s->iter = s->tail_positions.begin(); s->iter != s->tail_positions.end(); s->iter++)
  // {
  //   cout << s->iter->X << "-" << s->iter->Y << "---";
  // }

  return 0;
}