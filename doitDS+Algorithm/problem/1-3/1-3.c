#include <stdio.h>

int min4(int a, int b, int c, int d)
{
    int min;

    min = a;

    if(min > b)
        min = b;
    if(min > c)
        min = c;
    if(min > d)
        min = d;
    
    return min;
}

int main(void)
{

    printf("min4(%d, %d, %d, %d) = %d\n", 3, 2, 7, 9, min4(3, 2, 7, 9));

    return 0;
}