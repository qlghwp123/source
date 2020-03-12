//아래의 예제 실행 시 변수와 포인터 변수의 관계를 그림을 그려서 설명해보자. 또한 출력의 결과도 예상해 보자.
/*
#include <stdio.h>

int main(void)
{
    int num = 10;
    int *ptr1 = &num;
    int *ptr2 = ptr1;

    (*ptr1)++;
    (*ptr2)++;

    printf("%d\n", num);

    return 0;
}
*/
//내 답 : 출력의 결과는 12일 것이다.