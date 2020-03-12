/*
자동 형 변환의 예를 보여준다.
1. 정수 -> 실수 : 소수점이 붙게됨. 실수 표현이라 오차 발생, 데이터 손실X
2. 실수 -> 정수 : 소수부의 손실
3. 큰 정수 -> 작은 정수 : 상위 바이트 손실로 값이 변경됨.
*/

#include <stdio.h>

int main(void)
{
    double num1=245;
    int num2=3.141592;
    int num3=129;
    char ch=num3;

    printf("정수245를 실수로 : %f\n", num1);
    printf("실수 3.141592 를 정수로 : %d\n", num2);
    printf("큰 정수 129를 작은 정수 : %d\n", ch);

    return 0;
}