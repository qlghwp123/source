/*
#ifdef..#endif 의 사용을 보인다.
*/
#include <stdio.h>

//#define ADD 1
#define MIN 0

int main(void)
{
    int num1, num2;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

#ifdef ADD
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
#endif

#ifdef MIN
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
#endif

    return 0;
}