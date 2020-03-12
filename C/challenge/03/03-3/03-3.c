//중략
//위의 예제에서는 0이상 RAND_MAX 이하의 난수를 총 5개 생성하고 있다.
//이 예제를 적절히 변경해서 0 이상 99 이하의 난수를 총 5개 생성하는 프로그램을 작성해보자.
//(힌트 : % 연산자를 적절히 활용하면 된다.)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    printf("난수의 범위 : 0부터 %d까지 \n", 99);

    for (i = 0; i < 5; i++)
        printf("난수 출력 : %d\n", rand() % 100);

    return 0;
}