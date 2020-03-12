/*
매크로를 보여주는 예제이다.
단순히 상수뿐만이 아닌 함수도 치환할 수 있음을 보여준다.
*/

#include <stdio.h>

#define NAME "이동근"
#define AGE 24
#define PRINT_ADDR puts("주소 : 대구광역시 달서구 감삼동\n");

int main(void)
{
    printf("이름 : %s\n", NAME);
    printf("나이 : %d\n", AGE);
    PRINT_ADDR;

    return 0;
}