//바로 위에서 UsefulDoWhile.c 를 while문 기반으로 재구현할 경우, 생각해볼 수
//있는 구현의 형태는 2가지이다. 그 두 가지 방법은 다음과 같다.
//1. 변수 num의 값을 적절히 초기화해서 첫 번째 반복조건의 검사결과가 '참'이
//되게한다.
//2. while문에 진입하기 전에 프로그램 사용자로부터 값을 1회 입력 받게 한다.
//이 2가지 방법을 각각 적용해서 예제 UsefulDoWhile.c를 while문 기반으로
//재구현해보자. 참고로 어떠한 방법이든 do~while문을 적용했을 때보다
//부자연스럽다는 느낌이 들 것이다.

#include <stdio.h>

int main(void)
{
    int total=0, num=1;

    //답지에는 ( num != 0 ) 이다. 아마도 수의 범위가 정수이니까 이렇게 한듯하다.
    while(num>0)
    {
        printf("정수 입력 (0 to quit) : ");
        scanf("%d", &num);

        total += num;
    }

    printf("총 합 : %d\n", total);

    return 0;
}