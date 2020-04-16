#include <stdio.h>

int min3(int a, int b, int c)
{
    int min;

    min = a;

    if(min > a)
        min = a;
    if(min > b)
        min = b;
    if(min > c)
        min = c;

    return min;
}

int main(void)
{
    printf("min3(%d, %d, %d) = %d\n", 3, 5, 7, min3(3, 5, 7));
    printf("min3(%d, %d, %d) = %d\n", 9, 11, 7, min3(9, 11, 7));
    printf("min3(%d, %d, %d) = %d\n", 35, 5, 7, min3(35, 5, 7));

    return 0;
}