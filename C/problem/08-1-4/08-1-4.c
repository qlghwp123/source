//위의 문제2를 if~else문을 이용해서 해결하였는가? 어떠한 형태로 해결했던 간에 조건 연산자를 이용하는 형태로 프로그램을 변경해 보자.

#include <stdio.h>

int main(void)
{
    int small, big;
    int result;

    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &small, &big);

    //내가 한 방법
    small > big ? printf("%d\n", small - big) : printf("%d\n", big-small);

    //답지
    result = small>big ? small-big : big-small;
    printf("%d\n", result);
}