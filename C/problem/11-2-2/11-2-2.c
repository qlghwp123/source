//프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장한다. 그 다음 배열에 저장된 영단어를 역순으로 뒤집는다.
//물론 이 때에 널 문자의 위치를 변경해서는 안 된다. 뒤집고 나서는 제대로 뒤집혀졌는지 확인하기 위해서 출력해보자.
#include <stdio.h>

int main(void)
{
    char str[100];
    char temp;
    int i, len = 0, idx = 0;

    printf("영단어를 입력하세요 : ");
    scanf("%s", str);

    while (str[idx] != '\0')
        len++, idx++;

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("역순으로 정렬한 영단어 : %s\n", str);

    return 0;
}