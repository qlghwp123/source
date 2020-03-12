/*
전위, 후위연산자의 학습이다.
*/

#include <stdio.h>

int main(void)
{
    int num1=12;
    int num2=12;

    printf("num1 : %d\n", num1);
    printf("num1++ : %d\n", num1++); //num1 출력 후 그 다음 num1 이 증가된다.
    printf("num1 : %d\n\n", num1);

    printf("num2 : %d\n", num2);
    printf("++num2 : %d\n", ++num2); //num2 +=1 과 같을까?
    printf("%d == num += 1\n", num2 += 1); //돌려보니 그냥 값만 남는다. 수식의 결과 유무(1/0)를 출력하진 않는다.
    printf("num2 : %d\n\n", num2); 

    return 0;
}