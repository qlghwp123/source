/*
3중 포인터의 사용을 보여준다.
*/

#include <stdio.h>

int main(void)
{
    int num = 100;
    int *ptr = &num;
    int **dptr = &ptr;
    int ***tptr = &dptr;

    printf("%d %d\n", **dptr, ***tptr);

    return 0;
}