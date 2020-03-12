/*
구조체 변수 배열을 선언하고 사용법을 보인다.
구조체 배열 요소의 멤버 주소를 사용할 때 다음과 같이 쓴다.
*/

#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

int main(void)
{
    struct point arr[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("점의 좌표 입력 : ");
        scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
    }

    for (i = 0; i < 3; i++)
        printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);

    return 0;
}