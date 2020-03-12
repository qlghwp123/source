//다음 수식인 계승(factorial)을 계산하는 프로그램을 작성해보자.
//n!= 1*2*3*4*5 * ... * n
//프로그램 사용자로부터 n에 해당하는 정수를 입력 받는다. 그러면 n의 계승
//n!를 계산해서 출력이 이뤄져야 한다.

#include <stdio.h>

int main(void)
{
    int total=1, num, i;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
        total *=i;

    printf("정수 %d의 n! : %d\n", num, total);

    return 0;
}