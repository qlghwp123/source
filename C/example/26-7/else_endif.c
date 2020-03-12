/*
#else의 삽입부분을 볼 수 있다.
*/
#include <stdio.h>

#define HIT_NUM 5

int main(void)
{
#if HIT_NUM == 5
    puts("매크로 상수 HIT_NUM은 현재 5입니다.\n");
#else
    puts("매크로 상수 HIT_NUM은 현재 5가 아닙니다.\n");
#endif

    return 0;
}