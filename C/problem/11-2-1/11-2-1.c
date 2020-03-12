//프로그램 사용자로부터 하나의 영단어를 입력 받아서 입력 받은 영단어의 길이를 계산하여 출력하는 프로그램을
//작성해보자. 예를 들어서 "Arrayy" 라는 단어가 입력되면 5가 출력되어야 한다.
#include <stdio.h>

int main(void)
{
    char input[100];
    int idx = 0, count = 0;

    printf("영단어를 입력하세요 : ");
    scanf("%s", input);

    while (input[idx] != '\0')
        count++, idx++;

    printf("영단어 길이는 %d입니다.\n", count);

    return 0;
}