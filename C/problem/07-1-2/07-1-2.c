//프로그램 사용자로부터 양의 정수를 하나 입력
//받은 다음, 그 수만큼  3의 배수를 출력하는
//프로그램을 작성해보자. 예를 들어서 5를 입력 
//받았다면, 3 6 9 12 15를 출력해야한다.

#include <stdio.h>

int main(void)
{
    int times=0, num=1;

    printf("양수를 입력하세요 : ");
    scanf("%d", &times);

    while(num<=times)
    {
        printf("%d ", 3*num);
        num++;
    }
    /* num이 0일 경우 아래의 코드를 사용하는 것이 더 낫다.
    while(num++<times)
        printf("%d ", 3*num);
    */
    return 0;
}