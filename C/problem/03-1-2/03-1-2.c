//프로그램 사용자로부터 세 개의 정수 num1, num2, num3를 순서대로 입력 받은 후에, 다음 연산의 결과를
//출력하는 프로그램을 작성해보자
//num1*num2+num3
//단, 입력 받은 세 개의 정수가 2, 4, 6이라면 다음의 형태로 출력을 해야한다.
//2*4+6=14
#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int result;

    printf("세 개의 정수를 입력하세요. :");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = num1*num2+num3;
    printf("%d*%d+%d=%d\n", num1, num2, num3, result);

    return 0;
}