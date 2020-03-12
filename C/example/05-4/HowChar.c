/*
C언어에서 문자표현이 어떠한 기준으로 하는지 보여준다.
여기서 보여주는 것처럼 정수는 문자, 숫자로 표현 가능하다.
*/

#include <stdio.h>

int main(void)
{
    char ch1='A', ch2=65;
    int ch3='Z', ch4=90;

    printf("%c %d\n", ch1, ch1);
    printf("%c %d\n", ch2, ch2);
    printf("%c %d\n", ch3, ch3);
    printf("%c %d\n", ch4, ch4);

    return 0;


}