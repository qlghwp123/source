/*
두 변수 간 값 교환이 이루어지지 않은 모습을 볼 수 있다.
Swap 함수의 매개변수로 포인터를 쓰지 않은 경우에 발생하는 문제이다
*/

#include <stdio.h>

void Swap(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;

    printf("n1 n2 : %d %d\n", n1, n2);
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    printf("num1 num2 : %d %d\n", num1, num2);

    Swap(num1, num2);

    printf("num1 num2 : %d %d\n", num1, num2);

    return 0;
}