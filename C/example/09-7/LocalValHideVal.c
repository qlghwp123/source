/*
지역변수는 외부에 선언된 동일한 이름의 변수를 가리게 되는 것을 보여주는 예제이다.
*/

#include <stdio.h>

int main(void)
{
    int num = 1;

    if(num == 1)
    {
        int num =7;
        
        num += 10;
        printf("if문 내 지역변수 num : %d\n", num);
    }

    printf("main 함수 내 지역변수 num : %d\n", num);

    return 0;
}