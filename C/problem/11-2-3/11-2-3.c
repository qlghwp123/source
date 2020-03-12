//프로그램 사용자로부터 영단어를 입력 받는다. 그리고 나서 입력 받은 영단어를 구성하는 문자 중에서 아스키 코드의 값이
//가장 큰 문제를 찾아서 출력하는 프로그램을 작성해보자. 예를 들어서 입력된 영단어가 "LOVE"라면 이 중에서 아스키 코드 값이 가장 큰 문자는
//V이므로 V가 출력되어야 한다.
#include <stdio.h>

int main(void)
{
    char input[50];
    int idx = 0, count = 0;
    int i;
    char max;

    printf("영단어를 입력하세요 : ");
    scanf("%s", input);

    while (input[idx] != '\0')
        idx++, count++;

    max = input[0];
    for (i = 0; i < count; i++)
        if (max < input[i])
            max = input[i];

    printf("입력된 문자열 중 아스키 코드 값이 가장 큰 문자는 %c입니다. \n", max);

    return 0;
}