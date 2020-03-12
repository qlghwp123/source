//두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그램을 구현해 보자. 단, 무조건 큰 수에서 작은 수를 뺀 결과를 출력해야 한다. 예를 들어서 입력된 두 수가 순서에 상관없이
//12와 5라면 7이 출력되어야 하고, 입력된 두 수가 순서에 상관없이 4와 16이라면 12가 출력되어야 한다. 즉, 출력 결과는 무조건 0 이상이어야 한다.

#include <stdio.h>

int main(void)
{
    int small, big, temp;

    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &small, &big);

    temp = big>small ? 1 : 0;

    if(temp)
        printf("두 수의 차 : %d\n", big-small);
    else
        printf("두 수의 차 : %d\n", small-big);
    

    return 0;
}