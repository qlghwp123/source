/*
8진수 16진수를 출력하는 서식을 지정하는 예제이다.
서식문자 글자 사이에 #을 추가하면 그 진수에 따라 알맞게 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int num1=7, num2=13;

    printf("%o %#o\n", num1, num1);
    printf("%o %#o\n", num2, num2);
    //printf("%#d\n",num1, num1);

    return 0;
}