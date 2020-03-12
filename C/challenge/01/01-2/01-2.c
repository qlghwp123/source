//프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해 보자.
//예를 들어서 프로그램 사용자가 3과 5를 입력하면 3단, 4단, 5단이 출력되어야 하고, 2와 4를 입력하면
//2단, 3단, 4단이 출력되어야 한다.
//단, 한 가지 조건이 있다. 사용자는 두 개의 숫자를 입력 할 때에 입력 순서에 자유로워야 한다.
//즉 3과 5를 입력하건 5와 3을 입력하건 프로그램은 같은 결과를 출력해야 한다.
#include <stdio.h>

int main(void)
{
    int num1, num2, i, j;
    int big, small;

    printf("두 개의 정수를 입력하세요. : ");
    scanf("%d %d", &num1, &num2);

    big = num1>num2 ? num1 : num2;
    small = num1 > num2 ? num2 : num1; 

    for(i=small;i<=big;i++)
    {
        for(j=1;j<10;j++)
            printf("%d X %d = %d\n", i, j, i*j);

        printf("\n");
    }

    return 0;

}