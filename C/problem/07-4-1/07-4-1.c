//프로그램 사용자로부터 두 개의 정수를 입력 받아서, 두 정수를 포함하여 그 사이에
//존재하는 정수들의 합을 계산해서 출력하는 프로그램을 작성해보자. 예를 들어서
//3과 5가 입력되면 3+4+5의 결과가 출력되어야 한다. 그리고 문제를 조금 더
//간단히 하기 위해서 첫 번째 정수는 두 번째 정수보다 작아야한다는 조건을 걸기로
//하겠다.

#include <stdio.h>

int main(void)
{
    int small, big, i, total=0;

    printf("두 정수를 입력 : ");
    scanf("%d %d", &small, &big);

    for(i=small;i<=big;i++)
        total += i;
    
    printf("총 합 : %d\n", total);

    return 0;
}