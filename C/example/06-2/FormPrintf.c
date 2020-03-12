/*
printf : 서식이 지정된 형태의 출력 즉, 출력양식이 만들어진 상태에서 출력을 진행한다.
*/

#include <stdio.h>

int main(void)
{

    int myAge=24;

    printf("제 나이는 10진수로 %d살, 16진수로 %X살입니다.", myAge, myAge);

    return 0;

}