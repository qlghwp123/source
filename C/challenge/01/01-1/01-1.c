//10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성해 보자. 이는 서식문자의 화룡에 대한 문제이므로 쉽게 해결할 수 있을 것이다.
#include <stdio.h>

int main(void)
{
    int num;

    printf("10진수 정수를 입력하세요. : ");
    scanf("%d", &num);

    printf("16진수 : %#x\n", num);

    return 0;
}