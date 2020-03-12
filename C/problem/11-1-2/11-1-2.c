//char형 1차원 배열을 선언과 동시에 다음 문장의 내용으로 초기화하고, 초기화 이후에는 저장된 내용을 출력하는 예제를 작성해보자.
//참고로 C언어는 배열 기반의 문자열 저장 및 출력에 대한 별도의 기준을 제공하고 있다. 그리고 이와 관련해서
//이어서 설명을 한다. 하지만 이 문제는 지금까지 우리가 공부한 내영의 범위 내에서 해결해야 한다.
//"Good time"
#include <stdio.h>

int main(void)
{
    char str[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
    int len = sizeof(str) / sizeof(char);
    int i;

    for (i = 0; i < len; i++)
        printf("%c", str[i]);

    return 0;
}