//프로그램 사용자로부터 초(second)를 입력 받은 후에, 이를 [시, 분, 초]의 형태로 출력하는 프로그램을 작성해 보자.
//초(second)입력 : 3615
//[h:1, m:0, s:15]
#include <stdio.h>

void Call_time(int sec)
{
    int hour, min, second;
    int temp=sec;

    hour=temp/3600;
    temp -= hour*3600;
    
    min=temp/60;
    temp -= min*60;

    second = temp;

    printf("[h: %d, m: %d, s: %d]\n", hour, min, second);
}

int main(void)
{
    int sec;

    printf("초(second)입력 : ");
    scanf("%d", &sec);

    Call_time(sec);

    return 0;
}