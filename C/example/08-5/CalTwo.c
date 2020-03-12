/*
이전 if만 사용해서 만든 예제 08-2 를 if~else if~else 를 사용하여 이전 예제보다 연산의 수가 줄어든 모습을 보여준다.
*/

#include <stdio.h>

int main(void)
{
    int opt;
    double num1, num2;
    double result;

    printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 \n");
    printf("선택? ");
    scanf("%d", &opt);

    printf("두 개의 실수 입력 : ");
    scanf("%lf %lf", &num1, &num2);

    if( opt == 1)
        result = num1 + num2;
    else if( opt == 2 )
        result = num1 - num2;
    else if( opt == 3 )
        result = num1 * num2;
    else
        result = num1 / num2;

    printf("결과 : %f\n", result);
    
    return 0;

}