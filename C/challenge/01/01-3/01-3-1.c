//두 개의 정수를 입력 받아서 최대 공약수를 구하는 프로그램을 작성 해보자.
//두 개의 정수 입력: 6 9
//두 수의 최대공약수: 3
#include <stdio.h>

// 내가 한 것
int main(void)
{
    int num1, num2;
    int gcd=0, range;
    int i;

    printf("두 개의 정수를 입력하세요. : ");
    scanf("%d %d", &num1, &num2);

    range = num1<num2 ? num1 : num2;

    for(i=1;i<=range;i++)
    {
       if( num1%i == 0 && num2%i == 0 )
            gcd = i;
    }

    printf("gcd is %d\n", gcd);

    return 0;
}