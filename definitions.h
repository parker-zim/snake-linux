#ifndef _definitions_h
#define _definitions_h

#define FIELD_WIDTH 20
#define FIELD_HEIGHT 20
#define FIELD_TOP 6
#define FENCE_TOP (FIELD_TOP - 1)
#define FIELD_BOTTOM (FENCE_TOP + FIELD_HEIGHT)
#define FENCE_BOTTOM (FIELD_BOTTOM + 1)
#define FIELD_LEFT 1
#define FENCE_LEFT FIELD_LEFT - 1
#define FIELD_RIGHT (FENCE_LEFT + FIELD_WIDTH)
#define FENCE_RIGHT (FIELD_RIGHT + 1)
#define FIELD_CHAR '.'
#define FENCE_CHAR '#'
#define SNAKE_BODY_CHAR 'O'
#define SNAKE_HEAD_L '>'
#define SNAKE_HEAD_U 'v'
#define SNAKE_HEAD_R '<'
#define SNAKE_HEAD_D '^'
#define FOOD_CHAR '@'

#define PAUSE_LENGTH 1000 * 200 // 200 milliseconds

#endif