/*
후위 연산자의 학습이다.
과연 num2 값이 어떻게 될까??
--------------------------
후위 연산자는 소괄호 영향을 안받고, 다음 문장으로 넘어가야만 증가, 감소가 이뤄진다.
*/

#include <stdio.h>

int main(void)
{
    int num1=10;
    int num2=(num1--)+2;    //11을 예상한다.

    printf("num1 : %d\n", num1);
    printf("num2 : %d\n", num2);    //띠 ㅡ 용? 아니다. 12가 나온다 왜 일까?

    return 0;
    
}