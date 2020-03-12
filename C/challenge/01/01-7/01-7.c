//프로그램 사용자로부터 숫자 n을 입력 받는다. 그리고 나서 다음 공식이 성립하는 k의 최댓값을 계산해서 출력하는 프로그램을 작성해 보자.
//2^k <= n
//상수 n 입력 : 256
//공식을 만족하는 k의 최댓값은 8
#include <stdio.h>

int main(void)
{
    int num, val, j, count=0;

    printf("상수 n 입력 : ");
    scanf("%d", &num);

    for(j=1;j<num;j*=2)
         count++;

    printf("공식을 만족하는 k의 최댓값은 %d\n", count-1);  

    return 0;
}