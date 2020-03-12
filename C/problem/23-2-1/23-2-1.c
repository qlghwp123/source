//문제 생략
#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct rectangle
{
    Point left_up;
    Point right_down;
} Rectangle;

void ShowRectangleArea(Rectangle *rect)
{
    printf("넓이 : %d\n", ((rect->right_down).xpos - (rect->left_up).xpos) * ((rect->right_down).ypos - (rect->left_up).ypos));
}

void ShowRectangleInfo(Rectangle *rect)
{
    printf("left up : (%d, %d)\n", (rect->left_up).xpos, (rect->left_up).ypos);
    printf("right up : (%d, %d)\n", (rect->right_down.xpos), (rect->left_up).ypos);
    printf("left down : (%d, %d)\n", (rect->left_up).xpos, (rect->right_down).ypos);
    printf("right down : (%d, %d)\n", (rect->right_down).xpos, (rect->right_down).ypos);
}

int main(void)
{
    Rectangle rect = {
        {0, 0},
        {100, 100}};

    ShowRectangleArea(&rect);
    ShowRectangleInfo(&rect);

    return 0;
}