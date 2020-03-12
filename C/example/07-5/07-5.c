/*
[0:n]구간의 모든 오소의 합을 구하는 그리고 for문을 사용한 예제이다.
*/

#include <stdio.h>

int main(void)
{
    int total=0;
    int i, num;

    printf("0부터 num까지의 덧셈, num은? ");
    scanf("%d", &num);

    for(i=0;i<num+1;i++)
        total += i;

    printf("0부터 %d까지의 덧셈 : %d\n", num, total);

    return 0;
}