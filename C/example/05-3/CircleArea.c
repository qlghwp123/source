/*
실수 자료형 선택에 있어 가장 중요한 요소는 정밀도이다.
double은 15자리 이하까지는 오차가 없음을 보여준다.
double형 데이터 출력에는 %f를 쓰고 입력 때는 %lf를 쓴다.
*/
#include <stdio.h>

int main(void)
{
    double rad;
    double area;

    printf("원의 반지름 입력 : ");
    scanf("%lf", &rad);

    area = rad*rad*3.14;

    printf("원의 넓이 : %f\n", area);

    return 0;

}