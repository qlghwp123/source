/*
#연산자를 사용하여 문자열을 대체하는 예제이다.
*/
#include <stdio.h>

#define STRING_JOB(A, B) #A "의 직업은 " #B " 입니다."

int main(void)
{
    printf("%s \n", STRING_JOB(이동춘, 나무꾼));
    printf("%s \n", STRING_JOB(한상순, 사냥꾼));

    return 0;
}