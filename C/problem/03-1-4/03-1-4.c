//입력 받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성해보자
//예를 들어서 7과 2가 입력 되면 몫으로 3, 나머지는 1이 출력되어야 한다.
#include <stdio.h>

int main(void)
{
    int num1, num2;
    int quota, rest;

    printf("두 정수를 입력하세요. : ");
    scanf("%d %d", &num1, &num2);

    quota=num1/num2;
    rest=num1%num2;

    printf("몫 : %d 나머지 : %d\n", quota, rest);

    return 0;
}